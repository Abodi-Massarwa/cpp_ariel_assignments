//
// Created by abdms on 21/07/2020.
//

#ifndef EX4_SNIPER_HPP
#define EX4_SNIPER_HPP



#include "Attacker.hpp"

class Sniper: public Attacker {

public:
    static const int s_health=100;
    static const int s_damage=50;
    Sniper(int id,int health=s_health,int damage=s_damage):Attacker(damage,id,health){}
    virtual void make_move(pair<int,int> current,vector <vector<Soldier*>>& m_board) override;


    virtual void restore_health()override {this->setHealth(Sniper::s_health);}

};


#endif //EX4_SNIPER_HPP
