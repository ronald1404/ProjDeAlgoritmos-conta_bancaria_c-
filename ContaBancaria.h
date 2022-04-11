//definir o tipo de estrutura a ser usado com typedef
typedef struct {
    int numero;
    double saldo;
}contaBancaria;

//definir informações das funções e tipos de entrada
contaBancaria inicializa(int a,double b );
void deposito(contaBancaria*, double b);
void saque(contaBancaria*, double b);
void imprime (contaBancaria);