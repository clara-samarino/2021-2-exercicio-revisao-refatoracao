#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Gerente {
    public:
        double SalarioBase; // valor minimo recebido pelo funcionario
        string idade;
        string nome;
        int rgFunc;
        double bonificacao;

        void print();

        double calcula_BONIFICACAO_GERENTE(int numTOTALVendas);
};

#endif

