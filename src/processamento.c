#include <string.h>
#include "../include/dados.h"
#include "../include/processamento.h"

float calcularMedia(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3.0f;
}

void verificarSituacao(int index) {
    if (alunos[index].media >= 6.0) {
        strcpy(alunos[index].situacao, "Aprovado");
    } else {
        strcpy(alunos[index].situacao, "Reprovado");
    }
}
