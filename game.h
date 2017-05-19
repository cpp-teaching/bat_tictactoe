# ifndef GAME_H
# define GAME_H

# include <iostream>
# include <string>
# include <iomanip>
# include "playermove.h"
# include "board.h"


class Game
{
public:
    Game();

    PlayerMove getMoveFromPlayer();


};

#endif // GAME_H
