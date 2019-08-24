#include <iostream>
#include "mercado.hpp"

int main(){

	Lista* l;

	l = inicializa();		//inicializa a lista
	vazia(l);			//verifica se esta vazia
	l = insere(l,1, "Sabonete");	//insere dados
	l = insere(l,2, "Batata");
	l = insere(l,3, "Feijão");
	l = insere(l,4, "Repolho");
	l = insere(l,5, "Arroz");
	l = insere(l,6, "Maçã");
	l = insere(l,7, "Abacaxi");
	l = insere(l,8, "Vassoura");
	l = insere(l,9, "Frango");
	l = insere(l,10, "Carne");
	imprime(l);			//imprime dados da lista

	cout << "Escolha a busca" << endl; 

	imprime_busca(busca(l, 4));	//imprime pela busca por sequencia (sem sentinela)

	return 0;
}

