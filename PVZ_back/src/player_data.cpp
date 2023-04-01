#include "player_data.h"

/*
Read player saved data:
    + Player name:
    + Unlocked levels:
*/
void read_savedata(Player &player)
{
    string line;
    ifstream myfile(SAVED_DATA_DIRECTORY);
    if (myfile.is_open())
    {
        getline(myfile, line);
        player.name = line;
        getline(myfile, line);
        player.unlocked_level = stoi(line);
        myfile.close();
    }
    else
        cout << "Unable to open saved data file!\n";
}

void update_unlocked_level(Player &player, Level &level)
{
    // Read data
    string line;
    ifstream infile(SAVED_DATA_DIRECTORY);
    if (infile.is_open())
    {
        getline(infile, line);
        player.name = line;
        getline(infile, line);
        player.unlocked_level = stoi(line);
        infile.close();
    }
    else
        cout << "Unable to open saved data file!\n";

    // Write data
    ofstream outfile(SAVED_DATA_DIRECTORY);
    if (outfile.is_open())
    {
        int num_level = max(0, player.unlocked_level - 1);
        if (num_level < level.level_num)
            num_level = level.level_num;
        player.unlocked_level = num_level + 1;
        outfile << player.name << '\n'
                << player.unlocked_level;
        outfile.close();
    }
    else
        cout << "Unable to open saved data file!\n";
}

void reset_unlocked_level(Player &player)
{
    // Read data
    string line;
    ifstream infile(SAVED_DATA_DIRECTORY);
    if (infile.is_open())
    {
        getline(infile, line);
        player.name = line;
        getline(infile, line);
        player.unlocked_level = stoi(line);
        infile.close();
    }
    else
        cout << "Unable to open saved data file!\n";

    // Write data
    ofstream outfile(SAVED_DATA_DIRECTORY);
    if (outfile.is_open())
    {
        player.unlocked_level = 1;
        outfile << player.name << '\n'
                << player.unlocked_level;
        outfile.close();
    }
    else
        cout << "Unable to open saved data file!\n";
}

void update_player_name(Player &player, string new_name)
{
    // Read data
    string line;
    ifstream infile(SAVED_DATA_DIRECTORY);
    if (infile.is_open())
    {
        getline(infile, line);
        getline(infile, line);
        player.unlocked_level = stoi(line);
        infile.close();
    }
    else
        cout << "Unable to open saved data file!\n";

    // Write data
    ofstream outfile(SAVED_DATA_DIRECTORY);
    if (outfile.is_open())
    {
        player.name = new_name;
        if (player.unlocked_level < 0)
            player.unlocked_level = 0;
        outfile << player.name << '\n'
                << player.unlocked_level;
        outfile.close();
    }
    else
        cout << "Unable to open saved data file!\n";
}