#include "player_click.h"
/* Need update: remove a plant
If player click on sun: handle sun click, then return;
If player click on plant seed: find type of that plant, then return;
If player is choosing a plant and click on a tile: create a new plant there.
*/
void handle_user_click(Player &player, Icons &icons, Elements &elements, Map &map, int mouse_x, int mouse_y)
{
    if (pick_sun_if_clicked_on(elements, map, mouse_x, mouse_y, player))
        return;
    if (is_a_plant_seed_clicked_on(mouse_x, mouse_y))
    {
        which_plant_is_chosen(player, icons, mouse_y, player.is_choosing_a_plant);
        return;
    }
    if (player.is_choosing_a_plant == true)
    {
        if (click_is_in_frontyard(map, mouse_x, mouse_y))
        {
            create_new_plant(player, map, elements, icons, mouse_x, mouse_y);
            player.is_choosing_a_plant = false;
            return;
        }
    }
    // remove a plant
    // if (click_is_in_frontyard(map, mouse_x, mouse_y))
    //     remove_element_if_clicked_on(map, elements, mouse_x, mouse_y);
}

/*
Check if the mouse is in ICON BAR (the bar that contains plant seed)
*/
bool is_a_plant_seed_clicked_on(int mouse_x, int mouse_y)
{
    if (mouse_x > ICON_BAR_X1 && mouse_x < ICON_BAR_X2 &&
        mouse_y > ICON_BAR_Y1 && mouse_y < ICON_BAR_Y2)
        return true;
    return false;
}

/*
Find which plant is chosen.
Updated: Double click on a plant seed will cancel the selection.
*/
void which_plant_is_chosen(Player &player, Icons &icons, int mouse_y, bool &is_a_plant_chosen)
{
    is_a_plant_chosen = false;
    if (mouse_y > SUNFLOWER_ICON_Y1 && mouse_y < SUNFLOWER_ICON_Y1 + ICON_HEIGHT && player.sun_count >= 50 && !icons.sunflower_remaining_time)
    {
        icons.is_sunflower_chosen ^= 1;
        if (icons.is_sunflower_chosen)
            is_a_plant_chosen = true;

        icons.is_peashooter_chosen = false;
        icons.is_walnut_chosen = false;
    }
    else if (mouse_y > PEASHOOTER_ICON_Y1 && mouse_y < PEASHOOTER_ICON_Y1 + ICON_HEIGHT && player.sun_count >= 100 && !icons.peashooter_remaining_time)
    {
        icons.is_peashooter_chosen ^= 1;
        if (icons.is_peashooter_chosen)
            is_a_plant_chosen = true;

        icons.is_walnut_chosen = false;
        icons.is_sunflower_chosen = false;
    }
    else if (mouse_y > WALNUT_ICON_Y1 && mouse_y < WALNUT_ICON_Y1 + ICON_HEIGHT && player.sun_count >= 50 && !icons.walnut_remaining_time)
    {
        icons.is_walnut_chosen ^= 1;
        if (icons.is_walnut_chosen)
            is_a_plant_chosen = true;

        icons.is_peashooter_chosen = false;
        icons.is_sunflower_chosen = false;
    }
}

/*
Check if mouse is in frontyard or not
*/
bool click_is_in_frontyard(Map &map, int mouse_x, int mouse_y)
{
    int right_bound = map[0][8].x2;
    int left_bound = map[0][0].x1;
    int upper_bound = map[0][0].y1;
    int lower_bound = map[4][0].y2;
    if (mouse_x > left_bound && mouse_x < right_bound &&
        mouse_y > upper_bound && mouse_y < lower_bound)
        return true;
    return false;
}

/*
Find which row and column is chosen by click
*/
void determine_row_and_col_chosen_by_second_click(Map &map, int mouse_x, int mouse_y, int &row, int &col)
{
    for (int y = 0; y < VERT_BLOCK_COUNT; y++)
        for (int x = 0; x < HORIZ_BLOCK_COUNT; x++)
            if (mouse_x > map[y][x].x1 && mouse_x < map[y][x].x2 &&
                mouse_y > map[y][x].y1 && mouse_y < map[y][x].y2)
            {
                row = y;
                col = x;
                return;
            }
}

/*Need update: Show notification if the tile has planted
Updated:
    Cannot plant if the tile has planted.
    Second click to cancel choosing plant.
*/
void create_new_plant(Player &player, Map &map, Elements &elements, Icons &icons, int mouse_x, int mouse_y)
{
    int row, col;
    determine_row_and_col_chosen_by_second_click(map, mouse_x, mouse_y, row, col);
    if (map[row][col].is_planted)
        return;
    if (icons.is_sunflower_chosen)
    {
        icons.is_sunflower_chosen = false;
        icons.sunflower_remaining_time = SUNFLOWER_LOADING;
        Sunflower temp;
        temp.row = row;
        temp.col = col;
        temp.bite = 0;
        elements.sunflowers.push_back(temp);
        player.sun_count -= SUNFLOWER_PRICE;
        map[row][col].is_planted = 1;
    }
    else if (icons.is_peashooter_chosen)
    {
        icons.is_peashooter_chosen = false;
        icons.peashooter_remaining_time = PEASHOOTER_LOADING;
        Peashooter temp;
        temp.row = row;
        temp.col = col;
        temp.bite = 0;
        elements.peashooters.push_back(temp);
        player.sun_count -= PEASHOOTER_PRICE;
        map[row][col].is_planted = 1;
    }
    else if (icons.is_walnut_chosen)
    {
        icons.is_walnut_chosen = false;
        icons.walnut_remaining_time = WALNUT_LOADING;
        Walnut temp;
        temp.row = row;
        temp.col = col;
        temp.bite = 0;
        temp.directory_num = WALNUT_1_DIRECTORY;
        elements.walnuts.push_back(temp);
        player.sun_count -= WALNUT_PRICE;
        map[row][col].is_planted = 1;
    }
}

/*
Remove plant if click on its tile
*/
void remove_element_if_clicked_on(Map &map, Elements &elements, int mouse_x, int mouse_y)
{
    for (int i = 0; i < elements.sunflowers.size(); i++)
    {
        if (is_click_made_in_element_block(elements.sunflowers[i].row, elements.sunflowers[i].col, mouse_x, mouse_y, map))
            elements.sunflowers.erase(elements.sunflowers.begin() + i);
    }
    for (int i = 0; i < elements.peashooters.size(); i++)
    {
        if (is_click_made_in_element_block(elements.peashooters[i].row, elements.peashooters[i].col, mouse_x, mouse_y, map))
            elements.peashooters.erase(elements.peashooters.begin() + i);
    }
    for (int i = 0; i < elements.walnuts.size(); i++)
    {
        if (is_click_made_in_element_block(elements.walnuts[i].row, elements.walnuts[i].col, mouse_x, mouse_y, map))
            elements.walnuts.erase(elements.walnuts.begin() + i);
    }
}

/*
Check if player click in the tile in 'row' and 'col'
*/
bool is_click_made_in_element_block(int row, int col, int mouse_x, int mouse_y, Map &map)
{
    if (mouse_x > map[row][col].x1 && mouse_x < map[row][col].x2 &&
        mouse_y > map[row][col].y1 && mouse_y < map[row][col].y2)
        return true;
    return false;
}

/* Update: change void into bool
For all the suns to check if any sun is clicked on.
*/
bool pick_sun_if_clicked_on(Elements &elements, Map &map, int mouse_x, int mouse_y, Player &player)
{
    for (int i = 0; i < elements.suns.size(); i++)
    {
        int row = elements.suns[i].final_row;
        int col = elements.suns[i].final_col;
        int right_bound = map[row][col].x2;
        int left_bound = map[row][col].x1;
        int upper_bound = elements.suns[i].y_location;
        int lower_bound = elements.suns[i].y_location + ELEMENT_HEIGHT;
        if (mouse_x > left_bound && mouse_x < right_bound &&
            mouse_y > upper_bound && mouse_y < lower_bound)
        {
            elements.suns.erase(elements.suns.begin() + i);
            player.sun_count += 50;
            return true;
        }
    }
    return false;
}
