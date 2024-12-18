#include "elements.hpp"

/*Reset level: Clear all zombie waves' information*/
void Level::reset()
{
    announcer.state = ANNOUNCED;
    wave_count = 0;
    cur_wave = 0;
    waves_finished = false;
    zombie_has_coming = false;
    zombie_count = 0;
    used_zombie_count = 0;
    final_wave = -1;
    next_wave_clk = 0;
    announcer = Announcer(NULL_DIRECTORY, NULL_MUSIC_DIRECTORY);
}

/*Create 5 x 9 tiles
0 1 2 3 4 5 6 7 8
1
2
3
4
*/
Map create_a_collection_of_blocks()
{
    Map result;
    vector<Block> temps;
    Block temp;
    for (int y = 0; y < VERT_BLOCK_COUNT; y++)
    {
        temps.clear();
        for (int x = 0; x < HORIZ_BLOCK_COUNT; x++)
        {
            temp.x1 = X_UPPER_LEFT + (x * BLOCK_WIDTH);
            temp.x2 = temp.x1 + BLOCK_WIDTH;
            temp.y1 = Y_UPPER_LEFT + (y * BLOCK_HEIGHT);
            temp.y2 = temp.y1 + BLOCK_HEIGHT;

            temps.push_back(temp);
        }
        result.push_back(temps);
    }
    return result;
}

/*Clear all elements*/
void Elements::reset()
{
    for (auto &plant : plants)
    {
        delete plant;
    }
    plants.clear();

    suns.clear();
    bullets.clear();

    zombies.clear();
    zombie_parts.clear();
}