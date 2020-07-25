//
// Created by abdms on 21/07/2020.
//

#ifndef EX4_FOOTCOMMANDER_HPP
#define EX4_FOOTCOMMANDER_HPP


#include "FootSoldier.hpp"

class FootCommander : public FootSoldier{


public:
    FootCommander(int i);
    static const int s_health=FootSoldier::s_health+50;
    static const int s_damage=FootSoldier::s_damage+10;
    virtual void make_move(pair<int,int> current,vector <vector<Soldier*>>& m_board);


    virtual void restore_health()override {this->setHealth(FootCommander::s_health);}
};


#endif //EX4_FOOTCOMMANDER_HPP
