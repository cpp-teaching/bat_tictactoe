#ifndef PLAYER_H
#define PLAYER_H

# include <iostream>
# include <string>
# include <iomanip>
# include "playermove.h"
# include "board.h"

class Player
{
public:
    std::string m_name;
    BoardTile m_tile;

    static std::tuple<std::string, std::string> askUserNames();

    Player(std::string name, BoardTile tile);

};

std::ostream& operator <<(std::ostream& stream, const Player& player);

#endif // PLAYERS_H
