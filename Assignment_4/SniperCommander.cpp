//
// Created by abdms on 21/07/2020.
//

#include "SniperCommander.hpp"

SniperCommander::SniperCommander(int id) : Sniper(id,SniperCommander::s_health,SniperCommander::s_damage) {

}
void SniperCommander::make_move(pair<int,int> current,vector <vector<Soldier*>>& m_board) {

    Sniper::make_move(current,m_board);
    //now let's search for other snipers
    for (int i = 0; i <m_board.size() ; ++i) {
        for (int j = 0; j < m_board[0].size(); ++j) {
            Soldier *sniper_ally = m_board[i][j];
            if (sniper_ally != NULL) {
                if (sniper_ally != this && sniper_ally->getid() == this->getid()) {
                    Sniper *casted_pSniper = dynamic_cast<Sniper *>(sniper_ally);
                    if (casted_pSniper != NULL) // means it works he is a sniper
                    {
                        casted_pSniper->make_move({i, j}, m_board);
                    }

                }
            }
        }
    }

}
