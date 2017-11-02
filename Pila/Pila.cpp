// Pila.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
#include <stack>

std::string ejemplo = "((( a+b )))";
std::stack <char> pila1;
std::stack <char> pila2;

bool balance = false;

////////////////////////////////////////
void meterPila(std::string str) {
	for (int i = 0; i < (str.length()); ++i) {
		if (str[i] == 40 || str[i] == 41) {
			pila1.push(str[i]);
		}
	}
}
void movimiento(std::string str) {
	for (int i = 0; i < (str.length()); ++i) {
		if (str[i] == 40 || str[i] == 41) {
			pila1.push(str[i]);
		}
	}
	while (pila1.size() > 0) {
		if (pila1.size() % 2 == 1) {
			balance = false;
			break;
		}
		if (pila1.top() == 41) {
			pila2.push(pila1.top());
			if (pila1.top() == pila2.top()) {
				pila1.pop();
				pila2.pop();
			}
		}
		else if (pila1.top() == 40) {
			pila2.push(pila1.top());
			if (pila1.top() == pila2.top()) {
				pila1.pop();
				pila2.pop();
			}
		}
		/*else if (pila1.top() == 40 && pila2.top() == 40) {
			pila1.pop();
			pila2.pop();
		}*/
		if (pila1.size == 1) {
			std::cout << "no hay pares \n";
			break;
		}
	}

}
////////////////////////////////////////

int main()
{
	movimiento(ejemplo);


    return 0;
}

