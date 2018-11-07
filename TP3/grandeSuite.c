//
//
// Auteur João Gustavo
//        Luis Gustavo
//        Ignacio Ito
//
// Test unitaire grandSuite
//
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Jet Jet;
struct Jet
 {
  int des[5]; 
 }; 

int grandsuit(Jet jet)
{
  
  int total = 0;
  int somme1 = 0;
  int somme2 = 0;
  int somme3 = 0;
  int somme4 = 0;
  int somme5 = 0;
  int somme6 = 0;
  
      
      for (int i = 0; i < 5; ++i)
        { 
              if (jet.des[i] == 1)
              {
                somme1 ++;
              }
              if (jet.des[i] == 2)
              {
                somme2 ++;
              }
              if (jet.des[i] == 3)
              {
                somme3 ++;
              }
              if (jet.des[i] == 4)
              {
                somme4 ++;
              }
              if (jet.des[i] == 5)
              {
                somme5 ++;
              }
              if (jet.des[i] == 6)
              {
                somme6 ++;
              }
        }
            
            if (((somme1 == 1) && (somme2 == 1) && (somme3 == 1) &&
                (somme4 == 1) && (somme5 == 1)) ||
                ((somme2 == 1) && (somme3 == 1) && (somme4 == 1) &&
                (somme5 == 1) && (somme6 == 1)))
                
            {
              return 40; 
            }
      
  return 0 ;
  
}
  
void testGrandeSuit(){
  Jet luiz;

  luiz.des[0] = 1;
  luiz.des[1] = 2;
  luiz.des[2] = 3;
  luiz.des[3] = 4;
  luiz.des[4] = 5;

  if (grandsuit (luiz) == 40)
  {
    printf  ("\nAvec les chiffres 1;2;3;4;5 la fonction est correct");
  }
  else 
  {
    printf ("\nAvec les chiffres 1;2;3;4;5 la fonction n'est pas correct");
  }

  

  Jet ignacio;

  ignacio.des[0] = 1;
  ignacio.des[1] = 1;
  ignacio.des[2] = 6;
  ignacio.des[3] = 3;
  ignacio.des[4] = 5;

  if (grandsuit (ignacio) == 0)
  {
    printf  ("\nAvec les chiffres 1;1;6;3;5 la fonction est correct\n");
  }
  else 
  {
    printf ("\nAvec les chiffres 1;1;6;3;5 la fonction n'est pas corrects\n");
  }


}




 int main ()
 {
      

  testGrandeSuit();

 }