#include <iostream>
//#include "MyCoolLib.h"
#include "..\StaticLib1\StaticLib1.h"
using namespace std;

int triple(int a, int b) {
    return 3 * add(a, b);
}
int main()
{

    cout<<add(3, 2)<<endl;
    cout << triple(3, 2)<<endl;
}