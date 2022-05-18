/**
	2) Faça um programa que leia o nome de uma pessoa e mostre uma mensagem de boasvindas para ela:
	Ex:
	Qual é o seu nome? João da Silva
	Olá João da Silva, é um prazer te conhecer!
*/

#include <iostream>
#include <locale>
#include <string.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	
	string name = "";

	cout << "\n" << "Qual o seu nome? " << "\n";
	cin >> name;

	cout << "\n" << "Olá " << name << ", é um prazer te conhecer!" << "\n\n";

	return 0;
}