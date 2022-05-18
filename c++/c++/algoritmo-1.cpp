/**
* 1) Escreva um programa que mostre na tela a mensagem "Olá, Mundo!"
*/

#include <iostream>
#include <locale>

using namespace std;

int main() {
	setlocale(LC_ALL, "");

	cout << "Olá Mundo!\n";

	return 0;
}