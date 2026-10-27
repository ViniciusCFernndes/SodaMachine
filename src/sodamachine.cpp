#include <iostream>
#include <string>  

#include "funcoes.h"

using namespace std;

int main(int argc, char *argv[]) {
    SodaMachine sodaMachine = SodaMachine();
    string comando = "";
    cout << "Máquinda desligada. Pressione Q para ligar:" << endl;    
    while (! (sodaMachine.estado == sodaMachine.DESLIGADO && comando == "Q")) {
        cin >> comando;
        // convertendo para uppercase (só o primeiro caractere)
        comando[0] = toupper(comando[0]); 
        if (comando == "Q") sodaMachine.ligarDesligar();
        else if (comando == "A") sodaMachine.venderAgua();
        else if (comando == "R") sodaMachine.venderRefrigerante();
        else if (comando == "I50") sodaMachine.inserir050();
        else if (comando == "I100") sodaMachine.inserir100();
        else if (comando == "D") sodaMachine.devolverSaldo();
        else cout << "Comando inválido." << endl
                  << "Os comandos válidos são: Q, A, R, I50, I100, D" << endl;
    } ;
	return 0;
}
