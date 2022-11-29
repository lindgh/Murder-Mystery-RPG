#include <gtest/gtest.h>
#include "../header/Diner.hpp"

TEST(DinerTest, playDinerScene) {
    //playscene
    Detective *d = new Detective();
    Diner aDiner;
    EXPECT_NO_THROW(aDiner.playScene(d));

    delete d;
}