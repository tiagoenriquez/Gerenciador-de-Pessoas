#ifndef RemoverPessoaView_H_INCLUDE
#define RemoverPessoaView_H_INCLUDE
#include <stdio.h>
#include <stdlib.h>
#include "VoltarView.h"
#include "../services/PessoaService.h"

void removerPessoaView() {
    int indicePessoaRemovida;
    system("clear");
    printf("Remocao de pessoa:\n\n");
    printf("Indice da pessoa a ser removida: ");
    scanf("%d", &indicePessoaRemovida);
    int sucesso = removerPessoa(indicePessoaRemovida);
    if (sucesso) {
        printf("Pessoa removida com sucesso!\n\n");
    } else {
        printf("Pessoa nao encontrada.\n\n");
    }
    voltarView();
}

#endif