#include <stdio.h>

int main() {
    char name[50];
    char gender;
    char cs[20];
    int cstime;

    printf("Digite o seu nome: ");
    scanf("%49s", name); 

    printf("Digite o seu sexo (F ou M): ");
    scanf(" %c", &gender); 

    if (gender != 'F' && gender != 'M' && gender != 'f' && gender != 'm') {
        printf("Entrada inválida. Por favor, digite apenas 'F' ou 'M'.\n");
        return 1;
    }

    if (gender == 'f') gender = 'F';

    printf("Digite o seu estado civil (exemplo: Casada): ");
    scanf(" %19[^\n]", cs); 

    for (int i = 0; cs[i]; i++) {
        if (cs[i] >= 'a' && cs[i] <= 'z') {
            cs[i] -= 'a' - 'A';
        }
    }

    if (gender == 'F' && (cs[0] == 'C' && cs[1] == 'A' && cs[2] == 'S' && cs[3] == 'A' && cs[4] == 'D' && cs[5] == 'A')) {
        printf("Digite o tempo de casada (Anos): ");
        if (scanf("%d", &cstime) != 1) {
            printf("Entrada inválida para o tempo de casada.\n");
            return 1;
        }

        printf("Aqui estão todas as suas informações:\nNome: %s\nSexo: %c\nEstado Civil: %s\nTempo de casada (anos): %d.\n", name, gender, cs, cstime);
    } else {
        printf("Você não atende aos critérios para a exibição das informações.\n");
    }

    return 0;
}
