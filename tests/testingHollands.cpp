#include <gtest/gtest.h>
#include "gmock/gmock.h"
#include "../header/Hollands.hpp"

using ::testing::NiceMock;
using namespace std;

class FakeHollands {
    public:
    virtual void investigateReporter() = 0;
    virtual void investigateOfficer() = 0;
    virtual void investigateBystander() = 0;
    virtual void LeaveHollands() = 0;
};

class MockHollands : public FakeHollands {
    public:
    MOCK_METHOD(void, investigateReporter, (), ());
    MOCK_METHOD(void, investigateOfficer, (), ());
    MOCK_METHOD(void, investigateBystander, (), ());
    MOCK_METHOD(void, LeaveHollands, (), ());
};

void playScene(int choice, FakeHollands &hlds) {
    switch (choice) {
        case 1: hlds.LeaveHollands();
        break;
        case 2: hlds.investigateReporter();
        break;
        case 3: hlds.investigateOfficer();
        break;
        case 4: hlds.investigateBystander();
        break;
    }
}

TEST(TestHollands, test_LeaveHollands) {
    NiceMock<MockHollands> hlds;

    playScene(1, hlds);
    ON_CALL(hlds, LeaveHollands());
}

TEST(TestHollands, test_investigateReporter) {
    NiceMock<MockHollands> hlds;

    playScene(2, hlds);
    ON_CALL(hlds, investigateReporter());
}

TEST(TestHollands, test_investigateOfficer) {
    NiceMock<MockHollands> hlds;

    playScene(3, hlds);
    ON_CALL(hlds, investigateOfficer());
}

TEST(TestHollands, test_investigateBystander) {
    NiceMock<MockHollands> hlds;

    playScene(4, hlds);
    ON_CALL(hlds, investigateBystander());
}