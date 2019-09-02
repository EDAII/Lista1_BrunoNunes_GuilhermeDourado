#include <iostream>
#include <mhash.h>
#include "busca.hpp"

int main(){

	int opcao;
	int id;

	int produto[NOME] = {2,3,4,6,8,15,37,43,55,57,69,73,78,89,90,94,97,115,145,189,210,341,343,456,432,563,654,789,812};
    int outro[NOME] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};


    cout << "Antes de ultilizar o programa, leia o README." << endl;


    system("clear");

	do{
        cout << "**************************************" << endl;
        cout << "           ANALISE DE BUSCAS          " << endl;
        cout << "**************************************" << endl;
        cout << "1. Busca sequencial (EMBARALHADO)" << endl;
        cout << "2. Busca sequencial (UNIFORME)" << endl;
        cout << "3. Busca binaria (EMBARALHADO)" << endl;
        cout << "4. Busca binaria (UNIFORME)" << endl;
        cout << "5. Busca por interpolacao" << endl;
        cout << "0. Sair" << endl;
        cout << "**************************************" << endl;

		cin >> opcao;

		system("clear");

            if(opcao == 1) {

            cout << "Selecione um elemento do vetor: ";
            cin >> id;

            cout << busca_vetor( id , produto, NOME) << endl;

            usleep(5000000);

            system("clear");

        }



            if(opcao == 2) {

                cout << "Selecione um elemento do vetor: ";
                cin >> id;

                cout << busca_vetor( id , outro, NOME) << endl;

                usleep(5000000);

                system("clear");

            }

            if(opcao == 3){

                cout << "Selecione um elemento do vetor: ";
                cin >> id;

                cout << buscaBinaria(produto, NOME , id) << endl;

                usleep(5000000);

                system("clear");
            }

            if(opcao == 4){

            cout << "Selecione um elemento do vetor: ";
            cin >> id;

            cout << buscaBinaria(outro, NOME , id) << endl;

            usleep(5000000);

            system("clear");
        }

            if(opcao == 5){

                cout << "Selecione um elemento do vetor: ";
                cin >> id;

                cout << buscaInterpolacao(outro, NOME, id) << endl;

                usleep(5000000);

                system("clear");

            }


		}
	while (opcao != 0);

	return 0;
}

