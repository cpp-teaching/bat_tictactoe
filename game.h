# ifndef GAME_H
# define GAME_H

# include "playermove.h"
# include "board.h"
# include "player.h"
# include <iostream>
# include <string>
# include <iomanip>
# include <tuple>


class Game
{
public:
    Game();

    std::tuple<std::string,std::string> names = Player::askUserNames();

    PlayerMove getMoveFromPlayer();

    void run();


};

#endif // GAME_H
