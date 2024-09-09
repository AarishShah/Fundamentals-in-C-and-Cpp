#include <iostream>
using namespace std;

template <class T>
class Airthmetic
{
private:
    T a;
    T b;

public:
    Airthmetic(T a = 1, T b = 1)
    {
        this->a = a;
        this->b = b;
    }

    T add();
    T sub();
};
template <class T>
T Airthmetic<T>::add()
{
    return a + b;
}
template <class T>
T Airthmetic<T>::sub()
{
    return a - b;
}

int main()
{
    Airthmetic<float> a1(10, 5.2);
    cout << a1.add() << endl;

    Airthmetic<int> a2(10, 5);
    cout << a2.add() << endl;
}