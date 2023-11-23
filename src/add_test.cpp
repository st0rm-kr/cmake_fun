#include "gtest/gtest.h"
#include "add.cpp"

TEST(MathTest, AddTest) {
  EXPECT_EQ(10, add(5, 5));
}