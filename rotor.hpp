#ifndef ROTOR_HPP_INCLUDED
#define ROTOR_HPP_INCLUDED

#include <string>

using namespace std;

class Rotor {

  public:
    char tab_p[52];
    int type;
    int position;
    int current;
    Rotor();
    Rotor(int);
    void setPosition (int);
    void next();
};

#endif // ROTOR_HPP_INCLUDED
