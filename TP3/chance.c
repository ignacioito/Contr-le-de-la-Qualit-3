#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Jet Jet;
struct Jet
 {
  int des[5];
 }; 

 int chance(Jet teste)
 {
		int somme = 0;

		for (int i = 0; i < 5; ++i)
		 
			somme = somme + teste.des[i]; 
			
		 	return somme;

 }



void chanceteste( )
{
  
     Jet luiz;

  luiz.des[0] = 1;
  luiz.des[1] = 3;
  luiz.des[2] = 3;
  luiz.des[3] = 3;
  luiz.des[4] = 5;

  if (brelan (luiz) != 0)
  {
    printf  ("\n Ça marche");
  }
  else 
  {
    printf ("\n Ça marche pas");
  }

  

  Jet ignacio;

  ignacio.des[0] = 1;
  ignacio.des[1] = 1;
  ignacio.des[2] = 6;
  ignacio.des[3] = 3;
  ignacio.des[4] = 5;

  if (brelan (ignacio) == 0)
  {
    printf  ("\n Ça marche\n");
  }
  else 
  {
    printf ("\n Ça marche pas\n");
  }



}

 
 int main ()
 {
  		Jet teste;

  		teste.des[0] = 2;
		teste.des[1] = 6;
		teste.des[2] = 4;
		teste.des[3] = 6;
		teste.des[4] = 2;
  
  printf ("o valor da soma sera %d\n", chance (teste));
 }

