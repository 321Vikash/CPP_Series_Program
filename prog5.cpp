/* Author  :-Vikash Kumar Thakur
   Purpose :-3,11,29,67,127,....
   Date    :-24/08/2023
*/
#include <iostream>
using namespace std;
int main()
{
    int i;
    for (i = 1; i <= 5; i++)
    {
        if (i % 2 == 0)
            cout << i * i * i + 3 << ",";
        else
            cout << i * i * i + 2 << ",";
    }
    cout << "......";
    return 0;
}