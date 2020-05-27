/***********************************************************************
 * Module:  Input.h
 * Author:  USUARIO
 * Modified: miércoles, 27 de mayo de 2020 15:07:22
 * Purpose: Declaration of the class Input
 ***********************************************************************/

#include "Input.h"

#include "../Verify_number/Verify_number.cpp"
#include <iostream>
#include <string>

using namespace std;

////////////////////////////////////////////////////////////////////////
// Name:       Input::Input()
// Purpose:    Implementation of Input::Input()
// Parameters:
// - string_1
// Return:     void
////////////////////////////////////////////////////////////////////////
Input::Input() {}

////////////////////////////////////////////////////////////////////////
// Name:       Input::input(string input_phrase)
// Purpose:    Implementation of Input::input(string input_phrase)
// Parameters:
// - input_phrase
// Return:     string
////////////////////////////////////////////////////////////////////////
string Input::input(string input_phrase) {
	string aux;
	do {
		cout << input_phrase;
		getline(cin, aux);
		if (aux.length() == 0) {
			cout << "Error... No ha escrito nada" << endl;
		}
	} while (aux.length() == 0);
	return aux;
}

////////////////////////////////////////////////////////////////////////
// Name:       Input::input_number(string input_phrase)
// Purpose:    Implementation of Input::input_number(string input_phrase)
// Parameters:
// - string_1
// Return:     string
////////////////////////////////////////////////////////////////////////
string Input::input_number(string input_phrase) {
	string aux;
	do {
		cout << input_phrase;
		getline(cin, aux);
		if (!is_float_number(aux)) {
			cout << "Error... No es un numero" << endl;
		}
		if (aux.length() == 0) {
			cout << "Error... No ha escrito nada" << endl;
		}
	} while (!is_float_number(aux) || aux.length() == 0);
	return aux;
}

////////////////////////////////////////////////////////////////////////
// Name:       Input::input_int_number(string input_phrase);
// Purpose:    Implementation of Input::input_int_number(string input_phrase);
// Parameters:
// - string_1
// Return:     string
////////////////////////////////////////////////////////////////////////
string Input::input_int_number(string input_phrase) {
	string aux;
	do {
		cout << input_phrase;
		getline(cin, aux);
		if (!is_int_number(aux)) {
			cout << "Error... No es un numero entero" << endl;
		}
		if (aux.length() == 0) {
			cout << "Error... No ha escrito nada" << endl;
		}
	} while (!is_int_number(aux) || aux.length() == 0);
	return aux;
}