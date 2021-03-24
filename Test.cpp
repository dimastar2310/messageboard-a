/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: <Please write your names here>
 * 
 * Date: 2021-02
 */

#include "doctest.h"
#include "Board.hpp"

#include <iostream>
#include <string>
#include <algorithm>
#include "Direction.hpp"

using namespace std;
using namespace ariel;
using ariel::Direction;
//using ariel::Board;
//using namespace board;
/**
 * Returns the input string without the whitespace characters: space, newline and tab.
 * Requires std=c++2a.
 */


/**
 * good post and read board checks
**/
ariel::Board board; //hazhara al haclass
//ariel::Direction::Horizontal;







TEST_CASE("Correct Board post and read function") {
  CHECK(board.post(1,1,Direction::Horizontal,"abcd") == true);
  CHECK(board.read(1,1,Direction::Horizontal,4) == "abcd");
  CHECK(board.read(1,1,Direction::Vertical,4) == "a___");
  CHECK(board.read(1,1,Direction::Horizontal,5) == "abcd_");

  CHECK(board.post(100,200,Direction::Horizontal,"abcd") == true); //dugma be demo
  CHECK(board.read(99,201,Direction::Vertical,3) == "_b_"); //dugma be demo
  CHECK(board.post(99,202,Direction::Vertical,"xyz") == true); //dugma be demo
  CHECK(board.read(99,202,Direction::Horizontal,6) == "abyd__" ); //dugma be demo

   CHECK(board.post(90,90,Direction::Horizontal,"dima") == true); //nitan leaniah she kulam be ota sviva 
   CHECK(board.read(90,88,Direction::Horizontal,3) == "__d"); //nitan leaniah she kulam be ota sviva 
   CHECK(board.read(89,91,Direction::Vertical,3) == "_i_"); //nitan leaniah she kulam be ota sviva
   CHECK(board.post(89,92,Direction::Vertical,"sanin") == true);
   CHECK(board.read(91,91,Direction::Horizontal,4) == "iaa_");

   CHECK(board.post(90,90,Direction::Horizontal," ") == true); //hashuv le kore shinuii
   CHECK(board.read(90,90,Direction::Horizontal,4) == "dima");

   
  CHECK(board.post(96,96,Direction::Horizontal,"cookie") == true); //hashuv le kore shinuii
  CHECK(board.post(95,97,Direction::Vertical,"avi") == true); //hashuv le kore shinuii
  CHECK(board.read(96,95,Direction::Horizontal,4) == "_cvo");
  CHECK(board.read(95,97,Direction::Vertical,3) == "avi"); //haot hakodemet nidreset
  CHECK(board.read(95,97,Direction::Vertical,5) == "avi__"); //haot hakodemet nidreset










       
}   

//     /**
//      good read board check
//     **/

// TEST_CASE("Correct read code"){
   

// }
//   /**
//      * Bad read board check
     
//     **/
// TEST_CASE("Incorrect post board") {
//   //CHECK(post(5,2) == "_===_\n(o.o)\n( : )\n( : )"));
// }

// /**
//      * Bad read board check
     
//     **/
//    TEST_CASE("Incorrect read board") {
//  // CHECK(read(5,2) == "_===_\n(o.o)\n( : )\n( : )"));
  
// }