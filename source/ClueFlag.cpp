#include "../header/ClueFlag.hpp"

ClueFlag::ClueFlag() {
    flag = false; //means clue hasn't been found
}

bool ClueFlag::getFlag() {
    return flag;
}

void ClueFlag::setFlag(bool value) {
    flag = value;
}