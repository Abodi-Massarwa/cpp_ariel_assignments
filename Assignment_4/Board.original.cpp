//
// Created by abdms on 22/07/2020.
//
#include "Board.original.hpp"
using namespace WarGame;

void Board::move(uint a,pair<int,int> pr,MoveDIR move)
{
    if(pr.first>=this->board.size()||pr.second<0) throw "you are a stupid person try again";
    if(this->board[pr.first][pr.second]!=NULL) {
        int i = pr.first;
        int j = pr.second;
        std::pair<int, int> ans{i, j};
        // move the soldier in our vector then  s.make_move();
        Soldier *temp = board[i][j];
        if(temp->getid()!=a) throw "you're choosing an enemy's player";
        /*
         * TODO : check for out of bounds & taking a place that is already reserved
         *
         *
         */
        switch (move) {
            case Up:
                if (i + 1 >= board.size()) { throw ("not a valid place in our board"); }
                else if(board[i+1][j]!=NULL){throw "reserved place for another soldier";}
                board[i + 1][j] = temp;
                ans.first++;
                break;
            case Down:
                if (i - 1 < 0) { throw ("not a valid place in our board"); }
                else if(board[i-1][j]!=NULL){throw ("reserved place for another soldier");}
                board[i - 1][j] = temp;
                ans.first--;
                break;
            case Right:
                if (j + 1 >= board[0].size()) { throw ("not a valid place in our board"); }
                else if(board[i][j+1]!=NULL){throw "reserved place for another soldier";}
                board[i][j + 1] = temp;
                ans.second++;
                break;
            case Left:
                if (j - 1 < 0) { throw ("not a valid place in our board"); }
                else if(board[i][j-1]!=NULL){throw "reserved place for another soldier";}
                board[i][j - 1] = temp;
                ans.second--;
                break;


        }
        board[i][j] = NULL;
        temp->make_move(ans, board);
        // lets check for dead soldiers

    }
    else
    throw string("No soldier in the selected coordinates");



}
bool Board::has_soldiers(uint player_number) const
{
    for (int i = 0; i <this->board.size() ; ++i) {
        for (int j = 0; j < this->board[0].size(); ++j) {
            if (board[i][j] != NULL) {
                if (board[i][j]->getid() == player_number && (board[i][j]->getHealth() > 0)) {
                    return true;
                }
            }
        }
    }
    return false;
}
