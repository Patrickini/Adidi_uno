#include <iostream>
#include <string>
#include <vector>

std::string input = "1, 15, 30, 15.7, 8, 13.2, 74, -30, -4, -5.3";
std::vector <std::string> konami = { "arriba", "arriba", "abajo", "abajo", "izquierda", "derecha", "izquierda", "derecha", "B", "A" };
std::vector <std::string> bank;


enum estado { inicio, complejo, imaginario, real, racional, irracional, entero, fraccionario, 
			natural, intNegOrCero, exacto, periodico, uno, primo, compuesto, puro, mixto, error };
estado s0 = inicio;
estado s1 = complejo;
estado s2 = imaginario;
estado s3 = real;
estado s4 = racional;
estado s5 = irracional;
estado s6 = entero;
estado s7 = fraccionario;
estado s8 = natural;
estado s9 = intNegOrCero;
estado s10 = exacto;
estado s11 = periodico;
estado s12 = uno;
estado s13 = primo;
estado s14 = compuesto;
estado s15 = puro;
estado s16 = mixto;
estado s17 = error;


void anLexico(std::string str) {
	int currentLen = (int)str.length();
	int iterador = 0;
	std::string temp;
	for (int j = 0; j < currentLen; ++j) {
		if (str[j] >= 65 && str[j] < 91 || str[j] > 96 && str[j] < 123) {
			//bank[iterador] += str[j];
			temp += str[j];
		}
		else if (str[j] == 44) {
			bank.push_back(temp);
			temp.clear();
			iterador++;
			j++;
		}
		else {
			std::cout << "cadena con caracter invalido \n";
			break;
		}
		if (j == (currentLen - 1)) {
			bank.push_back(temp);
		}
	}
}

bool automata() {
//int vecSz = bank.size();
	estado cEstate = s0;
	for (int i = 0; i <  bank.size() ; ++i) {
		switch (cEstate) {
		case inicio:
			if (bank[i] == "arriba") {
				cEstate = s1;
			}
			else {
				cEstate = s8;
			}
		case arriba:
			if (bank[i] == "abajo") {
				cEstate = s2;
			}
			else if (bank[i] == "arriba") {
				cEstate = s1;
			}
			else {
				cEstate = s8;
			}
		case abajo:
			if (bank[i] == "izquierda") {
				cEstate = s3;
			}
			else if (bank[i] == "abajo") {
				cEstate = s2;
			}
			else {
				cEstate = s8;
			}
		case izquierda:
			if (bank[i] == "derecha") {
				cEstate = s4;
			}
			else if (bank[i] == "izquierda") {
				cEstate = s3;
			}
			else {
				cEstate = s8;
			}
		case derecha:
			if (bank[i] == "B") {
				cEstate = s5;
			}
			else if (bank[i] == "derecha") {
				cEstate = s4;
			}
			else {
				cEstate = s8;
			}
		case B:
			if (bank[i] == "A") {
				cEstate = s6;
			}
			else if (bank[i] == "B") {
				cEstate = s5;
			}
			else {
				cEstate = s8;
			}
		case A:
			if (bank[i] == "final") {
				cEstate = s7;
			}
			else if (bank[i] == "A") {
				cEstate = s6;
			}
			else {
				cEstate = s8;
			}
		case final:
			if (bank[i] == "final") {
				return true;
				break;
			}
			else {
				cEstate = s8;
			}
				case error:
				return false;
				break;
			}
	}
}

int main() {

}