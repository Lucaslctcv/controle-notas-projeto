#include <stdio.h>
#include "../include/dados.h"
#include "../include/exibicao.h"

// Função vinda da sua parceira (adaptada)
void exibirAluno(Aluno a) {
    printf("Matricula: %d\n", a.matricula);
    printf("Nome: %s\n", a.nome);
    printf("Notas: %.2f, %.2f, %.2f\n",
        a.nota1, a.nota2, a.nota3
    );
    printf("Media: %.2f\n", a.media);
    printf("Situacao: %s\n\n", a.situacao);
}

int mostrarMenu() {
    int opcao;

    printf("\n===== MENU PRINCIPAL =====\n");
    printf("1 - Cadastrar aluno\n");
    printf("2 - Inserir notas\n");
    printf("3 - Listar alunos cadastrados\n");
    printf("0 - Sair\n");
    printf("Escolha uma opcao: ");

    if (scanf("%d", &opcao) != 1) {
        printf("Entrada invalida!\n");
        while (getchar() != '\n');
        return -1;
    }

    return opcao;
}

void listarAlunos() {
    if (quantidade_alunos == 0) {
        printf("Nenhum aluno cadastrado!\n");
        return;
    }

    printf("\n===== LISTA DE ALUNOS =====\n");

    for (int i = 0; i < quantidade_alunos; i++) {
        exibirAluno(alunos[i]);
    }
}
