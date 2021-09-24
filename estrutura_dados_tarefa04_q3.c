#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int tamArr = 10;

float menorValor(float *arrFloat){
    int j = 0;
    float mV = arrFloat[0]; // Menor valor � o primeiro valor do vetor

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
        printf("Digite o valor para o %d� �ndice do vetor (Obs: use a v�rgula ',' nos n�meros decimais): ", i + 1);
        scanf("%f", &arrFloat[i]);
        i++;
    }

    printf("\nMenor valor do vetor �: %.2f", menorValor(arrFloat));

    free(arrFloat);

    return 0;
}
