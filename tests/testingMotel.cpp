// #include <gtest/gtest.h>
// #include "gmock/gmock.h"
// #include "../header/Motel.hpp"
// #include "../header/Detective.hpp"
// using testing::InSequence;
// using namespace std;

// //stub for playScene
// class StubMotel: public Motel{
//     int logic[1] = {1};
//     int index = 0;

//     public:
//     int getNext(){
//         if (index == 0){
//             return 0;
//         }
//         int choice = logic[index];
//         index++;
//         return choice;
//     }
// };


// class MockMotel: public Motel{
//     public:
//     MOCK_METHOD(int, getNext,(), ());

//     void DelegateToFake(){
//         ON_CALL(*this, getNext).WillByDefault([this] (){
//             return fake_.getNext();
//         });
//     }

//     private:

//         StubMotel fake_;


// }; 


// class MockMotelActions: public Motel{
//     public:
    
//     MOCK_METHOD(void, exploreRoom,(Detective *d), ());
//     MOCK_METHOD(void,goToMyRoom,(Detective *d),());
//     MOCK_METHOD(void,exploreBathroom,(Detective *d),());
//     MOCK_METHOD(void,exploreDrawers,(Detective *d),());
//     MOCK_METHOD(void,exploreNightStand,(Detective *d),());
//     MOCK_METHOD(void,exitRoom203AfterExplore,(Detective *d),());
//     MOCK_METHOD(void,playScene,(Detective *d),(override));
//     MOCK_METHOD(void, validateInput,(int &t, int x, int y),());
// };

// TEST(MotelTests, testPayScene) {
//     Detective *d = new Detective();
//     StubMotel sm;
//     MockMotelActions mockLogic;

//     Motel m;

//     // m.playScene(d);
//     int forcedChoice = 1;
//     sm.validateInput(forcedChoice, 4,1);
//     EXPECT_CALL(mockLogic, exploreRoom(d));


//     // {
//     //     InSequence sequence;

//     //     int choice = sm.getNext();
//     //     int forcedChoice = 1;
//     //     sm.validateInput(forcedChoice, 4,1);
//     //     EXPECT_CALL(mockLogic, exploreRoom(d));
//     //     // EXPECT_CALL(mockAwards, awardBronze(mrl.getNext()));
//     //     // EXPECT_CALL(mockAwards, awardSilver(mrl.getNext()));
//     //     // EXPECT_CALL(mockAwards, awardGold(mrl.getNext()));
//     //     // EXPECT_CALL(mockAwards, turnOffTheLightsAndGoHome());


//     // }

   
//     delete d;
// }