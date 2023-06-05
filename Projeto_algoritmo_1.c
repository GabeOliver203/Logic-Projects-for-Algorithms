/*
DESAFIO: faZer um programa em que se recebe a quantidade de carros em uma operação policial 
- solicitar a velocidade maxima da operação, por exemplo : 150 KM/H
- receber a velocidade em que cada carro estava operando, caso a velociade for abaixo da velocidade maxima:
---> não multar.
- caso seja até 10% a mais que a velocidade maxima, não multar, caso passar:
---> multar em 127 reais
- caso seja maior que 50% da velocidade maxima:
---> multar em 1127 reais

ao final informar a soma de todos os carros multados e o numero de multados.
*/
#include <stdio.h>

int main(){

	///declaração das principais variaveis :	
	int qtd_carros, velocidade_max, num_multados=0, total_multas=0;
	float velocidade_carro, multa_10pcem, multa_50pcem;
	
	///entrada dos primeiros dados :
	printf("insira a quantidade de veiculos nesta operacao ... ");
	scanf("%d", &qtd_carros);
	
	printf("\ninsira a velocidade maxima permitida na operacao em KM/h ... ");
	scanf("%d", &velocidade_max);
	
	///definição de calculos:
	multa_10pcem = velocidade_max * 1.1;
	multa_50pcem = velocidade_max * 1.5;
	
	///processamento dos dados :
	for(int  i = 0 ; i < qtd_carros; i++){
	
		printf("insira a velocidade do carro %d em KM/h... ", i+1);
		scanf("%f", &velocidade_carro);
		
		if( velocidade_carro > multa_10pcem && velocidade_carro < multa_50pcem){
			
			num_multados ++;
			total_multas += 127;
		}
		else if( velocidade_carro > multa_50pcem){
			
			num_multados ++;
			total_multas += 1127;
		}
	}
	
	///saida dos dados processados :
	printf("o numero de carros multados foi %d ja a soma total das multas foi de %d ", num_multados, total_multas);
	
	return 0;
}


