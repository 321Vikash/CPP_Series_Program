/* Author  :-Vikash Kumar Thakur
   Purpose :-2,10,30,68,130,.....
   Date    :-24/08/2023
*/
#include <iostream>
using namespace std;
int main()
{
    int i;
    for (i = 1; i <= 5; i++)
    {
        cout << i * i * i + i << ",";
    }
    cout << ".....";
    return 0;
}
