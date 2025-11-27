#include <stdio.h>

#include "../include/entrada.h"
#include "../include/exibicao.h"

int main() {
    int opcao = -1;

    printf("Iniciando o Projeto Integrador...\n");

    while (opcao != 0) {
        opcao = mostrarMenu();

        switch (opcao) {
            case 1: cadastrarAluno(); break;
            case 2: inserirNotas(); break;
            case 3: listarAlunos(); break;
            case 0: printf("Encerrando...\n"); break;
            default: printf("Opcao invalida!\n");
        }
    }

    return 0;
}
