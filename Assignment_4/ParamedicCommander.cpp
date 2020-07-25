//
// Created by abdms on 21/07/2020.
//

#include "ParamedicCommander.hpp"

void ParamedicCommander::make_move(pair<int,int> current,vector <vector<Soldier*>>& m_board)
{
    Paramedic::make_move(current,m_board);
    for (int i = 0; i <m_board.size() ; ++i) {
        for (int j = 0; j <m_board[0].size() ; ++j) {
            Soldier* current_ally=m_board[i][j];
            if(current_ally!=NULL){
            if(current_ally->getid()== this->getid() && current_ally!=this)
            {
                Paramedic* current_paramedic= dynamic_cast<Paramedic*>(current_ally);
                if(current_paramedic!=NULL)
                {
                    current_paramedic->make_move({i,j},m_board);
                }
            }
        }
    }
    }
}