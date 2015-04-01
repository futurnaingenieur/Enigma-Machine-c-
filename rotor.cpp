#include <iostream>
#include "rotor.hpp"
using namespace std;

char rot1[52] = {'e','k','m','f','l','g','d','q','v','z','n','t','o','w','y','h','x','u','s','p','a','i','b','r','c','j','e','k','m','f','l','g','d','q','v','z','n','t','o','w','y','h','x','u','s','p','a','i','b','r','c','j'};
char rot2[52] = {'a','j','d','k','s','i','r','u','x','b','l','h','w','t','m','c','q','g','z','n','p','y','f','v','o','e','a','j','d','k','s','i','r','u','x','b','l','h','w','t','m','c','q','g','z','n','p','y','f','v','o','e'};
char rot3[52] = {'b','d','f','h','j','l','c','p','r','t','x','v','z','n','y','e','i','w','g','a','k','m','u','s','q','o','b','d','f','h','j','l','c','p','r','t','x','v','z','n','y','e','i','w','g','a','k','m','u','s','q','o'};
        Rotor::Rotor(){
            type=0;
            position=0;
            current=-1;
        }
        Rotor::Rotor(int type){
            type = type;
            position = -1;
            current = 0;
        switch(type){
        case 1:
            for(int i=0;i<52;i++){
                tab_p[i] = rot1[i];
            }
            break;
        case 2:
            for(int i=0;i<52;i++){
                tab_p[i] = rot2[i];
            }
            break;
        case 3:
            for(int i=0;i<52;i++){
                tab_p[i] = rot3[i];
            }
            break;
        default:
            cout << "error" << endl;
            break;
        }
    }
    void Rotor::setPosition (int pos){
        position = pos;
    }
    void Rotor::next(){
        current++;
    }
