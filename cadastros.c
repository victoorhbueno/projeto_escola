#include <stdio.h>
#include "cadastros.h"

struct Aluno alunos[10];
struct Professor professores[10];
struct Turma turmas[10];

int totalAlunos = 0;
int totalProfessores = 0;
int totalTurmas = 0;

int cadastrarAluno()
{
    if(totalAlunos < 10) {
        printf("Codigo: ");
        scanf("%d", &alunos[totalAlunos].codigo);

        printf("Nome: ");
        scanf(" %[^\n]", alunos[totalAlunos].nome);

        printf("Idade: ");
        scanf("%d", &alunos[totalAlunos].idade);

        printf("Turma: ");
        scanf(" %[^\n]", alunos[totalAlunos].turma);

        totalAlunos++;

        printf("Aluno cadastrado\n");
    }else{
        printf("Limite de alunos atingido!\n");
    }

    return 0;
}

int listarAlunos()
{
    int i;

    if(totalAlunos == 0){
        printf("Nenhum aluno cadastrado\n");
    } else{
        for(i = 0; i < totalAlunos; i++)
        {
            printf("\nCodigo: %d\n", alunos[i].codigo);
            printf("Nome: %s\n", alunos[i].nome);
            printf("Idade: %d\n", alunos[i].idade);
            printf("Turma: %s\n", alunos[i].turma);
        }
    }

    return 0;
}

int cadastrarProfessor()
{
    if(totalProfessores < 10){
        printf("Codigo: ");
        scanf("%d", &professores[totalProfessores].codigo);

        printf("Nome: ");
        scanf(" %[^\n]", professores[totalProfessores].nome);

        printf("Disciplina: ");
        scanf(" %[^\n]", professores[totalProfessores].disciplina);

        printf("Telefone: ");
        scanf(" %[^\n]", professores[totalProfessores].telefone);

        totalProfessores++;

        printf("Professor cadastrado!\n");
    } else {
        printf("Limite de professores atingido!\n");
    }

    return 0;
}

int listarProfessores()
{
    int i;

    if(totalProfessores == 0){
        printf("Nenhum professor cadastrado!\n"); 
    }else{
        for(i = 0; i < totalProfessores; i++)
        {
            printf("\nCodigo: %d\n", professores[i].codigo);
            printf("Nome: %s\n", professores[i].nome);
            printf("Disciplina: %s\n", professores[i].disciplina);
            printf("Telefone: %s\n", professores[i].telefone);
        }
    }

    return 0;
}

int cadastrarTurma()
{
    if(totalTurmas < 10) {
        printf("Codigo: ");
        scanf("%d", &turmas[totalTurmas].codigo);

        printf("Nome da turma: ");
        scanf(" %[^\n]", turmas[totalTurmas].nome);

        printf("Periodo: ");
        scanf(" %[^\n]", turmas[totalTurmas].periodo);

        printf("Sala: ");
        scanf(" %[^\n]", turmas[totalTurmas].sala);

        totalTurmas++;

        printf("Turma cadastrada!\n");
    }else{
        printf("Limite de turmas atingido\n");
    }

    return 0;
}

int listarTurmas()
{
    int i;

    if(totalTurmas == 0){
        printf("Nenhuma turma cadastrada!\n");
    }else{
        for(i = 0; i < totalTurmas; i++)
        {
            printf("\nCodigo: %d\n", turmas[i].codigo);
            printf("Nome: %s\n", turmas[i].nome);
            printf("Periodo: %s\n", turmas[i].periodo);
            printf("Sala: %s\n", turmas[i].sala);
        }
    }

    return 0;
}