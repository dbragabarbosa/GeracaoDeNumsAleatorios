#include <stdio.h>
#include <stdlib.h>

//FUNCAO PARA GERAR UM ALEATORIO ENTRE 0 E n-1
int random (int n)
{
	return rand()%n;
}

//FUNCAO PARA GERAR ALEATORIOS ENTRE MIN E MAX (INCLUSIVE)
int randInt (int min, int max)    //min=5, max=10
{
	return min + random(max - min + 1);
}

//FUNCAO PARA GERAR ALEATORIOS PONTO FLUTUANTE ENTRE 0 E 1
float randf ()
{
	return (float)rand()/ RAND_MAX;
}

//FUNCAO PARA GERAR ALEATORIOS PONTO FLUTUANTE ENTRE MIN E MAX
float randFloat (float min, float max)
{
	return min + randf()*(max-min);
}


int main ()
{
	//RAND_MAX: o maior inteiro gerado pela funcao rand() -> 32767
	
	//como dar uma semente pra funcao rand
	// -> srand(100);
	
	//como mudar a smeente toda vez que o programa é executado
	// -> srand(time(NULL));  <-> passa a hora em seundos para a srand
	//é necessário colocar a time.harderr
	
	
	
	int x=0;
	int i=0;
	
	for (i=0; i<10; i++)
	{
		x = rand();
		printf ("\nx = %d\n", x);
	}
	
	return 0;
}