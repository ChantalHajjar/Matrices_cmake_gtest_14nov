#include <iostream>
#include <gtest/gtest.h>
#include <vector>
#include "matrice.hpp"

using namespace std;
TEST(MatriceTest, MatriceElt) {
    Matrice m(2,2,2);
    Matrice m1(4,4,2);
   // Matrice m2(4,4,3);
   // Matrice M = m1 + m2;
    EXPECT_EQ(m(0,0), 2);
}
