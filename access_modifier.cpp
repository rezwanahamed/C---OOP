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
private:
    string name;
};

class PublicAccessModifier
{

public:
    string name;
    int power;
};

// protected access modifier (using inheritance)

class ProtectedAccessModifier : protected PublicAccessModifier
{
public:
    string color;
    int age;

    int getPower()
    {
        return power;
    }
    void setAge(int power)
    {
        this->power = power;
    }
};

int main()
{
    PublicAccessModifier h1;
    ProtectedAccessModifier h3;

    h1.name = "Hello Kite";
    cout << h1.name << endl;

    PrivateAccessModifier h2;
    h3.setAge(23);
    cout << h3.getPower() << endl;
    // can't use property in private access modifier with out getter and setter

    return 0;
}
