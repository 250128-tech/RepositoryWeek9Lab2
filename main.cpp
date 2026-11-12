//
// Created by user on 11/12/2026.
//
#include <iostream>
using namespace std;


int main()
{
    int c; cin >> c;
    int Largest = 1;
    int Product = 1;
    while (true)
    {
        if ( c == 0 || c == 1)
        {
            break;
        }
        if ( c%10 != 0)
        {
            Product *= c%10;
        }
        Largest = Largest >= c % 10 ? Largest : c % 10;
        c /= 10;
    }
    cout << Product << ' ' << Largest;

}