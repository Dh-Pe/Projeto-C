#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>
using namespace std;

int main() {
  setlocale(LC_ALL, "portuguese");

  cout << "---------- Show Do Milhão ---------\n\n";
  
  string perguntas[12] = {

      "Qual é a capital do Brasil?\nA)Salvador\nB)São Paulo\nC)Brasília\nD)Rio de Janeiro",
      "Cidades idealizadas, projetadas e depois construídas são chamadas de:\nA)Cidades Naturais\nB)Cidades Históricas\nC)Cidades Planejadas\nD)Cidades Fantasmas",
      "Em que hemisfério se encontra a maior arte do Brasil?\nA)Norte\nB)Nordeste\nC)Leste\nD)Sul",
      "Em quantas regiões é dividido o Brasil?\nA)3\nB)5\nC)1\nD)4",
      
      "Qual a raiz quadrada de 625?\nA)10\nB)15\nC)20\nD)25",
      "Quantos lados tem um paralelepípedo?\nA)1\nB)2\nC)3\nD)4\n",
      "Quantos noves tem de 0 a 100?\nA)10\nB)11\nC)12\nD)13\n",
      "Qual é o valor aproximado de Pi?\nA)1,14\nB)2,14\nC)3,14\nD)4,14\n",
      
      "Quem descobriu o Brasil?\nA)Jair Messias Bolsonaro\nB)Luiz Inácio Lula da Silva\nC)Jojo todynho\nD)Pedro Álvares Cabral",
      "Qual foi o primeiro foguete a pousar na lua?\nA)spaceX starship\nB)Ganímedes\nC)Apollo 11\nD)Luna 2\n",
      "Quem foi o idealizador da reforma protestante?\nA)Papa Francisco\nB)Martinho Lutéro\nC)Dom Pedro II\nD)Papa Leão X",
      "Quem foi a primeira pessoa a pousar na lua?\nA)Poze do rodo\nB)Yuri Gagarin\nC)Neil Armstrong\nD)Elon Musk",
      
      };
  string respostas[12] = {
      "C", "C", "D", "B", "D", "D",
      "B", "C", "D", "C", "B", "C"}; // 16 respostas (em maiúsculo)
  string respostasmin[12]{
      "c", "c", "d", "b", "d", "d",
      "b", "c", "d", "c", "b", "c"}; // 16 respostas (em minúsculo)
  int premios[12] = {
      15000,  30000, 60000, 120000, 15000, 30000, 60000,
      120000, 15000, 30000, 60000,  120000}; // 16 premios (somando com o que
                                             // você já tem)

  int contagem = 0, saldo = 0;
  char resposta[20];

  do {
    cout << contagem + 1 << " - " << perguntas[contagem] << "\n\nDigite a resposta: ";
    cin >> resposta;

    if (resposta == respostas[contagem] || resposta == respostasmin[contagem]) {

      saldo = saldo + premios[contagem];
      cout << "\nResposta correta!\n\nSaldo de Dinheiro Ganho: " << saldo
           << "\n\n";
      contagem++;

    } else {

      cout << "\n\nResposta incorreta!\n\nRecorde de Dinheiro Ganho: " << saldo << "\n\n";
      system("color c"); //cor vermelha
      system("pause");
      return 0;
    }
  } while (contagem <= 11);

  cout<<"Você acertou todas as perguntas, parabéns!"<<endl;
  
  system("color a"); //cor verde
  system("pause");
  return 0;
}