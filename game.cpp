# include "board.h"
# include "game.h"
# include "player.h"
# include "playermove.h"
# include "winningcondition.h"
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

        Board m_board;

        std::string p1_name = std::get<0>(names);
        std::string p2_name = std::get<1>(names);
}


void Game::run(){



     p1 = std::make_unique<Player>(p1_name, BoardTile::TileO);
     p2 = std::make_unique<Player>(p2_name, BoardTile::TileX);

    //p1.reset(new Player(p1_name, BoardTile::TileX));

     while(round_counter < 9){

            if(round_counter % 2 == 0){

                std::cout << *p1<< "\n";

                auto move = getMoveFromPlayer();

                m_board.setTile(move.m_x, move.m_y, p1->m_tile);

                m_board.printBoard();

                round_counter++;

                Game::checkWinner();

        }

        else {

                 std::cout << *p2<< "\n";

                auto move = getMoveFromPlayer();

                m_board.setTile(move.m_x, move.m_y, p2->m_tile);

                m_board.printBoard();

                round_counter++;

                Game::checkWinner();
        }
    }
}


void Game::checkWinner(){

    const auto& tiles = m_board.tiles();

    for(int i = 0; i <3; ++i){
        if (tiles[i]!=BoardTile::Empty && tiles[i]==tiles[i+1*3] && tiles[i+1*3]==tiles[i+2*3]){
            if(tiles[i] == BoardTile::TileX){
            std::cout << "The winner is:  X" << std::endl;


            }
            else if(tiles[i] == BoardTile::TileO){
                std::cout << "The winner is:  O" << std::endl;

            }
        }
    }

    for(int i = 0; i <3; ++i){
        if (tiles[i]!=BoardTile::Empty && tiles[0+i]==tiles[1+i*3] && tiles[1+i*3]==tiles[2+i*3]){
            if(tiles[i] == BoardTile::TileX){
            std::cout << "The winner is:  X" << std::endl;


            }
            else if(tiles[i] == BoardTile::TileO){
                std::cout << "The winner is:  O" << std::endl;

            }
        }
    }


        if (tiles[0]!=BoardTile::Empty && tiles[0]==tiles[4] && tiles[4]==tiles[8]){
            if(tiles[0] == BoardTile::TileX){
            std::cout << "The winner is:  X" << std::endl;


            }
            else if(tiles[0] == BoardTile::TileO){
                std::cout << "The winner is:  O" << std::endl;

            }
        }

        if (tiles[2]!=BoardTile::Empty && tiles[2]==tiles[4] && tiles[4]==tiles[6]){
            if(tiles[2] == BoardTile::TileX){
            std::cout << "The winner is:  X" << std::endl;


            }
            else if(tiles[2] == BoardTile::TileO){
                std::cout << "The winner is:  O" << std::endl;

            }
        }
}








