#include <iostream>
#include "mercado.hpp"

int main(){

	Lista* l;
	int opcao;

	do{
		cout << "**************************************" << endl;
		cout << "      SISTEMA DE MERCADO VIRTUAL     " << endl;
		cout << "**************************************" << endl << endl;
		cout << "1. Buscar produto" << endl;
		cout << "2. Registrar produto" << endl;
		cout << "0. Sair" << endl << endl;
		cout << "**************************************" << endl;

		cin >> opcao;

		// TODO: Inserir opções de busca e registrar produtos no laço.

	}
	while ( opcao != 0);


	l = inicializa();				//inicializa a lista
	vazia(l);						//verifica se esta vazia
/*
 * TODO: Criar metodos para registrar produtos.
 *
 * 	l = insere(l,1, "Sabonete");	//insere dados
 *	l = insere(l,2, "Batata");
 *	l = insere(l,3, "Feijão");
 *	l = insere(l,4, "Repolho");
 *	l = insere(l,5, "Arroz");
 *	l = insere(l,6, "Maçã");
 *	l = insere(l,7, "Abacaxi");
 *	l = insere(l,8, "Vassoura");
 *	l = insere(l,9, "Frango");
 *	l = insere(l,10, "Carne");
*/
	//imprime(l);						//imprime dados da lista

	//cout << "Escolha a busca" << endl;

	//imprime_busca(busca(l, 4));	//imprime pela busca por sequencia (sem sentinela)

	return 0;
}

