/* Author  :-Vikash Kumar Thakur
   Purpose :-22,99,224,399,.....
   Date    :-24/08/2023
*/
#include <iostream>
using namespace std;
int main()
{
    int i;
    for (i = 5; i <= 20; i+=5)
    {
        cout << i * i - 1 << ",";
    }
    cout << ".....";
    return 0;
}