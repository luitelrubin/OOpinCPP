/*
Use of macros
*/

#include <iostream>
using namespace std;

#define mul(a, b) a *b // macro definition
#define div(a, b) a / b
int main()
{
    int x = 2, y = 3;
    float n = 5.0, m = 2.0;

    cout << mul(x, y); // macro call
    cout << "\n";

    cout << div(n, m); // macro call
    cout << "\n";

    return 0;
}

/*
Output:
6
2.5
*/