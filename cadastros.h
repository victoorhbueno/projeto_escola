struct Aluno {
    int codigo;
    char nome[50];
    int idade;
    char turma[30];
};

struct Professor{
    int codigo;
    char nome[50];
    char disciplina[50];
    char telefone[20];
};

struct Turma {
    int codigo;
    char nome[50];
    char periodo[20];
    char sala[20];
};

int cadastrarAluno();
int listarAlunos();

int cadastrarProfessor();
int listarProfessores();

int cadastrarTurma();
int listarTurmas();