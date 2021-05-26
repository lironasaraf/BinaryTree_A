#include "doctest.h"
#include "BinaryTree.hpp"
#include <iostream>
#include <stdexcept>

using namespace ariel;
using namespace std;


//checking type int
TEST_CASE("int Binary Tree ")
{
    ariel::BinaryTree<int> treeI;
    CHECK_NOTHROW(treeI.add_root(1));
    CHECK_NOTHROW(treeI.add_left(1, 2));
    CHECK_NOTHROW(treeI.add_left(2, 5));
    CHECK_NOTHROW(treeI.add_right(5, 6));
    CHECK_NOTHROW(treeI.add_right(6, 7));
    CHECK_NOTHROW(treeI.add_left(1, 8));
    CHECK_THROWS(treeI.add_right(8, 9));
    CHECK_THROWS(treeI.add_left(9, 10));
   
}

//checking type string
TEST_CASE("String Binary Tree ")
{
    ariel::BinaryTree<string> treeS;
    CHECK_NOTHROW(treeS.add_root("1"));
    CHECK_NOTHROW(treeS.add_left("1", "2"));
    CHECK_NOTHROW(treeS.add_left("2", "3"));
    CHECK_NOTHROW(treeS.add_right("3", "4"));
    CHECK_NOTHROW(treeS.add_right("4", "5"));
    CHECK_NOTHROW(treeS.add_left("1", "6"));
    CHECK_THROWS(treeS.add_right("6", "7"));
    CHECK_THROWS(treeS.add_left("8", "9"));
   
}

//checking type double
TEST_CASE("double Binary Tree ")
{
    ariel::BinaryTree<double> treeD;
    CHECK_NOTHROW(treeD.add_root(1));
    CHECK_NOTHROW(treeD.add_left(1, 2));
    CHECK_NOTHROW(treeD.add_left(2, 5));
    CHECK_NOTHROW(treeD.add_right(5, 6));
    CHECK_NOTHROW(treeD.add_right(6, 7));
    CHECK_NOTHROW(treeD.add_left(1, 8));
    CHECK_THROWS(treeD.add_right(8, 9));
    CHECK_THROWS(treeD.add_left(9, 10));
   
}

//checking type float
TEST_CASE("float Binary Tree ")
{
    ariel::BinaryTree<float> treeF;
    CHECK_NOTHROW(treeF.add_root(1));
    CHECK_NOTHROW(treeF.add_left(1, 2));
    CHECK_NOTHROW(treeF.add_left(2, 5));
    CHECK_NOTHROW(treeF.add_right(5, 6));
    CHECK_NOTHROW(treeF.add_right(6, 7));
    CHECK_NOTHROW(treeF.add_left(1, 8));
    CHECK_THROWS(treeF.add_right(8, 9));
    CHECK_THROWS(treeF.add_left(9, 10));
   
}