#include <iostream>
//#include "MyCoolLib.h"
//#include "..\StaticLib1\StaticLib1.h"
#include <Windows.h>
using namespace std;
/*
int triple(int a, int b) {
    return 3 * add(a, b);
}*/
int main()
{
    HINSTANCE LOAD;
    auto load = LoadLibrary(L"Dll1.dll");
    typedef int(*add_dll)(int, int);
    add_dll add;
    add = (add_dll)GetProcAddress(load, "add");
    cout<<add(3, 2)<<endl;
    //cout << triple(3, 2)<<endl;
}