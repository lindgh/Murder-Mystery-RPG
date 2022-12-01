#include <gtest/gtest.h>
#include "gmock/gmock.h"
#include "../header/Motel.hpp"
#include "../header/Detective.hpp"
using testing::InSequence;
using ::testing::NiceMock;
using namespace std;

class FakeMotel {
    public:
    virtual void goToMyRoom() = 0;
    virtual void exitRoom203AfterExplore() = 0;
    virtual void exploreBathroom() = 0;
    virtual void exploreDrawers() = 0;
    virtual void exploreNightStand() = 0;
};


class MockMotel: public FakeMotel {
    public:
    MOCK_METHOD(void,goToMyRoom,(),(override));
    MOCK_METHOD(void, exitRoom203AfterExplore,(),(override));
    MOCK_METHOD(void, exploreBathroom,(),(override));
    MOCK_METHOD(void, exploreDrawers,(),(override));
    MOCK_METHOD(void,exploreNightStand,(),(override));

};


void exploreRoom(int choice, FakeMotel &m){
    switch (choice){
        case 1: m.exploreBathroom();
        break;
        case 2: m.exploreDrawers();
        break;
        case 3: m.exploreNightStand();
        break;
    }
}

void playScene(int choice,FakeMotel &m){

    switch(choice){
        case 1: exploreRoom(choice, m);
        break;
        case 2: m.goToMyRoom();
    }
}




TEST(TestMotel, testLogicPlayScene){
    NiceMock<MockMotel> mm;
    //MockMotel mm;
    playScene(2,mm);
    ON_CALL(mm,goToMyRoom());


}

TEST(TestMotel, testExploreRoomDrawers){
    NiceMock<MockMotel> mm;
    //MockMotel mm;
    exploreRoom(2,mm);
    ON_CALL(mm,exploreDrawers());


}

TEST(TestMotel, testExploreBathroom){
    NiceMock<MockMotel> mm;
    //MockMotel mm;
    exploreRoom(2,mm);
    ON_CALL(mm,exploreBathroom());


}


TEST(TestMotel, testExploreNightStand){
    NiceMock<MockMotel> mm;
    //MockMotel mm;
    exploreRoom(2,mm);
    ON_CALL(mm,exploreNightStand());


}