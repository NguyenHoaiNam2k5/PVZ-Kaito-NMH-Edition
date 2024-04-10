#pragma once
#include "../bullet.hpp"
#include "elements/zombies/zombie_struct.hpp"

class Pea : public Bullet
{
public:
    Pea(int _row, int _x);
    void move();
    void display();
    void crash_effect();
    void make_explode();
};