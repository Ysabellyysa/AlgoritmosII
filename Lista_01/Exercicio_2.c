char palavra1[20], palavra2[20], palavra3[20];

scanf("%s", palavra1);
scanf("%s", palavra2);
scanf("%s", palavra3);

int p1 = identificar(palavra1);
int p2 = identificar(palavra2);
int p3 = identificar(palavra3);

switch (p1) {
    case 1: // vertebrado
switch (p2) {
    case 3: // ave
switch (p3) {
    case 7: printf("aguia\n"); break;
    case 8: printf("pomba\n"); break;
            }
                break;
    case 4: // mamifero
switch (p3) {
    case 8: printf("homem\n"); break;
    case 9: printf("vaca\n"); break;
            }
                break;
            }
                break;
    case 2: // invertebrado
switch (p2) {
    case 5: // inseto
switch (p3) {
    case 10: printf("pulga\n"); break;
    case 9: printf("lagarta\n"); break;
            }
                break;
    case 6: // anelideo
switch (p3) {
    case 10: printf("sanguessuga\n"); break;
    case 8: printf("minhoca\n"); break;
            }
                break;
            }
               break;
            }
