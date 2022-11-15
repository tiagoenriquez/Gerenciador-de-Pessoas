#ifndef VoltarView_H_INCLUDE
#define VoltarView_H_INCLUDE
#include <stdio.h>
#include <stdlib.h>
#include "MenuView.h"

void voltarView() {
    char voltar;
    printf("Digite qualquer tecla para voltar ao menu principal: ");
    scanf("%s", &voltar);
    system("clear");
    menuView();
}

#endif