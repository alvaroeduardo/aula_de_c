#include <stdio.h>

int main(){
    // if = se;

    int valor_1 = 10;

    if(valor_1 == 10){
        printf("Ola meu nome e Alvaro \n");
    };

    /////////////////////////////////////////

    int valor_2 = 7;

    if(valor_2 == 5){
        printf("e igual a cinco\n");
    } else {
        printf("nao e igual a cinco \n");
    }

    //////////////////////////////////////////

    int numero;

    int repete;

    printf("Digite um numero de 1 a 7 para o dia da semana: ");
    scanf("%d", &numero);

    do{
        switch(numero){
            case 1:
                printf("Domingo\n");
                break;
            
            case 2:
                printf("Segunda\n");
                break;

            case 3:
                printf("Terca\n");
                break;
            
            case 4:
                printf("Quarta\n");
                break;

            case 5:
                printf("Quinta\n");
                break;
            
            case 6:
                printf("Sexta\n");
                break;
            
            case 7:
                printf("Sabado\n");
                break;

            default:
                printf("Sao somente 7 dias da semana\n");
        }

        printf("Repetir? ");
        scanf("%d", repete);
    } while(repete == 1);

    ///////////////////////////////////////////

    int contador = 1;
    int posicao;
    int Antes = 1;

    posicao = ((Antes == 5) ? contador+1 : contador-1);

    printf("%d", posicao);

    return (0);
}