#include <iostream>
#include <string>

using namespace std;

class SodaMachine
{
private:
    int total_agua;
    int total_refrigerante;

public:
    // constantes de estados
    static constexpr int DESLIGADO = -1;
    static constexpr int SALDO_ZERO = 0;
    static constexpr int SALDO_050 = 50;
    static constexpr int SALDO_100 = 100;
    static constexpr int SALDO_150 = 150;
    static constexpr int SALDO_200 = 200;
    static constexpr int SALDO_250 = 250;
    int estado;

    SodaMachine()
    {
        total_agua = 0;
        total_refrigerante = 0;
        estado = DESLIGADO;
    }

    void printSaldo() // Função que printa o saldo atual
    {
        switch (estado)
        {
        case SALDO_ZERO:
            cout << "Saldo 0,00" << endl;
            break;
        case SALDO_050:
            cout << "Saldo 0,50" << endl;
            break;
        case SALDO_100:
            cout << "Saldo 1,00" << endl;
            break;
        case SALDO_150:
            cout << "Saldo 1,50" << endl;
            break;
        case SALDO_200:
            cout << "Saldo 2,00" << endl;
            break;
        case SALDO_250:
            cout << "Saldo 2,50" << endl;
            break;
        }
    }

    void comandoErrado()
    {
        cout << "Comando inválido." << endl
             << "Os comandos válidos são: Q, A, R, I50, I100, D" << endl;
        printSaldo();
    }

    void venderAgua() // // Função caso o usuário escolha comprar um água com base no saldo disponível
    {
        switch (estado)
        {
        case SALDO_ZERO:
            cout << "Não há crédito" << std::endl;
            break;
        case SALDO_050:
            cout << "Saldo insuficiente" << std::endl;
            break;
        case SALDO_100:
            cout << "Saldo insuficiente" << std::endl;
            break;
        case SALDO_150:
            cout << "Água entregue" << std::endl;
            total_agua += 1;
            estado = SALDO_ZERO;
            break;
        case SALDO_200:
            cout << "Água entregue" << std::endl;
            total_agua += 1;
            estado = SALDO_050;
            break;
        case SALDO_250:
            cout << "Água entregue" << std::endl;
            total_agua += 1;
            estado = SALDO_100;
            break;
        }
        printSaldo();
    }

    void venderRefrigerante() // Função caso o usuário escolha comprar um refrigerante com base no saldo disponível
    {
        switch (estado)
        {
        case SALDO_ZERO:
            cout << "Não há crédito." << std::endl;
            break;
        case SALDO_050:
            cout << "Saldo insuficiente" << std::endl;
            break;
        case SALDO_100:
            cout << "Saldo insuficiente" << std::endl;
            break;
        case SALDO_150:
            cout << "Saldo insuficiente" << std::endl;
            break;
        case SALDO_200:
            cout << "Refrigerante entregue" << endl;
            total_refrigerante += 1;
            estado = SALDO_ZERO;
            break;
        case SALDO_250:
            cout << "Refrigerante entregue" << std::endl;
            total_refrigerante += 1;
            estado = SALDO_050;
            break;
        }
        printSaldo();
    }

    void inserir050() // Função caso seja inserida uma moeda de 0,50 ienes
    {
        switch (estado)
        {
        case SALDO_ZERO:
            estado = SALDO_050;
            break;
        case SALDO_050:
            estado = SALDO_100;
            break;
        case SALDO_100:
            estado = SALDO_150;
            break;
        case SALDO_150:
            estado = SALDO_200;
            break;
        case SALDO_200:
            estado = SALDO_250;
            break;
        case SALDO_250:
            cout << "Moeda devolvida." << std::endl;
            break;
        }
        printSaldo();
    }

    void inserir100() // Função caso seja inserida uma moeda de 1,00 ienes
    {
        switch (estado)
        {
        case SALDO_ZERO:

            estado = SALDO_100;
            break;
        case SALDO_050:

            estado = SALDO_150;
            break;
        case SALDO_100:

            estado = SALDO_200;
            break;
        case SALDO_150:
            estado = SALDO_250;
            break;
        case SALDO_200:
            cout << "Moeda devolvida." << std::endl;
            break;
        case SALDO_250:
            cout << "Moeda devolvida." << std::endl;
            break;
        }
        printSaldo();
    }

    void devolverSaldo() // Função caso o usuário queira todo seu dinheiro de volta
    {
        switch (estado)
        {
        case SALDO_ZERO:
            cout << "Não há crédito." << std::endl;
            break;
        case SALDO_050:
            cout << "Devolvido: $0.50" << std::endl;
            break;
        case SALDO_100:
            cout << "Devolvido: $1.00" << std::endl;
            break;
        case SALDO_150:
            cout << "Devolvido: $1.50" << std::endl;
            break;
        case SALDO_200:
            cout << "Devolvido: $2.00" << std::endl;
            break;
        case SALDO_250:
            cout << "Devolvido: $2.50" << std::endl;
            break;
        }
        estado = SALDO_ZERO;
        printSaldo();
    }

    void ligarDesligar() // Função para desligar e ligar a máquina
    {
        if (estado == DESLIGADO)
        {
            estado = SALDO_ZERO;
            cout << "Máquina funcionando." << std::endl;
            printSaldo();
        }
        else if (estado != DESLIGADO && estado != SALDO_ZERO)
        {
            cout << "Não é possível desligar a máquina com saldo." << std::endl;
            printSaldo();
        }
        else if (estado == SALDO_ZERO)
        {
            estado = DESLIGADO;
            cout << "Saldo das vendas: \n"
                 << total_agua << " água(s)\n"
                 << total_refrigerante << " refrigerante(s)."
                 << std::endl;
            cout << "Máquina desligada." << std::endl;
        }
    }
};
