//
// Created by pierr on 29/09/2019.
//

#ifndef LISTAESTATICA_LISTASEQUENCIAL_H
#define LISTAESTATICA_LISTASEQUENCIAL_H
#define MAX 100
struct  aluno{
    int matricula;
    char nome[30];
    float n1, n2, n3;
};
typedef struct lista Lista;
Lista *cria_lista();
void libera_lista(Lista *li);
int tamanho_lista(Lista *li);
int lista_cheia(Lista *li);
int insere_lista_final(Lista *li, struct aluno a1);
int insere_lista_inicio(Lista *li, struct aluno al);
int insere_lista_ordenada(Lista *li, struct aluno al);
int remove_lista_final(Lista *l1);
int remove_lista_inicio(Lista *l1);
int remove_lista(Lista *l1, int mat);
int consulta_lista_pos(Lista* li, int pos, struct aluno *al);
int consulta_lista_mat(Lista *li, int mat, struct aluno *al);
#endif //LISTAESTATICA_LISTASEQUENCIAL_H
