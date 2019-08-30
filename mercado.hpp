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
        Lista* p;
                for(p=l;p != nullptr; p = p->prox){
                cout << "info = " << p->chave << endl;
		cout << p->nome << endl<<endl;

		}	
}
