/**
	2) Fa�a um programa que leia o nome de uma pessoa e mostre uma mensagem de boasvindas para ela:
	Ex:
	Qual � o seu nome? Jo�o da Silva
	Ol� Jo�o da Silva, � um prazer te conhecer!
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

	cout << "\n" << "Ol� " << name << ", � um prazer te conhecer!" << "\n\n";

	return 0;
}