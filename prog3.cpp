/* Author  :-Vikash Kumar Thakur
   Purpose :-2,3,10,15,26,....
   Date    :-24/08/2023
*/
#include <iostream>
using namespace std;
int main()
{
    int i, a;
    for (i = 1; i <= 5; i++)
    {
        if (i % 2 == 0)

            cout << i * i - 1 << ",";
        else
            cout << i * i + 1 << ",";
    }
    cout << ".....";
    return 0;
}