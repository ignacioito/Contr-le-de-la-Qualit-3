//
//
//
//


#include<stdio.h>
#include<stdlib.h>


void teste();
int main(int argc, char const *argv[])
{
	/*int numero; //utilisé pour le nombre de la séquence
	int carre; // utilisé pour le nombre du carre

	printf("Calculateur du nombre carré\n");
	scanf(" %d", &numero);

	if(numero > 0){
		carre = numero * numero;
	}
	printf("Le número carré de %d c'est %d\n", numero, carre); */


	teste();
	teste();
	teste();

	return 0;

}

void teste(){

	int a = 2;
	a *= 2;

 	static int variavelLocalEstatica = 2;
 	variavelLocalEstatica *= 2;
	printf("Teste. %i\n %i \n", a, variavelLocalEstatica);
}