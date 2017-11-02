#include <iostream>
#include <stack>
#include <string>


std::string caca = "a-d*c*e-f#";
std::string posfijo;

std::stack <char> pila;

char se;
char temp;

int priority(char p) {

	char pedo = p;

	/* " ( " */
	if (pedo == 40) {
		return 5;
	}
	/* "0123456789" */
	if (pedo >= 48 || pedo <= 57) {
		return 4;
	}
	/* " * || / " */
	if (pedo == 42 || pedo == 47) {
		return 3;
	}
	/* " + || - " */
	if (pedo == 43 || pedo == 45) {
		return 2;
	}
	/* " ) " */
	if (pedo == 41) {
		return 1;
	}
	/* " # " */
	if (pedo == 35) {
		return 0;
	}
}


void process(std::string str) {
	for (int i = 0; i < str.length(); ++i) {
		if (i = 0) pila.push(str[i]);
		if (priority(str[i]) > priority( pila.top())) {
			pila.push(str[i]);
		}/*
		else {
			temp = pila.top();
			pila.pop();
			pila.push(str[i]);
			pila.push(temp);
		}*/
	}

	for (int j = (pila.size() - 1); j >= 0; --j) {
		posfijo[j] = pila.top();
		pila.pop();
	}
	std::cout << posfijo << "\n";
}


int main()
{
	process(caca);
	system("pause");
	return 0;
}