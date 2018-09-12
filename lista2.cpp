#include <bits/stdc++.h>;
using namespace std;

// ~~~ NODE ~~~
struct node {
    string nome;
    int id;
    node *next;

    // CONSTRUTOR DO NODE
    node (string nome, int id){
        nome = nome;
        id = id;
        next = NULL;
    }
};

// ~~~ FILA ~~~
struct fila {
    node *front;
    node *rear;

    // CONSTRUTOR DA FILA
    fila (){
        front = NULL;
        rear = NULL:
    }

    void add (string nome, int id){
        node *aux = new node (nome, id);
        if (this->rear != NULL){
            this->rear->next = aux;
            this->rear = aux;
        }else{
            this->front = aux;
            this->rear = aux;
        }
    }

    node* remove (){
        node *aux = this->front;
        if (this->front != NULL){
            this->front = this->front->next;
        }
        return aux;
    }
};

int dispersao (int chave, int quantGavetas){
    return (chave%quantGavetas);
}

int main (){

    // ~~~ LEITURA DOS ARQUIVOS LA NO INICIO ~~~
    int quantArquivosInicial;
    cin >> quantArquivosInicial;

    string arquivosInicioNome [quantArquivosInicial];
    int arquivosInicioId [quantArquivosInicial];

    for (int i=0; i<quantArquivosInicial; i++){
        string nome;
        int id;
        cin >> nome >> id;
        arquivosInicioNome[i] = nome;
        arquivosInicioId[i] = id;
    }

    int quantGavetas, quantArquivosSeraoTransf;
    cin >> quantGavetas >> quantArquivosSeraoTransf;

    int arquivosSeraoTransf[quantArquivosSeraoTransf];
    for (int i=0; i<quantArquivosSeraoTransf; i++){
        int idAux;
        cin >> idAux;
        arquivosSeraoTransf[i] = idAux;
    }

    // PROCURAR ARQUIVOS QUE SERAO TRANSF. E ARMAZENAR NAS GAVETAS
//    fila gavetas [quantGavetas];
//    for (int i=0; i<quantArquivosSeraoTransf; i++){
//        for (int j=0; j<quantArquivosInicial; j++){
//            if (arquivosSeraoTransf[i] == arquivosInicioId[j]){
//                int chave;
//                for (int c=0; c<arquivosInicioNome[j].length(); c++){
//                    k+=(c*arquivosInicioNome[j][c]);
//                }
//                gaveta = dispersao(chave, quantGavetas);
//                if (gaveta<gavetas.length()){
//                    gavetas[gaveta].add(arquivosInicioNome[j], arquivosInicioId[j]);
//                }else{
//
//                }
//            }
//        }
//    }




    int quantArquivosConsult;
    cin >> quantArquivosConsult;
    // FAZER O FOR DA LEITURA DOS ARQUIVOS CONSULTADOS



    return 0;
}