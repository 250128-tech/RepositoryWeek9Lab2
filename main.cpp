#include <iostream>
using namespace std;

int IntegerReplacement(int n);

int main()
{
    int n; cin >> n;
    cout << IntegerReplacement(n);
    return 0;
}

int IntegerReplacement(int n)
{
    int counter = 0;
    while ( n > 1 )
    {
        if ( n == 3 || n == 2147483647 )
        {
            n--;
            counter++;
            continue;
        }
        if ( n % 2 == 1 )
        {
            if ( (n + 1 ) % 2 == 0 )
            {
                counter++;
                n++;
            }
            else
            {
                counter++;
                n--;
            }
        } else
        {
            n /= 2;
            counter++;
        }

    }
    return counter;
}