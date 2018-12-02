#include <stdio.h>
#include <stdlib.h>


void vetor(char* string, int* posicoes, int* numDeLetras, char letra) {

    for(int i = 0; i < 100; i++)
	 {
        if(string[i] == letra) {
            posicoes[*numDeLetras] = i;
            (*numDeLetras)++;
        }

        if(string[i] == '\n') {
            break;
        }
    }
}

int main() {

	int i,int vetor[];
    char frase[100], letra;
    int posicoes[100], ;

    printf("Digite uma frase: ");
    for(int i = 0; i < 100; i++) {
        scanf("%c", &frase[i]);

        if(frase[i] == '\n') {
            break;
        }
    }

    printf("Digite uma letra: ");
    scanf("%c", &letra);

    vetor(frase, posicoes, &qnt, letra);


    printf("Posicao de cada letra na frase: ");
    for(int i = 0 ; i < qnt; i++) {
        printf("%d ", posicoes[i]);
    }
    printf("\n");
}
