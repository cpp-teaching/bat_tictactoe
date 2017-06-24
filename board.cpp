# include "board.h"
# include "game.h"
# include<iostream>
# include<iomanip>



std::ostream& operator <<(std::ostream& stream, BoardTile tile) {
    switch(tile) {
        case BoardTile::TileX:
                stream << "X";
                break;
        case BoardTile::TileO:
                stream << "O";
                break;
          case BoardTile::Empty:
                stream << "";
                break;
    }
    return stream;
}


void Board::printBoard(){
    std::cout << "\n-------------\n";
    for(int i =0 ; i <3; ++i){
            std::cout << "|";
            for(int j = 0; j < 3; ++j){
               std::cout << std::setw(2) << this->m_tiles[j+i*3] << " |";
            }
            std::cout << "\n-------------\n";
       }
}


BoardTile Board::getTile(int x, int y){
    return m_tiles[x+y*3];
}

void Board::setTile(int x, int y, BoardTile value){
    this->m_tiles[x+y*3] = value;
}

 const std::vector<BoardTile>& Board::tiles() const {
     return m_tiles;
 }


Board::Board()
{
    m_tiles.resize(9, BoardTile::Empty);


}




