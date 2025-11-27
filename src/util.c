#include "../include/dados.h"
#include "../include/util.h"

int buscarAlunoPorMatricula(int matricula) {
    for (int i = 0; i < quantidade_alunos; i++) {
        if (alunos[i].matricula == matricula) {
            return i;
        }
    }
    return -1;
}
