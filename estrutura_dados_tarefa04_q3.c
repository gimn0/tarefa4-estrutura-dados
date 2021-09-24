#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int tamArr = 10;

float menorValor(float *arrFloat){
    int j = 0;
    float mV = arrFloat[0]; // Menor valor é o primeiro valor do vetor

    for(j = 0; j < tamArr; j++){
        if(arrFloat[j] < mV)
            mV = arrFloat[j];
    }

    return mV; // Retorna o menor valor
}

int main(){

    setlocale(LC_ALL, "");

    float *arrFloat = (float *) malloc(tamArr * sizeof(float));
    int i = 0;

    while(i < tamArr){
        printf("Digite o valor para o %dº índice do vetor (Obs: use a vírgula ',' nos números decimais): ", i + 1);
        scanf("%f", &arrFloat[i]);
        i++;
    }

    printf("\nMenor valor do vetor é: %.2f", menorValor(arrFloat));

    free(arrFloat);

    return 0;
}
