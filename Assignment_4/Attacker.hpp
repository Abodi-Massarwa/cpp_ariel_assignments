//
// Created by abdms on 21/07/2020.
//

#ifndef EX4_ATTACKER_HPP
#define EX4_ATTACKER_HPP


#include "Soldier.hpp"

class Attacker : public Soldier {
protected:
    const int m_damage;
    Attacker(size_t damage,size_t id,size_t health):Soldier(id,health),m_damage(damage){}
public:
    virtual void make_move(pair<int,int> current,vector <vector<Soldier*>>& m_board)
    {
    }
    int getDamage(){return this->m_damage;}
    virtual void restore_health()override {}
};


#endif //EX4_ATTACKER_HPP
