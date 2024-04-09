#include "announcer.hpp"

extern window win;
const int CAP_ANNOUNCER_CLK_COUNT = 70;

Announcer::Announcer(const int &img_directory, const int &sound_directory)
{
    this->img_directory = img_directory;
    this->sound_directory = sound_directory;
    play_sound_effect(sound_directory);
    this->remain_time = ANNOUNCER_CLK_COUNT;
    this->state = ANNOUNCING;
}

void Announcer::display()
{
    if (remain_time <= 0)
        return;
    int alpha = 255;
    double ratio = 1.0;
    double t = 0.1;
    if (remain_time > ANNOUNCER_CLK_COUNT - CAP_ANNOUNCER_CLK_COUNT)
    {
        alpha = 255 * (ANNOUNCER_CLK_COUNT - remain_time) / CAP_ANNOUNCER_CLK_COUNT;
        ratio = remain_time * (1.0 - t) / (ANNOUNCER_CLK_COUNT - CAP_ANNOUNCER_CLK_COUNT) + t;
    }
    win.set_texture_alpha(img_directory, alpha);
    win.draw_png_center(img_directory, ratio);
    remain_time--;
}

bool Announcer::is_finished()
{
    return remain_time <= 0;
}
