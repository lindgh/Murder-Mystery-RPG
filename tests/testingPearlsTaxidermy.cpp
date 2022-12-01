#include <gtest/gtest.h>
#include "gmock/gmock.h"
#include "../header/Motel.hpp"
#include "../header/PearlsTaxidermy.hpp"
using ::testing::NiceMock;
using namespace std;

class FakePt {
    public:
    virtual void investigateCounter() = 0;
    virtual void investigateWallOfPictures() = 0;
    virtual void investigateEmployee() = 0;
    virtual void LeaveStore() = 0;
};


class MockPt: public FakePt {
    public:
    MOCK_METHOD(void, investigateCounter,(),());
    MOCK_METHOD(void, investigateWallOfPictures,(),()); 
    MOCK_METHOD(void, investigateEmployee,(),());
    MOCK_METHOD(void, LeaveStore,(),()); 
};


void playScene(int choice, FakePt &pt){ 
        switch (choice){
            case 1: pt.investigateCounter();
            break;
            case 2: pt.investigateWallOfPictures();
            break;
            case 3: pt.investigateEmployee();
            break;
        }

    if(choice == 4){
        pt.LeaveStore();
    }

}


TEST(TestPt, testLogig_investigateCounter){
    NiceMock<MockPt> pt;

    playScene(1,pt);
    ON_CALL(pt,investigateCounter());
}

TEST(TestPt, test_investigateWallOfPictures){
    NiceMock<MockPt> pt;
    playScene(2,pt);
    ON_CALL(pt,investigateWallOfPictures());


}

TEST(TestPt, test_investigateEmployee){
    NiceMock<MockPt> pt;
    playScene(3,pt);
    ON_CALL(pt,investigateEmployee());


}


TEST(TestPt, test_LeaveStore){
    NiceMock<MockPt> pt;

    playScene(4,pt);
    ON_CALL(pt,LeaveStore());


}






