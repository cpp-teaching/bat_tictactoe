#ifndef PLAYER_H
#define PLAYER_H

# include "playermove.h"
# include "board.h"
# include <iostream>
# include <string>
# include <iomanip>

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
