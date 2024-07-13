#include <iostream>
using namespace std;

int main()
{
    int n = 2;
    /* get memory address */
    cout << &n;

    /*address of operator*/

    string  myvar = "@3";
    string foo = myvar;
    string bar = myvar;
    
    return 0;
}