typedef struct {
    int matricula;
    char nome[50];
Aluno;
}
int main() {
    int n, i;
    Aluno *turma;

    printf("Quantos alunos para cadastro: ");
    scanf("%d", &n);

    turma = (Aluno *) malloc(n * sizeof(Aluno));
    if (turma == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("\nAluno %d:\n", i + 1);
        printf("Matricula: ");
        scanf("%d", &turma[i].matricula);
        getchar();
        printf("Nome: ");
        fgets(turma[i].nome, sizeof(turma[i].nome), stdin);
    }


    printf("\nLista de Alunos\n");
    for (i = 0; i < n; i++) {
        printf("Matricula: %d | Nome: %s", turma[i].matricula, turma[i].nome);
    }

    free(turma);

    return 0;
}
