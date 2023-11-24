#include "gtest/gtest.h"
#include "add.hpp"

TEST(MathTest, AddTest) {
  EXPECT_EQ(10, add(5, 5));
}