//
// Created by abdms on 21/07/2020.
//

#include "FootCommander.hpp"

FootCommander::FootCommander(int id) : FootSoldier(id,s_damage,s_health) {}
 void FootCommander::make_move(pair<int,int> current,vector <vector<Soldier*>>& m_board)
{
    FootSoldier::make_move(current,m_board); //this one is for the commander himself
    // lets serach for every other foot soldier in our team
    for (int i = 0; i <m_board.size() ; ++i) {
        for (int j = 0; j < m_board[0].size(); ++j) {
            Soldier *ally = m_board[i][j];
            if (ally != NULL) {
                if (ally->getid() == this->getid() && ally != this) {
                    Attacker *casted_ally = dynamic_cast<Attacker *>(ally);
                    if (casted_ally == NULL) continue;
                    else {
                        if (casted_ally->getDamage() == 10) /// he is definitely a foot soldier
                        {
                            casted_ally->make_move({i, j}, m_board);
                        }


                    }
                }
            }
        }

    }
}
