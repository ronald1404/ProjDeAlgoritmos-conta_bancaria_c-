#include <iostream>
#include <string>
#include "ContaBancaria.cpp"
using namespace std;


int main(){
    contaBancaria conta;
    //iniciar conta com o número de conta e a quantidade de saldo da conta
    conta = inicializa (11,100);
    cout << "antes da movimentacao " << endl;

    //imprimir dados da conta
    imprime(conta);
    //quantidade para adicionar no saldo
    deposito(&conta, 50);
    imprime(conta);
    //quantidade que será retirada do saldo
    saque (&conta, 100);

    cout << "conta depois da movimentacao " << endl;
    imprime(conta);
}
