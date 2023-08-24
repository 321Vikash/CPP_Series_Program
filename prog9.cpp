/* Author  :-Vikash Kumar Thakur
   Purpose :-2,4,7,11,16,....
   Date    :-24/08/2023
*/
#include <iostream>
using namespace std;
int main()
{
    int i, p = 1, k = 1;
    for (i = 1; i <= 5; i++)
    {
        k += p;
        cout << k << ",";
        p++;
    }
    cout << ".....";
    return 0;
}