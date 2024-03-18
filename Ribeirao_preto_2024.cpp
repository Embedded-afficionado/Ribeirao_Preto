//Estágio Ribeirão Preto -2024
// João Gabriel Fernandes Gomes

#include<stdio.h>
#include<math.h>
#include<string>

//ìnicio resposta questão 1
int questao_1(){
	int soma = 0, K=0, indice = 0;
	while(indice<13){
		K=K+1; 
		soma = soma + K;
		indice++;
	}
	printf("Questao1:\nO valor da soma eh: %d\n", soma);
	return soma;
}
//Fim resposta questão 1

//Inicio Resposta questão 2
//Fonte para fórmula:https://math.stackexchange.com/questions/9999/checking-if-a-number-is-a-fibonacci-or-
bool quadrado_perfeito(int x) {
    int s = sqrt(x);
    return (s*s == x);
}

void questao_2() {
	
	int num;
	printf("\nDigite o numero teste para verificar se ele pertence ou nao a fibonacci\n");
    scanf("%d", &num);
	int aux_1 = (5 * num * num) + 4;
    int aux_2 = (5 * num * num) - 4;
    if (quadrado_perfeito(aux_1) || quadrado_perfeito(aux_2)) {
        printf("%d Pertence a seq. de fibonacci.\n", num);
    } else {
        printf("%d Nao pertence a seq. de fibonacci.\n", num);
    }
    printf("\n");
}
//Fim resposta questão 2

//Inicio resposta questao_5
void questao_5() {
	char string[1000];
    printf("Digite a string a ser invertida: ");
    scanf("%s", &string);

    int length = strlen(string);
    for (int i = 0; i < length / 2; ++i) {
        char temp = string[i];
        string[i] = string[length - i - 1];
        string[length - i - 1] = temp;
    }

    printf("Saída: %s\n", string);
}

//Fim resposta questao_  5

int main(){
	
	questao_1();
	questao_2();
	questao_5();
}
 