//////////////////////////////////////////////////////////////////////
///         Universidade Federal do Rio Grande do Norte            ///  
///            Centro de Ensino Superior do Seridó                 ///   
///            Bacharelado em Sistema de Informação                ///   
///              Disciplina DCT1106 -- Programação                 ///   
///         Um Sistema de Controle de Fluxo de Veículos            ///   
///      Developed by  @italx_g and @sza_lucas - Jan, 2021         ///   
//////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void menuSobre(void);
int main(void) {
    menuSobre();
    return 0;
}


void menuSobre(void) {
    printf("_____________________________________________________________________________\n");
    printf("|                                 CFSEV                                     |\n");
    printf("|                     Controle do fluxo de veiculos                         |\n");
    printf("|___________________________________________________________________________|\n");
    printf("|                                                                           |\n");
    printf("|     Esse programa ira controlar o fluxo de veiculos para a entrada e      |\n");
    printf("|   saida em estacionamentos, tendo como alvo as instituicoes publicas      |\n");
    printf("|   ou privadas que oferecem estacionamento gratuito.                       |\n");
    printf("|                                                                           |\n");
    printf("|___________________________________________________________________________|\n");
}