//
// Created by abdms on 21/07/2020.
//

#include <vector>
#include "FootSoldier.hpp"
#include <limits>
//FootSoldier::FootSoldier(int id,int dmg=s_damage,int hlth=s_health) {}
 void FootSoldier::make_move(pair<int,int> current,vector <vector<Soldier*>>& m_board)
 {
    pair<Soldier*,pair<int,int>> result=find_soldier(current,m_board);
    Soldier* target=result.first;
    target->setHealth(target->getHealth()-this->m_damage);
     if(target->check_state()==false) m_board[result.second.first][result.second.second]=NULL;
 }



pair<Soldier*,pair<int,int>>FootSoldier::find_soldier(pair<int,int> current,vector<vector<Soldier *>>& m_board) {


    Soldier* target;
    Soldier* result;
    pair<int,int> coordinates(-1,-1);
    double min_distance=std::numeric_limits<double>::infinity();
    for (int i = 0; i <m_board.size() ; ++i) {
        for (int j = 0; j <m_board[0].size() ; ++j) {
            target=m_board[i][j];
            if(target!= NULL) {
                if (target->getid() != this->getid()) {
                    double distance = sqrt(pow(i - current.first, 2) + pow(j - current.second, 2));
                    if (distance < min_distance) {
                        min_distance = distance;
                        result = target;
                        coordinates.first=i;
                        coordinates.second=j;
                    }
                }
            }
        }
    }
return {result,coordinates};
}
