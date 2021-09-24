#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct{
    char modelo[15],
         cor[10];
    int ano;
}Carro;

void leituraCarro(Carro *vetorCarros, int qntdCarros){
    int i;

    for(i = 0; i < qntdCarros; i++){
        printf("\n----------------------------------\n");
        printf("Digite o modelo do %dº carro:\n", i + 1);
        setbuf(stdin, NULL);
        fgets(vetorCarros[i].modelo, 15, stdin);
        printf("Digite a cor do %dº carro:\n", i + 1);
        setbuf(stdin, NULL);
        fgets(vetorCarros[i].cor, 10, stdin);
        printf("Digite o ano do %dº carro:\n", i + 1);
        scanf("%d", &vetorCarros[i].ano);
    }
}

void imprimeCarro(Carro *vetorCarros, int qntdCarros){

    int i;

    printf("\n----------------------------------\n");
    for(i = 0; i < qntdCarros; i++){
        printf("\nO modelo do %dº carro: %s", i + 1, vetorCarros[i].modelo);
        printf("A cor do %dº carro: %s", i + 1, vetorCarros[i].cor);
        printf("O ano do %dº carro: %d\n", i + 1, vetorCarros[i].ano);
    }
}

int main()
{
    setlocale(LC_ALL, "");

    int qntdCarros;

    do{
        printf("Digite a quantidade de carros: ");
        scanf("%d", &qntdCarros);

        if(qntdCarros < 1)
            printf("Digite uma quantidade válida: >1 (Um).\n");
    }while(qntdCarros < 1);

    Carro *vetorCarros = (Carro *) malloc(qntdCarros * sizeof(Carro));

    leituraCarro(vetorCarros, qntdCarros);
    imprimeCarro(vetorCarros, qntdCarros);

    free(vetorCarros);

    return 0;
}
