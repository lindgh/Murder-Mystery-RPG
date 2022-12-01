#include <gtest/gtest.h>
#include "gmock/gmock.h"
#include "../header/Diner.hpp"

using ::testing::NiceMock;
using namespace std;


class FakeDiner {
    public:
    virtual void mindYourBusiness() = 0;
    virtual void talkToGentleman() = 0;
    virtual void eavesdrop() = 0;
    virtual void dinerPrompt() = 0;
};

class MockDiner : public FakeDiner {
    public:
    MOCK_METHOD(void, mindYourBusiness, (), ());
    MOCK_METHOD(void, talkToGentleman, (), ());
    MOCK_METHOD(void, eavesdrop, (), ());
    MOCK_METHOD(void, dinerPrompt, (), ());
};


void playScene(int choice, FakeDiner &din) {
    switch (choice) {
        case 1: din.eavesdrop();
        break;
        case 2: din.talkToGentleman();
        break;
        case 3: din.mindYourBusiness();
        break;
    }
    if (choice == 4) {
        din.dinerPrompt();
    }
}




TEST(TestDiner, test_eavesdrop) {
    NiceMock<MockDiner> din;

    playScene(1, din);
    ON_CALL(din, eavesdrop());
}

TEST(TestDiner, test_talkToGentleman) {
    NiceMock<MockDiner> din;

    playScene(2, din);
    ON_CALL(din, talkToGentleman());
}

TEST(TestDiner, test_mindYourBusiness) {
    NiceMock<MockDiner> din;

    playScene(3, din);
    ON_CALL(din, mindYourBusiness());
}

TEST(TestDiner, test_dinerPrompt) {
    NiceMock<MockDiner> din;

    playScene(4, din);
    ON_CALL(din, dinerPrompt());
}