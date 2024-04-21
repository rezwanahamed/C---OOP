#include <iostream>
using namespace std;

class Hero
{
public:
    int power;
    string name;
};

class EmptyClass
{
    // property
    // the memory allocation of a empty class is 1
};

int main()
{
    Hero h1;
    h1.power = 234343;
    h1.name = "Rezwan";
    cout << h1.power << " " << h1.name << endl;

    return 0;
}
