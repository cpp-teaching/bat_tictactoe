# include "board.h"
# include "game.h"
# include "player.h"
# include "playermove.h"
# include <iostream>
# include <tuple>
# include <string>
# include <unordered_set>
# include <memory>



PlayerMove Game::getMoveFromPlayer(){

    int x;
    int y;
    std::unordered_set<int> myset = { 0, 1, 2 };
    std::cout << "Please enter the coordinates: " << std::endl;
    std::cin >> x >> y;
    std::unordered_set<int>::const_iterator check_set_x = myset.find(x);
    std::unordered_set<int>::const_iterator check_set_y = myset.find(y);

    if(check_set_x ==myset.end() || check_set_y == myset.end() ){
        std::cout << "Wrong input!" << std::endl;
        return Game::getMoveFromPlayer();

    }
    return PlayerMove(x,y);
}



Game::Game(){

        Board board;
        board.printBoard();

        std::string p1_name = std::get<0>(names);
        std::string p2_name = std::get<1>(names);
}


void Game::run(){



     p1 = std::make_unique<Player>(p1_name, BoardTile::TileO);
     p2 = std::make_unique<Player>(p2_name, BoardTile::TileX);

    //p1.reset(new Player(p1_name, BoardTile::TileX));
     Board board;
     board.getTile(0,0);

     while(round_counter < 9){

            if(round_counter % 2 == 0){

                std::cout << *p1<< "\n";

                auto move = getMoveFromPlayer();

                board.setTile(move.m_x, move.m_y, BoardTile::TileO);

                board.printBoard();

                round_counter++;
        }

        else {

                 std::cout << *p2<< "\n";

                auto move = getMoveFromPlayer();

                board.setTile(move.m_x, move.m_y, BoardTile::TileX);

                board.printBoard();

                round_counter++;
        }
    }
}







