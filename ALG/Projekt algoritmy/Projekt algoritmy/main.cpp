#include <iostream>
#include <stack>
#include <string>
#include <vector>
#include <sstream>
#include "functions.h"

using namespace std;

const string infix_expression = "3 + 4 * 2 / ( 1 - 5 ) * 2 ^ 3";

int main()
{
	cout << "Zadany vyraz v infixovem tvaru: " << endl << infix_expression << endl;

	vector<string> tokens;

	tokenize_input(tokens, infix_expression); // rpn_functions.cpp // prevedeni expression -> tokeny

	vector<string> postfix_expression = infix_to_postfix(tokens); // rpn.cpp // prevod vyrazu infix -> postfix

	double evaluated_expression = postfix_evaluation(postfix_expression); // postfix_eval.cpp // vyhodnoceni vyrazu 

	cout << endl << "Vysledek: " << endl << evaluated_expression; // Vypis vysledku

	return 0;
}
