//
// Created by user on 11/12/2026.
//

#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    char Char = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << char(Char + j - 1);
        }
        cout << endl;
    }
    return 0;
}




// This is Problem 9, ignore it.
//
// #include <iostream>
// using namespace std;
//
// bool isPalindrome(int Number);
//
// int main()
// {
//     int n; cin >> n;
//     int SumNum = 0;
//
//     for ( int i = 1; i <= n; i++)
//     {
//         if (isPalindrome(i)){SumNum+=i;}
//     }
//
//     cout << SumNum;
//     return 0;
// }
//
// bool isPalindrome(int Number)
// {
//     bool ifPalindrome = 1;
//     int MirrorNumber = 0;
//     int NumberCopy = Number;
//     while (true)
//     {
//         if ( Number == 0 ) { break;}
//         MirrorNumber = MirrorNumber*10+Number%10;
//         Number /= 10;
//     }
//     if ( NumberCopy != MirrorNumber ) { ifPalindrome = 0; }
//     return ifPalindrome;
// }

/* this is problem 8. it was here, so i just made it a comment. no need to check this. thankyou.
 *
 * #include <iostream>
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

}*/