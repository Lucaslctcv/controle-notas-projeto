#ifndef TIPOS_H
#define TIPOS_H

#define MAX_ALUNOS 50
#define MAX_NOME 50

// Representa todas as informações de um aluno
typedef struct {
    char nome[MAX_NOME];
    int matricula;
    float nota1;
    float nota2;
    float nota3;
    float media;
    char situacao[20];
} Aluno;

#endif
