#include <stdio.h>
#include <stdio.h>
/*Codifique uma função que receba a média final de um aluno passado por parâmetro e retorne o
seu conceito (através de uma variável char), conforme a Tabela 1:
Nota Conceito
De 0 a 49 D
De 50 a 69 C
De 70 a 89 B
De 90 a 100 A*/
char conceito(int media){
	char con;
		if(media>=0&&media<=49){
			con='D';
		}
			else if(media>=50&&media<=69){
				con='C';
			}
				else if(media>=70&&media<=89){
					con='B';
				}
					else if(media>=90&&media<=100){
						con='A';
					}
	return con;
}
int main(int argc, char const *argv[])
{
	int media;
		printf("\n Digite a media final do aluno: ");
			scanf("%d",&media);
		printf("\n Seu conceito %c \n",conceito(media));

	return 0;
}