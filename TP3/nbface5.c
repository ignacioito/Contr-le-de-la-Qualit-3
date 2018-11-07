#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Jet Jet;
struct Jet
 {
  int des[5]; 

 }; 


int nbDeFace5 (Jet jet)
{
  int somme5 = 0;
  int somme5a = 0;
   
      for (int i = 0; i < 5; ++i)
        { 
              if (jet.des[i] == 5)
              {
                somme5 ++;
              }
              
        }
 
  if (somme5 != 0)
    somme5 *= 5;
    somme5a = somme5;
    
  return somme5a;
  
}



 int main ()
 {
      

      Jet luiz;

  luiz.des[0] = 1;
  luiz.des[1] = 5;
  luiz.des[2] = 2;
  luiz.des[3] = 5;
  luiz.des[4] = 5;
  
  printf ("*  (D) - Les valeurs de données avec la face 5 seront: %d\n", nbDeFace5 (luiz));
 }









