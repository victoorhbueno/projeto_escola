#include <stdio.h>
#include "cadastros.h"

int main() {
    int opcao = 1;

    while(opcao != 0){
        printf("\n===== SISTEMA DE CADASTROS ESCOLARES =====\n");
        printf("1 - Cadastrar aluno\n");
        printf("2 - Listar alunos\n");
        printf("3 - Cadastrar professor\n");
        printf("4 - Listar professores\n");
        printf("5 - Cadastrar turma\n");
        printf("6 - Listar turmas\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                cadastrarAluno();
                break;

            case 2:
                listarAlunos();
                break;

            case 3:
                cadastrarProfessor();
                break;

            case 4:
                listarProfessores();
                break;

            case 5:
                cadastrarTurma();
                break;

            case 6:
                listarTurmas();
                break;

            case 0:
                printf("Sistema encerrado\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }
    }

    return 0;
}