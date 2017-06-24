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

    BoardTile getTile(int x, int y);
    void printBoard();
    void setTile(int x, int y, BoardTile value);    
    const std::vector<BoardTile>& tiles() const;


    Board();





private:
    std::vector<BoardTile>m_tiles;


};




std::ostream& operator <<(std::ostream& stream, BoardTile tile);


#endif // BOARD_H
