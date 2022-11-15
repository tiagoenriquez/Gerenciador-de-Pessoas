#ifndef InserirPessoaView_H_INCLUDE
#define InserirPessoaView_H_INCLUDE
#include <stdio.h>
#include <stdlib.h>
#include "VoltarView.h"
#include "../services/PessoaService.h"

void inserirPessoaView() {
    char nome[64];
    int dia, mes, ano;
    system("clear");
    printf("Insercao de Pessoa:\n\n");
    printf("Nome: ");
    scanf("%s", nome);
    printf("Data de nascimento:\n");
    printf("Dia: ");
    scanf("%d", &dia);
    printf("Mes: ");
    scanf("%d", &mes);
    printf("Ano: ");
    scanf("%d", &ano);
    int sucesso = inserirPessoa(nome, dia, mes, ano);
    if (sucesso) {
        printf("Pessoa inserida com sucesso!\n\n");
    } else {
        printf("Quantidade maxima atingida.\n\n");
    }
    voltarView();
}

#endif