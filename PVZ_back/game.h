#pragma once
#include "rsdl.hpp"
#include "gameInfo.h"
#include "elements.h"
#include "draw_elements.h"
#include "player_click.h"
#include "elements_actions.h"
#include "makeLevels.h"

int max(const int &x, const int &y)
{
    if (x > y)
        return x;
    return y;
}
