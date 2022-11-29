#include <gtest/gtest.h>
#include "../header/ClueFlag.hpp"

TEST(ClueFlagTests, constructor) {
    EXPECT_NO_THROW(ClueFlag());
}

TEST(ClueFlagTests, getClueFlag) {
    ClueFlag c;
    EXPECT_EQ(c.getFlag(), false);
}

TEST(ClueFlagTests, setClueFlag) {
    ClueFlag c;
    c.setFlag(true);
    EXPECT_EQ(c.getFlag(), true);
}