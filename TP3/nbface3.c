#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Jet Jet;
struct Jet
 {
  int des[5]; 

 }; 


int nbDeFace3 (Jet jet)
{
  int somme3 = 0;
  int somme3a = 0;
  
  
      
      for (int i = 0; i < 5; ++i)
        { 
              if (jet.des[i] == 3)
              {
                somme3 ++;
              }
              
        }
 
  if (somme3 != 0)
    somme3 *= 3;
    somme3a = somme3;

      
  return somme3a;
  
}



 int main ()
 {
      

      Jet luiz;

  luiz.des[0] = 1;
  luiz.des[1] = 2;
  luiz.des[2] = 3;
  luiz.des[3] = 3;
  luiz.des[4] = 5;
  
  printf ("*  (A) - Les valeurs de données avec la face 3 seront: %d\n", nbDeFace3 (luiz));
 }









