#ifndef BOARD_H
#define BOARD_H
#include<vector>
#include<ostream>



enum class BoardTile{
        TileX,
        TileO,
        Empty
};

class Board
{

public:
    Board();

    BoardTile getTile(int x, int y);
    void printBoard();
    void setTile(int x, int y, BoardTile value);




private:
    std::vector<BoardTile> tiles;


};


std::ostream& operator <<(std::ostream& stream, BoardTile tile);


#endif // BOARD_H
