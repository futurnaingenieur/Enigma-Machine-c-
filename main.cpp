#include <iostream>
#include <string>
#include<windows.h>
#include "rotor.hpp"
using namespace std;


char tab[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char reflector[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char key[] = {'a','a','a'};

int main()
{
    Rotor *r1 = new Rotor(1);
    int choix=0;
    char decision = '0';
    string cle_crypt = "000";
    string pos_rot ="000";
    bool b = true;
    while(b){
    cout << "Bienvenue dans Enigma!" << endl;
    cout << "Que faire? :" << endl;
    cout << "1-Nouveaux parametres de la machine manuel" << endl;
    cout << "2-Nouveaux parametres de la machine aleatoire" << endl;
    cout << "3-Crypter un message" << endl;
    cout << "5-Quitter" << endl;
    cin >> choix;
    cin.clear();
    switch (choix){
    case 1:
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\ " << endl;
        cout << "*---------------------------------------------------------*  \n\|               Choix de nouveaux parametre               |\n\|                                                         | \n\*---------------------------------------------------------*" << endl;
        while(cle_crypt.size()!=3 || (!isalpha(cle_crypt[0]) || !isalpha(cle_crypt[1]) || !isalpha(cle_crypt[2]))){
            cin.clear();
            cout << "Entrer la cle de cryptage(3 lettres):" << endl;
            getline(cin,cle_crypt);
        }
        cout << "La cle de cryptage sera: " << cle_crypt << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\ " << endl;
        cout << "Choisisez maintenant la position des Rotor (ex: 123,321,132,...):" << endl;
        cin >> pos_rot;
        while(pos_rot.size()!=3 || (pos_rot!="123"  && pos_rot!="132"  && pos_rot!="213"  && pos_rot!="231"  && pos_rot!="312"  &&  pos_rot!="321")){
            cout << "Entrer une bonne positions pour les rotors:" << endl;
            getline(cin,pos_rot);
        }
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\ " << "Cle de cryptage:" << cle_crypt << "\n\ position des rotors:" << pos_rot << "\n\ Ok?(y/n):" << endl;
        cin >> decision;
        cin.clear();
        while(decision != 'y' && decision != 'Y' && decision != 'n' && decision != 'N' ){
            cout << "Entrer une bon choix (y/n):" << endl;
            cin >> decision;
            cin.clear();
        }
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\ " << endl;
        break;
    case 3:
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\ " << endl;
        cout << "*---------------------------------------------------------*  \n\|               Entrer un message a crypter               |\n\|                                                         | \n\*---------------------------------------------------------*" << endl;
        break;
    case 2:
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\ " << endl;
        cout << "choix 3" << endl;
        break;
    case 42:
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\ " << endl;
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\ " << "Cle de cryptage:" << cle_crypt << "\n\ position des rotors:" << pos_rot << "\n\n\n\n\n\n\n\n\n\ " << endl;
        for(int j=0;j<7;j++){
            Sleep(500);
            cout << "\n\ " << endl;
        }
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\ " << endl;
        break;
    case 5:
        b=false;
        break;
    default:
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\ " << endl;
        break;
    }
    }
    return 0;
}
