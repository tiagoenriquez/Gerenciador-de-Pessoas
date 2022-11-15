#ifndef PessoaService_H_INCLUDE
#define PessoaService_H_INCLUDE
#include <stdlib.h>
#include <string.h>
#include "../globals/GerPessoas.h"
#include "../structures/Pessoa.h"

void iniciarPessoas() {
    pessoas = (Pessoa *) malloc(maximoPessoas * sizeof(Pessoa));
}

int inserirPessoa(char *nome, int dia, int mes, int ano) {
    int sucesso;
    if (quantidadePessoas < 10) {
        (pessoas + quantidadePessoas)->indice = quantidadePessoas;
        strcat((pessoas + quantidadePessoas)->nome, nome);
        (pessoas + quantidadePessoas)->dia = dia;
        (pessoas + quantidadePessoas)->mes = mes;
        (pessoas + quantidadePessoas)->ano = ano;
        quantidadePessoas++;
        sucesso = 1;
    } else {
        sucesso = 0;
    }
    return sucesso;
}

int procurarPessoa(int indice) {
    for (int i = 0; i < quantidadePessoas; i++) {
        if ((pessoas + i)->indice == indice) {
            return i;
        }
    }
    return -1;
}

int removerPessoa(int indice) {
    int sucesso = 0;
    int pessoaEncontrada = procurarPessoa(indice);
    if (pessoaEncontrada >= 0) {
        for (int i = pessoaEncontrada; i < quantidadePessoas; i++) {
            memcpy((pessoas + i), (pessoas + i + 1), sizeof(Pessoa));
            sucesso = 1;
        }
        quantidadePessoas--;
    }
    return sucesso;
}

#endif