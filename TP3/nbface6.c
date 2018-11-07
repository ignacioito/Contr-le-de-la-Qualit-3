#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Jet Jet;
struct Jet
 {
  int des[5]; 

 }; 


int nbDeFace6 (Jet jet)
{
  int somme6 = 0;
  int somme6a = 0;
      
      for (int i = 0; i < 5; ++i)
        { 
              if (jet.des[i] == 6)
              {
                somme6 ++;
              }
              
        }
 
  if (somme6 != 0)
    somme6 *= 6;
    somme6a = somme6;
   
  return somme6a;
  
}



 int main ()
 {
      

      Jet luiz;

  luiz.des[0] = 6;
  luiz.des[1] = 2;
  luiz.des[2] = 2;
  luiz.des[3] = 6;
  luiz.des[4] = 5;
  
  printf ("*  (E) - Les valeurs de données avec la face 6 seront: %d\n", nbDeFace6 (luiz));
 }









