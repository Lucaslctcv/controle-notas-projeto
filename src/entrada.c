#include <stdio.h>
#include <string.h>

#include "../include/dados.h"
#include "../include/entrada.h"
#include "../include/processamento.h"
#include "../include/util.h"

void cadastrarAluno() {
    if (quantidade_alunos >= MAX_ALUNOS) {
        printf("Limite maximo de alunos atingido!\n");
        return;
    }

    printf("\n--- Cadastro de Aluno ---\n");

    printf("Nome do aluno: ");
    while (getchar() != '\n'); 
    fgets(alunos[quantidade_alunos].nome, MAX_NOME, stdin);

    alunos[quantidade_alunos].nome[strcspn(alunos[quantidade_alunos].nome, "\n")] = 0;

    printf("Matricula: ");
    scanf("%d", &alunos[quantidade_alunos].matricula);

    alunos[quantidade_alunos].nota1 = 0;
    alunos[quantidade_alunos].nota2 = 0;
    alunos[quantidade_alunos].nota3 = 0;
    alunos[quantidade_alunos].media = 0;
    strcpy(alunos[quantidade_alunos].situacao, "Sem notas");

    quantidade_alunos++;

    printf("Aluno cadastrado com sucesso!\n");
}

void inserirNotas() {
    if (quantidade_alunos == 0) {
        printf("Nenhum aluno cadastrado!\n");
        return;
    }

    int matricula;
    printf("\n--- Inserir Notas ---\n");
    printf("Digite a matricula do aluno: ");
    scanf("%d", &matricula);

    int index = buscarAlunoPorMatricula(matricula);
    if (index == -1) {
        printf("Aluno nao encontrado!\n");
        return;
    }

    printf("Nota 1: ");
    scanf("%f", &alunos[index].nota1);

    printf("Nota 2: ");
    scanf("%f", &alunos[index].nota2);

    printf("Nota 3: ");
    scanf("%f", &alunos[index].nota3);

    alunos[index].media = calcularMedia(
        alunos[index].nota1,
        alunos[index].nota2,
        alunos[index].nota3
    );

    verificarSituacao(index);

    printf("Notas inseridas com sucesso!\n");
}
