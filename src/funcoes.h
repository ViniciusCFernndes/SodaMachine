#include <iostream>
#include <string>

using namespace std;

class SodaMachine {
    private:
        int total_agua;
        int total_refigerante;
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

        SodaMachine() {
            total_agua = 0;
            total_refigerante = 0;
            estado = DESLIGADO;
        };

        void venderAgua() {
            // implementar
        }

        void venderRefrigerante() {
            // implementar
        }
        
        void inserir050(){
            // implementar
        }

        void inserir100(){
            // implementar
        }
        
        void devolverSaldo() {
            switch (estado) {
                case SALDO_ZERO: cout << "Não há crédito." << std::endl; break;
                case SALDO_050: cout << "Devolvido: $0.50" << std::endl; break;
                case SALDO_100: cout << "Devolvido: $1.00" << std::endl; break;
                case SALDO_150: cout << "Devolvido: $1.50" << std::endl; break;
                case SALDO_200: cout << "Devolvido: $2.00" << std::endl; break;
                case SALDO_250: cout << "Devolvido: $2.50" << std::endl; break;
            }
            cout << "Saldo: $ 0.00" << std::endl;
            estado = SALDO_ZERO;
        }
        
        void ligarDesligar() {
            if (estado == DESLIGADO) {
                estado = SALDO_ZERO;
                cout << "Máquina funcionando." << std::endl;
            } else if (estado != DESLIGADO && estado != SALDO_ZERO) {
                cout << "Não é possível desligar a máquina com saldo." << std::endl;
            } else if (estado == SALDO_ZERO) {
                estado = DESLIGADO;
                cout << "Saldo das vendas: " 
                     << total_agua << " água(s) / " 
                     << total_refigerante << " refrigerante(s)." 
                     << std::endl;
                cout << "Máquina desligada." << std::endl;
            }
        }
    };
