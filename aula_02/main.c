#include <stdio.h>

int main(){

    // CHAR - String || Para printar a string é só utilizar o %s
    char nome[7] = "Alvaro";

    // INT - Inteiro
    int idade = 5;

    //FLOAT
    float pizza = 5.85;

    printf("Meu nome e %s\n e minha idade e %d\n", nome, idade);
    printf("Eu comi %% %f de pizza\n", pizza);

    // meuNomeEduardo <- camelCase
    // MinhaIdadeDois <- PascalCase
    // meu_nome_dois <- snake_case
    // meu-nome-dois <- kebab-case

    /////////////////////////////////////////////////

    float a = 8.6;
    float b = 6.3;

    float resultado = a / b;

    printf("%f %% %f = %f", a, b, resultado);


    return(0);
}