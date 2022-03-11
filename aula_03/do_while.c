#include <stdio.h>

int main(){
    float nota_1 = 0;
    float nota_2 = 0;
    float media  = 0;

    int final;

    do{
        printf("Digite a primeira nota: ");
        scanf("%f", &nota_1);

        printf("Digite a segunda nota: ");
        scanf("%f", &nota_2);

        media = (nota_1 + nota_2)/2;

        printf("A media do aluno e: %f\n", media);

        printf("Digite 1 para continuar ou digite 2 para sair.");
        scanf("%d", &final);

    } while(final == 1);

    return(0);
}