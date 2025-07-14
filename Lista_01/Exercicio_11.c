int main(){
char usuário[100];

scanf("%s", &usuario);

int tamanho = strlen(usuario);
for(int i = tamanho - 1;i>=0;i--){
    printf("%c", usuario[i]);
