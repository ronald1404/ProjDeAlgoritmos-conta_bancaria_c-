#include <iostream>
#include <string>
#include "ContaBancaria.h"
using namespace std;

contaBancaria inicializa (int num, double sal){
    //num e sal serão atribuidos as valores de numero da conta e saldo respectivamentes
    contaBancaria conta;
    conta.numero = num;
    conta.saldo = sal;
    return conta;
}
//função que irá adicionar um valor a conta
void deposito(contaBancaria *conta, double valor){
    conta->saldo += valor;
}
//função que imprime um valor do saldo da conta
void saque(contaBancaria *conta, double valor){
    conta->saldo -= valor;
}

//funçao que mostra o saldo conta
void imprime(contaBancaria conta){
    cout << "numero de conta: " << conta.numero << "\nPosssui saldo saldo de R$ = " << conta.saldo << endl;
}