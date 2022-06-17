#include <iostream>
#include "MyCoolLib_lol.cpp"
using namespace std;

int triple(int a, int b) {
    return 3 * add(a, b);
}
int main()
{
    cout<<add(3, 2)<<endl;
    cout << triple(3, 2)<<endl;
}