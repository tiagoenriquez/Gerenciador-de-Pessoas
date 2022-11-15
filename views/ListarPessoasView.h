#ifndef ListarPessoasView_H_INCLUDE
#define ListarPessoasView_H_INCLUDE
#include <stdio.h>
#include <stdlib.h>
#include "VoltarView.h"
#include "../globals/GerPessoas.h"

void listarPessoasView() {
    system("clear");
    printf("Lista de pessoas:\n\n");
    for (int i = 0; i < quantidadePessoas; i++) {
        printf("Indice %d\nNome: %s\nNascimento - Dia: %d, Mes: %d, Ano: %d\n\n",
            (pessoas + i)->indice,
            (pessoas + i)->nome,
            (pessoas + i)->dia,
            (pessoas + i)->mes,
            (pessoas + i)->ano
        );
    }
    voltarView();
}

#endif