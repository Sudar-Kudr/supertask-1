#include <gtest/gtest.h>
#include "mysqrt.hpp"

TEST(sqrt, smoke) {
    EXPECT_EQ(mysqrt(4), 2);
    EXPECT_EQ(mysqrt(9), 3);
    EXPECT_EQ(mysqrt(16), 4);
}
