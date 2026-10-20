# SodaMachine
Implementação de um programa em C++ que sirva para controlar uma maquina simplificada de vender bebidas.

# Licença de uso
Este projeto é licenciado sob a GNU General Public License (GPL), que permite executar, estudar, modificar e redistribuir o software para qualquer finalidade. Ao redistribuir o programa ou versões modificadas, você deve manter os avisos de copyright e de licença, disponibilizar o código-fonte correspondente e licenciar as obras derivadas sob a mesma GPL, impedindo que se tornem proprietárias. Consulte o arquivo LICENSE para o texto completo da licença.

# Funcionamento 
As máquinas recebem moedas de 両0,50 e 両1,00, até o limite de 両2,50. Toda moeda inserida na máquina tal que o montante ultrapasse o valor de 両2,50 é devolvida automaticamente.
Cada máquina possui quatro botões, um pequeno display, a ranhura para inserir moedas e a gaveta onde cai a bebida que foi comprada pelo usuário.
Os botões da máquina são:
* A: Selecionar uma garrafa de água, ao preço de 両1,50.
* R: Selecionar uma garrafa de refrigerante, ao preço de 両2,00.
* D: Devolver o valor inserido pelo usuário ou o troco, caso ele já tenha recebido uma bebida de valor menor ao montante inserido na máquina. Considere que a máquina sempre tem troco.
* Q: Este botão fica escondido e será acionado pelo responsável pela máquina na hora de ligá-la ou desligá-la. O botão somente pode ser acionado quando o saldo a ser devolvido for 両0,00.

# Definição da quintupla da máquina:
## M(A, Q, S, q0, F);
### A: Ações
* **A**: Selecionar uma garrafa de água, ao preço de 両1,50.
* **R**: Selecionar uma garrafa de refrigerante, ao preço de 両2,00.
* **D**: Devolver o valor que está atualmente na máquina.
* **Q**: Liga e desliga a máquina. 
* **I50**: insere moeda de 0,50 na máquina. 
* **I100**: insere moeda de 1,00 na máquina. 

### Q: Estados
* **Máquina desligada**
* **Máquina ligada com saldo 0**
* **Máquina ligada com saldo 0,50**
* **Máquina ligada com saldo 1,00**
* **Máquina ligada com saldo 1,50**
* **Máquina ligada com saldo 2,00**
* **Máquina ligada com saldo 2,50**

### S: (q0, Ação) -> (q1) // completar aqui 
* 
* 

### q0: Estado inicial
* **Máquina desligada**

### F: Estado Final
* **Máquina desligada**

# Diagrama

# Implementação

# Autores

| Nome                | Participação (de 0 a 10) |
|---------------------|--------------------------|
| Édipo Melo          |                       10 | 
| Vinicius Cavalcanti |                       10 | 
