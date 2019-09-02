#include <string>
#include <cstring>
#define NOME 30

using namespace std;

struct lista{
	int chave;
	char nome[NOME];
	struct lista* prox;
};

typedef struct lista Lista;

Lista* inicializa();
Lista* insere (Lista* l, int chave);
void imprime (Lista* l);
int vazia (Lista* l);
void libera(Lista *l);
Lista* busca (Lista* l, int chave);
int contador(Lista* l);
Lista* imprime_busca (Lista* l);
int busca_vetor (int id, int *produto);
int arrayBinSearch(int *arr, int searchValue, int size);

// FIXME: Melhorar implementação de busca com a do guilherme.
Lista* imprime_busca (Lista* l){

	Lista* p = l;
        cout << "info = " << p->chave << endl;
	cout << p->nome << endl<<endl;
		
}

int contador(Lista* l){
	Lista* p;
	int i = 0;
	for(p=l;p!=nullptr; p=p->prox)
		i = i+1;
}

Lista* busca (Lista* l, int chave){
	Lista* p;
	for (p=l; p!=nullptr; p=p->prox)
		if(p->chave == chave)
			return p;
	return nullptr;
}

void libera(Lista *l){
	Lista* p = l;
	while (p != nullptr){
		Lista* t = p->prox;
		free(p);
		p = t;
	}
}

int vazia (Lista* l){
	return (l == nullptr);
}

Lista* inicializa (){
        return nullptr;
}

Lista* insere (Lista* l, int chave, char nome[NOME]){
        Lista* novo = (Lista*) malloc(sizeof(Lista));
	novo->chave = chave;
	strcpy(novo->nome , nome);
        novo->prox = l;
        return novo;
}
void imprime (Lista* l){
        Lista * p;
                for(p=l;p != nullptr; p = p->prox){
                cout << "info = " << p->chave << endl;
		cout << p->nome << endl<<endl;

		}	
}

int busca_vetor (int id, int *produto){

    int i;

    *(produto+30) = id;

    for (i = 0; *(produto+i) != id ; i++ );

        if (i < 22) {

            cout << "Se passaram " << i << " interações" << endl;
            return i;
        }
        else return (-1);



}

int arrayBinSearch(int *arr, int searchValue, int size){

    int i = 0;
    int j = 0;

    if(arr[size/2] == searchValue){
        return size/2;
    } else if(arr[size/2] < searchValue){
        for(i = size/2; searchValue == arr[i]; i--);
        return i;
    } else {
        for(int j = size/2; searchValue == arr[i]; j++);
        return j;
    }
}