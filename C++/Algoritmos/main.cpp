#include <iostream>
#include <string.h>
#include <locale>
#include <iomanip>

using namespace std;

int requestNewRunAlgorithm();
int sum(int number1, int number2);
double handleWithAverage(double note1, double note2);
void handlesExecutionAlgorithms();
void algorithmOne();
void algorithmTwo();
void algorithmThree();
void algorithmFour();
void algorithmFive();
void algorithmSix();
void algorithmSeven();
void algorithmEight();

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
            algorithmOne();
            break;
        case 2:
            algorithmTwo();
            break;
        case 3: 
            algorithmThree();
            break;
        case 4:
            algorithmFour();
            break;
        case 5:
            algorithmFive();
            break;
        case 6:
            algorithmSix();
            break;
        case 7: 
            algorithmSeven();
            break;
        case 8:
            algorithmEight();
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
void algorithmOne() {
    cout << "Olá, Mundo!";

    requestNewRunAlgorithm();
}

/*
   Descrição do exercício:
    2) Faça um programa que leia o nome de uma pessoa e mostre uma mensagem de boasvindas para ela:
    Ex: Qual é o seu nome ? João da Silva
    Olá João da Silva, é um prazer te conhecer!
*/
void algorithmTwo() {
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
void algorithmThree() {
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
   Descrição do exercício:
    4) Desenvolva um algoritmo que leia dois números inteiros e mostre o somatório
    entre eles.
    Ex:
    Digite um valor: 8
    Digite outro valor: 5
    A soma entre 8 e 5 é igual a 13.
*/
void algorithmFour() {
    int num1, num2;

    cout << "Retorna a soma de dois números inteiros\n";

    cout << "\nDigite o primeiro número: ";
    cin >> num1;

    cout << "\nDigite o segundo número: ";
    cin >> num2;

    cout << "\nA soma entre " << num1 << " e " << num2 << " é igual a " << sum(num1, num2) << ".\n\n";

    requestNewRunAlgorithm();
}
int sum(int number1, int number2) {
    return number1 + number2;
}

/*
  Descrição do exercício:
    5) Faça um programa que leia as duas notas de um aluno em uma matéria e mostre
    na tela a sua média na disciplina.
    Ex:
    Nota 1: 4.5
    Nota 2: 8.5
    A média entre 4.5 e 8.5 é igual a 6.5
*/
void algorithmFive() {
    double note1, note2;

    cout << "Descubra sua média na disciplina\n";

    cout << "Nota 1: ";
    cin >> note1;

    cout << "\n";

    cout << "Nota 2: ";
    cin >> note2;

    cout << "\nA média entre " << note1 << " e " << note2 << " é igual a " << handleWithAverage(note1, note2) << "\n\n";

    requestNewRunAlgorithm();
}
double handleWithAverage(double note1, double note2) {
    return (note1 + note2) / 2;
}

/*
  Descrição do exercício:
    6) Faça um programa que leia um número inteiro e mostre o seu antecessor e seu
    sucessor.
    Ex:
    Digite um número: 9
    O antecessor de 9 é 8
    O sucessor de 9 é 10
*/
void algorithmSix() {
    int number, predecessor, successor;

    cout << "Digite um número: ";
    cin >> number;

    predecessor = number - 1;
    successor = number + 1;

    cout << "O antecessor de " << number << " é " << predecessor;
    cout << "\n";
    cout << "O sucessor de " << number << " é " << successor;

    requestNewRunAlgorithm();
}

/*
  Descrição do exercício:
    7) Crie um algoritmo que leia um número real e mostre na tela o seu dobro e a
    sua terça parte.
    Ex:
    Digite um número: 3.5
    O dobro de 3.5 é 7.0
    A terça parte de 3.5 é 1.16666
*/
void algorithmSeven() {
    double number, doubleNumber, thirdPart;

    cout << "Digite um número: ";
    cin >> number;

    doubleNumber = number * 2;
    thirdPart = number / 3;

    cout << "\nO dobro de " << number << " é " << doubleNumber;
    cout << "\nA terça parte de " << number << " é " << thirdPart;

    requestNewRunAlgorithm();
}

/*
  Descrição do exercício:
    8) Desenvolva um programa que leia uma distância em metros e mostre os valores
    relativos em outras medidas.
    Ex:
    Digite uma distância em metros: 185.72
    A distância de 85.7m corresponde a:
    0.18572Km
    1.8572Hm
    18.572Dam
    1857.2dm
    18572.0cm
    185720.0mm
*/
void algorithmEight() {
    double distance, kilometer, hectometer, decameter,
        decimeter, Centimeter, Milímetro;

    cout << "Digite uma distância em metro: ";
    cin >> distance;
    
    kilometer = distance / 1000;

    cout << "\nA distância de " << distance << " metros corresponde a: \n\n";
    cout << kilometer << " Quilômetros\n\n";
}