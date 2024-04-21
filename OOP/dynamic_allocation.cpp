#include <iostream>
using namespace std;

class SuperHero
{
public:
    string name;
    int power;
};
int main()
{   
    // static allocation
    SuperHero D;
    D.power = 999;
    cout << D.power << endl;

    // dynamic allocation
    SuperHero *A = new SuperHero;

    (*A).power = 33;
    cout << (*A).power << endl;

    // another way to write the pointer
    A->power = 1;
    cout << A->power << endl;
}