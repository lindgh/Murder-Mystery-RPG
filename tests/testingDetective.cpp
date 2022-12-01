#include <gtest/gtest.h>
#include "../header/Detective.hpp"

TEST(DetectiveTests, constructor) {
    EXPECT_NO_THROW(Detective());
}

TEST(DetectiveTests, pointsFunctions) {
    Detective aDetective;
    aDetective.setPoints(10);
    aDetective.setPoints(10);
    EXPECT_EQ(aDetective.getPoints(), 20);
}

TEST(DetectiveTests, gameoverFunctions) {
    Detective aDetective;
    aDetective.setGameOverFlag();
    EXPECT_EQ(aDetective.getGameOverFlag(), -999);
}