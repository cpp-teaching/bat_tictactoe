# ifndef GAME_H
# define GAME_H

# include "playermove.h"
# include "board.h"
# include "player.h"
# include <iostream>
# include <string>
# include <iomanip>
# include <tuple>
# include <memory>


class Game
{
public:
    Game();

    PlayerMove getMoveFromPlayer();

    Board m_board;



    std::string p1_name;
    std::string p2_name;

    int round_counter = 0;

    std::unique_ptr<Player> p1;
    std::unique_ptr<Player> p2;



    std::tuple<std::string,std::string> names = Player::askUserNames();

    void run();

    void checkWinner();


};

#endif // GAME_H

/* void check_winner(const std::vector<BoardTile>& m_wc_tiles){
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

*/
