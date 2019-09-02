//UNIVERSIDADE DE BRASILIA - FACULDADE DO GAMA

#include <string>
#include <cstring>
#define NOME 30

using namespace std;

int busca_vetor (int id, int *produto, int tamanho);
int buscaBinaria(int *arranjo,int tamanho, int chave);
int buscaInterpolacao( int *produto, int tamanho, int chave);



int busca_vetor (int id, int *produto, int tamanho){

    int i;

    *(produto+(tamanho)) = id;

    for (i = 0; *(produto+i) != id ; i++ );

        if (i < tamanho-1) {

            cout << "Se passaram " << i << " lacos" << endl << "A posicao é ";
            return i;
        }
        else return (-1);



}

int buscaBinaria(int *arranjo,int tamanho, int chave) {
    // Na busca binária, espera-se que o vetor esteja ordenado
    int interacao = 1;
    int i = 0;
    int f = tamanho -1;
    int meio;
    while (i<=f) {
        interacao++;
        meio = (i+f)/2;
        if (arranjo[meio]==chave){
            cout << "Se passaram " << interacao << " lacos" << endl << "A posicao é ";
            return meio;}
        else {
            if (chave>arranjo[meio])
                i=meio+1;
            else
                f=meio-1;
        }
    }
    return -1;
}

int buscaInterpolacao( int *produto, int tamanho, int chave){

    int interacao = 1;
    int i = 0;
    int f = tamanho -1;
    int meio;
    float resultado;
    while (i<=f) {
        interacao++;

        resultado = ((chave*1.0 - produto[i])/(produto[f] - produto[i]));

        resultado = (resultado * (f -  i))  + i;
        meio = resultado;
        if (produto[meio]==chave){
            cout << "Se passaram " << interacao << " lacos" << endl << "A posicao é ";
            return meio;}
        else {
            if (chave>produto[meio])
                i=meio+1;
            else
                f=meio-1;
        }
    }
    return -1;

}
