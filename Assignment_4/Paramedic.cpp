//
// Created by abdms on 21/07/2020.
//

#include "Paramedic.hpp"
void Paramedic::make_move(pair<int,int> current,vector <vector<Soldier*>>& m_board)
{
    // using the trivial way
    for (int i = current.first-1; i <=current.first+1 ; ++i) {
        for (int j = current.second-1; j <= current.second+1; ++j) {
            if (m_board[i][j] != NULL) {
                if (!(i < 0 || i >= m_board.size() || j < 0 || j >= m_board[0].size())) {
                    m_board[i][j]->restore_health();
                }
            }
        }
    }
}