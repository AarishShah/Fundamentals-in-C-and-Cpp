// Tree Recursion

#include <iostream>
using namespace std;

void fun(int n)
{
    if (n > 0)
    {
        cout << n << " ";
        fun(n - 1);
        // cout << " ";
        fun(n - 1);
    }
}

int main()
{
    fun(3);
}

// Debug to analyse  