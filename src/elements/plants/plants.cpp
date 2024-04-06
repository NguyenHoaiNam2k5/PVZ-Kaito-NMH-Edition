#include "plants.hpp"
#include "draw/rsdl.hpp"
#include "elements/zombies/zombie_struct.hpp"
#include "music/music.hpp"

extern int game_state;
extern Map cells;
extern window win;

/*
Plant constructor
*/
Plants::Plants()
{
}

/*
Plant destructor
*/
Plants::~Plants()
{
}

/*
Plant display: nothing
*/
void Plants::display(const int &_row)
{
}

/*
Plant geter
@return plant's type
*/
int Plants::get_type()
{
    return type;
}

/*
Plant action virtual
*/
void Plants::action()
{
}

/*
Plant geter
@return plant's row
*/
int Plants::get_row()
{
    return row;
}

/*
Plant geter
@return plant's column
*/
int Plants::get_col()
{
    return col;
}

/*
Plant seter
Set plant's attacked time
*/
void Plants::set_attacked_time(const int &_attacked_time)
{
    attacked_time = _attacked_time;
}

/*
Decrease plant's health
*/
void Plants::decrease_health()
{
    --health;
}

/*
@return true if plant died (health <= 0)
*/
bool Plants::is_died()
{
    return health <= 0;
}

PlantAssets::PlantAssets(int _frame, int img_width, int img_height, int game_width, int game_height, int x_alias, int y_alias)
{
    this->frame = _frame;
    this->img_width = img_width;
    this->img_height = img_height;
    this->game_width = game_width;
    this->game_height = game_height;
    this->x_alias = x_alias;
    this->y_alias = y_alias;
}

void Plants::display(const PlantAssets &assets)
{
    // current frame
    int sframe = frame / assets.frame;
    // current column in source image
    int scol = sframe % all_img[directory_num].c_sheet;
    // current row in source image
    int srow = sframe / all_img[directory_num].c_sheet;
    // Plant
    win.draw_png(directory_num, assets.img_width * scol, assets.img_height * srow,
                 assets.img_width, assets.img_height,
                 cells[row][col].x1 + assets.x_alias, cells[row][col].y1 + assets.y_alias,
                 assets.game_width, assets.game_height);
    // Blink
    if (attacked_time)
    {
        win.draw_png(blink_of[directory_num], assets.img_width * scol, assets.img_height * srow,
                     assets.img_width, assets.img_height,
                     cells[row][col].x1 + assets.x_alias, cells[row][col].y1 + assets.y_alias,
                     assets.game_width, assets.game_height);
        if (check_status(game_state, IS_PAUSED) == false)
            attacked_time--;
    }
    // Next frame
    next_frame(assets);
}

void Plants::next_frame(const PlantAssets &assets)
{
    if (check_status(game_state, IS_PAUSED) == false)
        if (++frame >= assets.frame * all_img[directory_num].n_sheet)
        {
            frame = 0;
        }
}