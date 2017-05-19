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



    auto names = Player::askUserNames();
    std::string p1_name = std::get<0>(names);
    std::string p2_name = std::get<1>(names);
    Player p1(p1_name, BoardTile::TileX);
    Player p2(p2_name, BoardTile::TileO);
    std::cout << p1;


    Board board;
    board.printBoard();
    board.getTile(1,0);

    auto move = getMoveFromPlayer();
    board.setTile(move.m_x, move.m_y, BoardTile::TileO);

    board.printBoard();




}


