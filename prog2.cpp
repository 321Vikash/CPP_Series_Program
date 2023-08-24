/* Author  :-Vikash Kumar Thakur
   Purpose :-0,3,8,15,24,.....
   Date    :-24/08/2023
*/
#include <iostream>
using namespace std;
int main()
{
    int i, a;
    for (i = 1; i <= 5; i++)
    {
        a = i * i - 1;
        cout << a << ",";
    }
    cout << ".....";
    return 0;
}