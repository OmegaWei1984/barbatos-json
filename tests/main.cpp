#include <gtest/gtest.h>
#include "barbjson.hpp"

TEST(HelloTest, CaseHello) {
    Barbjson barbjson;
    EXPECT_EQ(barbjson.test(), "hello");
}
