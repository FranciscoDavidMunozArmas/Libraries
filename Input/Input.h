/***********************************************************************
 * Module:  Input.h
 * Author:  USUARIO
 * Modified: miércoles, 27 de mayo de 2020 15:07:22
 * Purpose: Declaration of the class Input
 ***********************************************************************/

#if !defined(__ID_verificator_h)
#define __ID_verificator_h

using namespace std;

class Input {
public:
	Input();
	string input(string input_phrase);
	string input_number(string input_phrase);
	string input_int_number(string input_phrase);
};

#endif