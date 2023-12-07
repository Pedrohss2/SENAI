#include <stdio.h>
#include <stdlib.h>




/*
	Desenvolva em C, uma função que receba 2 números inteiros e retorne a
	multiplicação dos 2.
*/


//Funçaõ que recebe dois inteuiros e retona a multiplicação deles
int multiplicacao(int numeroUm, int numeroDois) {
	return numeroUm * numeroDois;
};

// Funçaõ que converte de Fahrenheit para celcius e vice e versa.
int converter(char tipo, float temperatura) {
	if(tipo == 'C') {
		 int far =  temperatura * 1.8 + 32;
		 return far;
	}
	else if(tipo == 'F') {
		int celcius =  (temperatura-32) / 1.8;
		return celcius;
	}
}

// Verificar se o numero é positivo ou negativo
int positivoOuNegativo(int primeiroNumero) {
	int maiorQueZero = 0;
	int menorQueZero = 0;

	if(primeiroNumero > 0) {
		maiorQueZero = primeiroNumero;
		return maiorQueZero;
	}
	else if (primeiroNumero < 0) {
		menorQueZero = primeiroNumero;
		return menorQueZero;	
	}
}

// Verifica a media de duas notas
int media(int notaUm, int notaDois) {
	int media = (notaUm + notaDois) / 2;
	return media;
}

// Calcula a porcentagem de um funcionario.
void salario(double salarioFuncionario) {
	double base = salarioFuncionario;
	double valorDoAumento;
	double valorAumento;
	
	if(salarioFuncionario <= 900.00) {
		valorDoAumento += salarioFuncionario * 0.20;
		valorAumento = salarioFuncionario + salarioFuncionario  * 0.20;
		printf("O percentual é: 0.20");
	}

	else if(salarioFuncionario >= 900.00 && salarioFuncionario < 1550.00) {
		valorDoAumento += salarioFuncionario * 0.15;
		valorAumento = salarioFuncionario + salarioFuncionario * 0.15;
		printf("O percentual é: 0.15");
	}
	else if(salarioFuncionario > 1550.0 && salarioFuncionario <= 2300.0) {
		valorDoAumento += salarioFuncionario * 0.10;
		valorAumento = salarioFuncionario + salarioFuncionario * 0.10;
		printf("O percentual é: 0,10");
	}
	else {
		valorDoAumento += salarioFuncionario * 0.5;
		valorAumento =salarioFuncionario + salarioFuncionario * 0.5;
		printf("O percentual é:, 0.5");
	}
	
	printf("O valor do aumento eh: %f", valorDoAumento );
	printf("O salario antes do reajuste eh: %f", base);
	printf("O salario depois do reajuste eh: %f", valorAumento);
}


int main() {

	
	return 0;
	
}



