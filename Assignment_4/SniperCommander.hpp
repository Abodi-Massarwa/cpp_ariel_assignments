//
// Created by abdms on 21/07/2020.
//

#ifndef EX4_SNIPERCOMMANDER_HPP
#define EX4_SNIPERCOMMANDER_HPP


#include "Sniper.hpp"

class SniperCommander: public Sniper {
static const int s_health=Sniper::s_health+20;
static const int s_damage=Sniper::s_damage+50;
public:
    SniperCommander(int i);
    void make_move(pair<int,int> current,vector <vector<Soldier*>>& m_board) override;


    virtual void restore_health()override {this->setHealth(SniperCommander::s_health);}
};


#endif //EX4_SNIPERCOMMANDER_HPP
