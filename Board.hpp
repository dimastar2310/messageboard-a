//using namespace std;
#include <iostream>
#include <string>
#include <vector>//le 2b
#include <algorithm>//le 2b
#include <string> 
#include "Direction.hpp"
#include <array>
//using ariel::Direction;
//typedef unsigned int uint; //kvar kayam be cpp

namespace ariel{
       class Board { //hazhara
     //int rows,cols;
     //vector<vector<char>> board; /le 2b
//typedef struct Board Board;
 public:
    Board();

    


bool post(uint row,uint col,Direction dir, const std::string &abc); //mekabelet shura ve amuda hiuviim ve madbika et ha post i 3 rida
std::string read(uint row ,uint col,Direction dir ,uint vol);
void show(); //ze funkzia le 2b
       };
}
