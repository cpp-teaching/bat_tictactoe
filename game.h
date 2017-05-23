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

    std::string p1_name;
    std::string p2_name;
    std::unique_ptr<Player> p1 ();
    std::unique_ptr<Player> p2 ();



    std::tuple<std::string,std::string> names = Player::askUserNames();

    PlayerMove getMoveFromPlayer();

    void run();


};

#endif // GAME_H
