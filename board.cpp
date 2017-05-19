#include "board.h"
#include<iostream>
#include<iomanip>



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
    std::cout << "\n------------\n";
    for(int i =0 ; i <3; ++i){
            for(int j = 0; j < 3; ++j){
                std::cout << std::setw(1) << this->tiles[j+i*3] << " | ";
            }
            std::cout << "\n------------\n";
       }
}

BoardTile Board::getTile(int x, int y){
    return tiles[x+y*3];
}

void Board::setTile(int x, int y, BoardTile value){
    this->tiles[x+y*3] = value;
}

Board::Board()
{
tiles.resize(9, BoardTile::Empty);



}

