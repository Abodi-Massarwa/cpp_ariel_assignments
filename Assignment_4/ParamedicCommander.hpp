//
// Created by abdms on 21/07/2020.
//

#ifndef EX4_PARAMEDICCOMMANDER_HPP
#define EX4_PARAMEDICCOMMANDER_HPP


#include "Paramedic.hpp"

class ParamedicCommander: public Paramedic {
static const int s_health=200;
public:
    ParamedicCommander(int id):Paramedic(id,s_health){}
    void make_move(pair<int,int> current,vector <vector<Soldier*>>& m_board)override ;


    virtual void restore_health()override {this->setHealth(ParamedicCommander::s_health);}
};


#endif //EX4_PARAMEDICCOMMANDER_HPP
