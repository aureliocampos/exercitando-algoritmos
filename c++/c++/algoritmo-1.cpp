/**
* 1) Escreva um programa que mostre na tela a mensagem "Ol�, Mundo!"
*/

#include <iostream>
#include <locale>

using namespace std;

int main() {
	setlocale(LC_ALL, "");

	cout << "Ol� Mundo!\n";

	return 0;
}