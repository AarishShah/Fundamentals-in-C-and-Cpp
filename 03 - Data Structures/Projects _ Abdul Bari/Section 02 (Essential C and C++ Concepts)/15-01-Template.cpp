// This program doesn't have Template. Use this program for comparision with the next program that has Template.

#include <iostream>
using namespace std;

class Airthmetic
{
private:
    int a;
    int b;

public:
    Airthmetic(int a = 1, int b = 1)
    {
        this->a = a;
        this->b = b;
    }

    int add();
    int sub();
};

int Airthmetic::add()
{
    return a + b;
}

int Airthmetic::sub()
{
    return a - b;
}

int main()
{
    Airthmetic a1(10, 5.2);
    cout << a1.add() << endl;

    Airthmetic a2(10, 5);
    cout << a2.add() << endl;
}