#include <iostream>
#include <stdlib.h>
#include "InstanceOf.cpp"

using namespace std;

int main() {
    string x = "Hola Mundo";
    int i = 0;
    cout << instanceOf(i, x);
}
