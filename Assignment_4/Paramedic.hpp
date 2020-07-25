//
// Created by abdms on 21/07/2020.
//

#ifndef EX4_PARAMEDIC_HPP
#define EX4_PARAMEDIC_HPP


#include "Soldier.hpp"

class Paramedic : public Soldier {
    static const int s_health=100;
public:
    Paramedic(int id,int health=s_health):Soldier(id,health){}
    virtual void make_move(std::pair<int,int> current,vector <vector<Soldier*>>& m_board);


    virtual void restore_health()override {this->setHealth(Paramedic::s_health);}

};


#endif //EX4_PARAMEDIC_HPP
