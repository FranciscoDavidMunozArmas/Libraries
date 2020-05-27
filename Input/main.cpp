#include <iostream>
#include "Input.cpp"

using namespace std;

int main(){
    Input input;
    string aux = input.input_int_number("Escribe algo: ");
    cout << aux;
}
