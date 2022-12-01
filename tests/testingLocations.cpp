#include <gtest/gtest.h>
#include "../header/Locations.hpp"
#include "../header/Motel.hpp"


//Mocking Non-virtual Methods
//=> instead of sharing common base class with real class, this mock class will be
//unrelated to the real class but contain methods with the same signatures
// [dont OVERRIDE]
// =>Since the functions are not virtual and the two classes are unrelated, 
//  you must specify your choice at compile time
// class MockLocation{
//     public:
//         MOCK_METHOD(void, validateInput,(int&,int,int),());
// }




// TEST(LocationsTest, validateInput_correctInput) {
//     auto old_buffer = std::cout.rdbuf(nullptr);
    
//     Detective *d = new Detective();
//     Motel m; //since we can't create an object from an abstract class

//     int max = 4; //upper input bound
//     int min = 1; //lower input bound
//     int userChoice;
//     Motel.validateInput(userChoice,max,min);
//     userChoice = 2;

//     EXPECT_NO_THROW(aDiner.);

//     delete d;
// }

// TEST(LocationsTest, validateInput_charType) {
//     //playscene
//     Detective *d = new Detective();
//     Diner aDiner;
//     //EXPECT_NO_THROW(aDiner.playScene(d));

//     delete d;
// }

// TEST(LocationsTest, validateInput_outOfBounds) {
//     //playscene
//     Detective *d = new Detective();
//     Diner aDiner;
//     //EXPECT_NO_THROW(aDiner.playScene(d));

//     delete d;
// }