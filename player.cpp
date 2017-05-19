# include "player.h"
# include "board.h"
# include <iostream>
# include <string>
# include <iomanip>
# include <tuple>



std::tuple<std::string, std::string> Player::askUserNames(){
          std::string player_one;
          std::string player_two;
          std::cout <<  "player one please enter your name: " << std::endl;
          std::cin >>  player_one;
          std::cout << "player two please enter your name: " << std::endl;
          std::cin >> player_two;

        return std::make_tuple(player_one, player_two);
    }


Player::Player(std::string name, BoardTile tile): m_name(name),m_tile(tile){};

std::ostream& operator <<(std::ostream& stream, const Player& player){
    stream <<  "Player: " << player.m_name << " (" << player.m_tile << ")";

    return stream;

}




