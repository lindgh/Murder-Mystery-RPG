#include <gtest/gtest.h>

#include "../header/Locations.hpp"
#include "../header/OpeningScene.hpp"
#include "../header/Detective.hpp"

TEST(OpeningSceneTests, playScene)
{
    Detective *d = new Detective();
    OpeningScene o;
    //EXPECT_NO_THROW(o.playScene(d));

    delete d;
}