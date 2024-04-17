#include <iostream>
using namespace std;

// class
class SuperHero
{
private:
    int power;

public:
    // getter
    int getPower()
    {
        return power;
    }

    // setter
    void setPower(int power)
    {
        this->power = power;
    }
};

int main()
{
    SuperHero h1;
    h1.setPower(22);

    cout << h1.getPower() << endl;
}
