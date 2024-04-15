#include <iostream>
using namespace std;

// access modifiers
/*
1. private
2. protected (can be explained using inheritance)
3. public
*/

class PrivateAccessModifier
{
    // by default the access modifier in C++ is private
    string name;
};

class PublicAccessModifier
{

public:
    string name;
};

// protected access modifier (using inheritance)

class ProtectedAccessModifier : protected PublicAccessModifier
{
    string color;
    int power;

    void getName()
    {
        count << this->name;
    }
};

int main()
{
    PublicAccessModifier h1;
    h1.name = "Hello Kite";
    cout << h1.name << endl;

    PrivateAccessModifier h2;
    // can't use property in private access modifier with out getter and setter

    return 0;
}
