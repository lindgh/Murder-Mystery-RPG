#ifndef CLUEFLAG_HPP
#define CLUEFLAG_HPP

using namespace std;

class ClueFlag {
  private:
    bool flag;

  public:
    ClueFlag();
    bool getFlag();
    void setFlag(bool value);
};

#endif //CLUEFLAG_HPP