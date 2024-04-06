#pragma once
#include "../plants.hpp"
#include "elements/bullets/pea/pea.hpp"

class Snowpea : public Plants
{
public:
    Snowpea(const int &_row, const int &_col);
    ~Snowpea();
    void determine_appearance(vector<Zombie *> &zombies);
    void display(const int &_row) override;
    void action() override;
    void fire_pea(vector<Zombie *> &zombies, vector<Pea> &peas);
};