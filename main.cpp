#include <iostream>
#include <string>

using namespace std;

struct Conta
{
    string numero;
    string cpfTitular;
    string nomeTitular;
    float saldo;
};

int main(){
    Conta umaConta;
    umaConta.numero = "1234";
    umaConta.cpfTitular = "123.456.789.10";
    umaConta.nomeTitular = "jose";
    umaConta.saldo = 100;

    Conta outraConta;
    outraConta.numero = "123456";
    outraConta.cpfTitular = "123.456.786.10";
    outraConta.nomeTitular = "Victor";
    outraConta.saldo = 200;

    cout << "Uma conta:" << umaConta.saldo << "Outra conta:" << outraConta.saldo << endl;

    return 0;

}