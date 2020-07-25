//
// Created by abdms on 21/07/2020.
//

#ifndef EX4_SOLDIER_HPP
#define EX4_SOLDIER_HPP

#include <iostream>
#include <vector>
#include<cmath>
using namespace std;
class Soldier {
protected:
const int m_id;
int m_health;

    Soldier(size_t id,std::size_t health):m_id(id),m_health(health){}

public:
    virtual void restore_health(){}
    virtual void make_move(pair<int,int> current,vector <vector<Soldier*>>& m_board)
    {
    }
    bool check_state()
    {
        if(this->m_health<=0) {
            delete this;
            return false;
        }
        return true;

    }
int getid(){
        return m_id;
    }
    void setHealth(int new_health){this->m_health=new_health;}
    int getHealth(){
        return m_health;
    }
};


#endif //EX4_SOLDIER_HPP
