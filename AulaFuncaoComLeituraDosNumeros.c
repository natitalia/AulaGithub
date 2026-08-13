#include<stdio.h>
#include<conio.h>

void main() //Função do Programa Principal
{
	printf("Resultado da soma: %d", soma()); //Estou exibindo o retorno da função soma,
}											 //que me retornou um número inteiro

int soma() //Função que soma 2 números
{
	int num1, num2, resultado;
	
	printf("Informe o primeiro numero: ");
	scanf("%d", &num1);
	
	printf("Informe o segundo numero: ");
	scanf("%d", &num2);
	
	resultado = num1 + num2;
	
	return resultado; //Estou retornando a variável resultado, que é um número inteiro
}

//Função e Variável são coisas diferentes
//Uma Variável guarda dados na memória, como: num1 = 10, num2 = 5
//Uma Função executa uma ação ou instrução, como a soma: num1 + num2
