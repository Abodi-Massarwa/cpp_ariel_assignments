//
// Created by abdms on 21/07/2020.
//

#ifndef EX4_FOOTSOLDIER_HPP
#define EX4_FOOTSOLDIER_HPP


#include "Attacker.hpp"

class FootSoldier : public Attacker{
public:
    FootSoldier(int id,int damage=s_damage,int health=s_health):Attacker(damage,id,health){}
    static const int s_health=100;
    static const int s_damage=10;
    virtual void make_move(pair<int,int> current,vector <vector<Soldier*>>& m_board) override;
    pair<Soldier*,pair<int,int>> find_soldier(pair<int,int>,vector<vector<Soldier *>>& vector);

    virtual void restore_health()override {this->setHealth(FootSoldier::s_health);}

};


#endif //EX4_FOOTSOLDIER_HPP
