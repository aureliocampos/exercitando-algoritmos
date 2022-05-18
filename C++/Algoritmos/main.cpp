// Criar uma janela de introdução para o programa
// Solitar que o usuário escolha o algoritmo que ele deseja executar
// Executar o algoritmo que o usuário escolheu para a sua interação
// Solicitar se o usuário deseja executar outro algoritmo ou não
// Se sim executar o próximo
// Se não fecha o programa

#include <iostream>
#include <string.h>
#include <locale>
#include <iomanip>

using namespace std;

void handlesExecutionAlgorithms();
int requestNewRunAlgorithm();
void alg1HelloWorld();
void alg2HelloUserMessage();
void alg3GetMessageWithSalary();
void alg4Sum();
int sum(int number1, int number2);

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");

    cout << "\n" << "======  Exercícios de Algoritmos  ======";
    cout << "\n" << "======  Prof. Gustavo Guanabara  ======" << "\n";

    handlesExecutionAlgorithms();

    return 0;
}

void handlesExecutionAlgorithms() {
    int algNumber = 0;

    cout << "\n" << "Qual algoritmo deseja executar?";
    cout << "\n" << "Digite uma valor de 1 à 100 para executar: ";
    cin >> algNumber;
    cout << "\n\n";

    switch (algNumber) {
        case 1:
            alg1HelloWorld();
            break;
        case 2:
            alg2HelloUserMessage();
            break;
        case 3: 
            alg3GetMessageWithSalary();
            break;
        case 4:
            alg4Sum();
            break;
        default:
            break;
    }
}

int requestNewRunAlgorithm() {
    char answer;
    cout << "\n\n=========================================";
    cout << "\n Deseja Executar um novo algoritmo?[S/N]\n";
    cout << "=========================================\n";
    cin >> answer;

    system("clear||cls");

    if (answer == 'S' || answer == 's') {
        handlesExecutionAlgorithms();
        return 1;
    }

    return 0;
}


// PASSO 01 - SEQUÊNCIAS BÁSICAS
/**
   Descrição do exercício: 
    1) Escreva um programa que mostre na tela a mensagem "Olá, Mundo!"
*/
void alg1HelloWorld() {
    cout << "Olá, Mundo!";

    requestNewRunAlgorithm();
}

/*
   Descrição do exercício:
    2) Faça um programa que leia o nome de uma pessoa e mostre uma mensagem de boasvindas para ela:
    Ex: Qual é o seu nome ? João da Silva
    Olá João da Silva, é um prazer te conhecer!
*/
void alg2HelloUserMessage() {
    string name = "";

    cout << "Digite seu nome: ";
    cin >> name;

    cout << "\nOlá " << name << "\n";

    requestNewRunAlgorithm();
}

/*
   Descrição do exercício:
    3) Crie um programa que leia o nome e o salário de um funcionário, mostrando no final uma mensagem.
    Ex:
    Nome do Funcionário: Maria do Carmo
    Salário: 1850,45
    O funcionário Maria do Carmo tem um salário de R$1850,45 em Junho.
*/
void alg3GetMessageWithSalary() {
    string collaborator;
    double salary = 0;
    
    cout << "Digite o nome do Colaborador(a): ";
    cin >> collaborator;

    cout << "Digite o valor do salário: " << fixed << setprecision(2);
    cin >> salary;

    cout << "\nO funcionário " << collaborator << " tem um salário de R$" << salary << " em Junho.";

    requestNewRunAlgorithm();
}

/*
    4) Desenvolva um algoritmo que leia dois números inteiros e mostre o somatório
    entre eles.
    Ex:
    Digite um valor: 8
    Digite outro valor: 5
    A soma entre 8 e 5 é igual a 13.
*/
int sum(int number1, int number2) {
    return number1 + number2;
}
void alg4Sum() {
    int num1, num2;

    cout << "Retorna a soma de dois números inteiros\n";

    cout << "\nDigite o primeiro número: ";
    cin >> num1;

    cout << "\nDigite o segundo número: ";
    cin >> num2;

    cout << "\nA soma entre " << num1 << " e " << num2 << " é igual a " << sum(num1, num2) << ".\n\n";
}