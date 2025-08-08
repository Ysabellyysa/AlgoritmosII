
typedef struct {
    int codigo;
    char nome[51];
    int quantidade;
    float preco;
} produto;

int main() {
    int N;

    printf("Quantos produtos para cadastro: ");
    scanf("%d", &N);

    produto *produtos = (produto *) malloc(N * sizeof(produto));
    if (produtos == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    for (int i = 0; i < N; i++) {
        printf("\nProduto %d\n", i + 1);
        printf("Codigo: ");
        scanf("%d", &produtos[i].codigo);
        printf("Nome: ");
        while ((getchar()) != '\n');
        fgets(produtos[i].nome, 51, stdin);
        produtos[i].nome[strcspn(produtos[i].nome, "\n")] = '\0';

        printf("Quantidade disponivel: ");
        scanf("%d", &produtos[i].quantidade);

        printf("Preco de venda: ");
        scanf("%f", &produtos[i].preco);
    }

    int maior = 0;
    for (int i = 1; i < N; i++) {
        if (produtos[i].preco > produtos[maior].preco) {
            maior = i;
        }
    }

    int validade = 0;
    for (int i = 1; i < N; i++) {
        if (produtos[i].quantidade > produtos[validade].quantidade) {
            validade = i;
        }
    }

    printf("\nProduto com maior preco de venda:\n");
    printf("Codigo: %d\n", produtos[maior].codigo);
    printf("Nome: %s\n", produtos[maior].nome);
    printf("Quantidade: %d\n", produtos[maior].quantidade);
    printf("Preco: %.2f\n", produtos[maior].preco);

    printf("\nProduto com maior quantidade disponivel:\n");
    printf("Codigo: %d\n", produtos[validade].codigo);
    printf("Nome: %s\n", produtos[validade].nome);
    printf("Quantidade: %d\n", produtos[validade].quantidade);
    printf("Preco: %.2f\n", produtos[validade].preco);

    free(produtos);
    return 0;
}
