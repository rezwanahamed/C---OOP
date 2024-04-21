#include <iostream>
using namespace std;

class SuperHero
{
    // basic constructor / default / without parameter constructor
public:
    SuperHero()
    {
        cout << "I am calling constructor" << endl;
    }
};
int main()
{
    // object create statically
    SuperHero ramesh;

    // object create dynamically
    SuperHero *h = new SuperHero;

    return 0;
}