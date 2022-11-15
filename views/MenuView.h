#ifndef MenuView_H_INCLUDE
#define MenuView_H_INCLUDE
#include <stdio.h>
#include "InserirPessoaView.h"
#include "ListarPessoasView.h"
#include "RemoverPessoaView.h"

void menuView() {
    int opcao;
    printf("Menu:\n\n");
    printf("Digite:\n1 - para inserir pessoa\n2 - para listar pessoas\n3 - para remover uma pessoa\nOutro numero - para sair do programa\n\n");
    scanf("%d", &opcao);
    switch (opcao) {
        case 1:
            inserirPessoaView();
            break;
        case 2:
            listarPessoasView();
            break;
        case 3:
            removerPessoaView();
            break;
        default:
            printf("Obrigado por confiar na gente! Ate a proxima.\n\n");
    }
}

#endif