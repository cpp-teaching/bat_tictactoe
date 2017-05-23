# include "board.h"
# include "game.h"
# include "player.h"
# include "playermove.h"
# include <iostream>
# include <tuple>
# include <string>
# include <unordered_set>


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

        run();

}


void Game::run(){

     int round_counter = 0;

     while(round_counter < 9){

        Board board;
        board.getTile(0,0);



        if(round_counter % 2 == 0){

            std::string p1_name = std::get<0>(names);
            Player p1(p1_name, BoardTile::TileX);

            std::cout << p1 << "\n";

            auto move = getMoveFromPlayer();

            board.setTile(move.m_x, move.m_y, p1.m_tile);

            board.printBoard();

            round_counter++;
        }

        else {

            std::string p2_name = std::get<1>(names);
            Player p2(p2_name, BoardTile::TileO);

            std::cout << p2 << "\n";

            auto move = getMoveFromPlayer();

            board.setTile(move.m_x, move.m_y, p2.m_tile);

            board.printBoard();

            round_counter++;
        }
    }
}







