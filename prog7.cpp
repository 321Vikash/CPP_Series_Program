/* Author  :-Vikash Kumar Thakur
   Purpose :-1,9,25,49,81,....
   Date    :-24/08/2023
*/
#include <iostream>
using namespace std;
int main()
{
    int i;
    for (i = 1; i <= 10; i += 2)
    {
        cout << i * i << ",";
    }
    cout << ".....";
    return 0;
}