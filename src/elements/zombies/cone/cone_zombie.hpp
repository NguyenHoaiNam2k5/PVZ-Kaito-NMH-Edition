#pragma once
#include "../zombie_struct.hpp"

class ConeZombie : public Zombie
{
public:
    ~ConeZombie();
    void init() override;
    void make_credit() override;
    void armor_drop(vector<ZombiePart> &zombie_parts) override;
    void render_zombie() override;
    void display_credited(const int &_minus_x) override;
    using Zombie::Zombie;
};