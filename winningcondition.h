# ifndef WINNINGCONDITION_H
# define WINNINGCONDITION_H
# include "board.h"





class WinningCondition
{
public:
   std::vector<BoardTile> m_wc_tiles;

   void check_winner(auto m_wc_tiles);

   WinningCondition();

};

#endif
