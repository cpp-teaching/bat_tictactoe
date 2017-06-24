# include "winningcondition.h"
# include <iostream>
# include <string>

void check_winner(const std::vector<BoardTile>& m_wc_tiles){
    std::cout << "pony \n";

    for(int i = 0; i <3; ++i){
        if (m_wc_tiles[i]==m_wc_tiles[i+1*3] && m_wc_tiles[i+1*3]==m_wc_tiles[i+2*3]){
            if(m_wc_tiles[i] == BoardTile::TileX){
            std::cout << "The winner is:  X" << std::endl;


            }
            else{
                std::cout << "The winner is:  O" << std::endl;

            }
        }
    }

    for(int i = 0; i <3; ++i){
        if (m_wc_tiles[0+i]==m_wc_tiles[1+i*3] && m_wc_tiles[1+i*3]==m_wc_tiles[2+i*3]){
            if(m_wc_tiles[i] == BoardTile::TileX){
            std::cout << "The winner is:  X" << std::endl;


            }
            else{
                std::cout << "The winner is:  O" << std::endl;

            }
        }
    }


        if (m_wc_tiles[0]==m_wc_tiles[4] && m_wc_tiles[4]==m_wc_tiles[8]){
            if(m_wc_tiles[0] == BoardTile::TileX){
            std::cout << "The winner is:  X" << std::endl;


            }
            else{
                std::cout << "The winner is:  O" << std::endl;

            }
        }

        if (m_wc_tiles[2]==m_wc_tiles[4] && m_wc_tiles[4]==m_wc_tiles[6]){
            if(m_wc_tiles[2] == BoardTile::TileX){
            std::cout << "The winner is:  X" << std::endl;


            }
            else{
                std::cout << "The winner is:  O" << std::endl;

            }
        }
}



WinningCondition::WinningCondition()
{

    Board board;
    std::vector<BoardTile> m_wc_tiles =  board.tiles();

}


