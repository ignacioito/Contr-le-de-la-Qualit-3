#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Jet Jet;
struct Jet
 {
  int des[5]; 

 }; 


int nbDeFace1 (Jet jet)
{
  int somme1 = 0;
  int somme1a = 0;
  
  
      
      for (int i = 0; i < 5; ++i)
        { 
              if (jet.des[i] == 1)
              {
                somme1 ++;
              }
              
        }
 
  if (somme1 != 0)
    somme1 *= 1;
    somme1a = somme1;

      
  return somme1a;
  
}



 int main ()
 {
      

      Jet luiz;

  luiz.des[0] = 1;
  luiz.des[1] = 2;
  luiz.des[2] = 1;
  luiz.des[3] = 1;
  luiz.des[4] = 5;
  
  printf ("*  (A) - Les valeurs de données avec la face 1 seront: %d\n", nbDeFace1 (luiz));
 }









