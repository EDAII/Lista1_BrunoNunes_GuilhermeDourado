#include <iostream>
#include <mhash.h>
#include "mercado.hpp"

int main(){

	Lista* l;
	int opcao;
	int opcao2;
	int id;

	int produto[30] = {2,6,3,4,8,15,37,43,55,57,69,73,78,89,90,94,97,115,145,189,210,341,343,456,432,563,654};

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

		system("clear");

		if(opcao == 1){
            cout << "**************************************" << endl;
            cout << "      SISTEMA DE MERCADO VIRTUAL     " << endl;
            cout << "**************************************" << endl << endl;
            cout << "1. Busca sequencial" << endl;
            cout << "2. Busca por interpolação" << endl;
            cout << "3. Busca em arvore" << endl;
            cout << "**************************************" << endl;

            cin >> opcao2;

            system("clear");

            if(opcao2 == 1) {

                cout << "Selecione o id do produto: ";
                cin >> id;

                cout << "O produto eh: " << busca_vetor( id , produto) << endl;

                usleep(2000000);

                system("clear");

            }

            if(opcao2 == 2){

                cout << "Selecione o id do produto: ";
                cin >> id;

                cout << "O produto eh: " << arrayBinSearch(produto, id, 30) << endl;

                usleep(2000000);

                system("clear");
            }

		}

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
 *	l = insere(l,11, "Pizza");
 *	l = insere(l,12, "Pão");
 *	l = insere(l,13, "Refrigerante");
 *	l = insere(l,14, "Detergente");
 *	l = insere(l,15, "Shampoo");
 *	l = insere(l,16, "Condicionador");
 *	l = insere(l,17, "Pasta de dente");
 *	l = insere(l,18, "Leite");
 *	l = insere(l,19, "Café");
 *	l = insere(l,20, "Presunto");
 *	l = insere(l,21, "Queijo");
*/
	//imprime(l);						//imprime dados da lista

	//cout << "Escolha a busca" << endl;

	//imprime_busca(busca(l, 4));	//imprime pela busca por sequencia (sem sentinela)

	return 0;
}

