#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Jet Jet;
struct Jet
 {
  int des[5]; 

 }; 


int brelan(Jet jet)
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
      total = total + jet.des[i]; 
    }

      
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

            
            if ((somme1 >= 3) || (somme2 >= 3) || (somme3 >= 3) || (somme4 >= 3) || (somme5 >= 3) || (somme6 >= 3))

            {
              return total; 
            }
      
  return 0 ;

}

void brelanteste( )
{
  
     Jet luiz;

  luiz.des[0] = 1;
  luiz.des[1] = 3;
  luiz.des[2] = 3;
  luiz.des[3] = 3;
  luiz.des[4] = 5;

  if (brelan (luiz) != 0)
  {
    printf  ("\nAvec les chiffres 1;3;3;3;5 la fonction est correct");
  }
  else 
  {
    printf ("\nAvec les chiffres 1;3;3;3;5 la fonction n'est pas correct");
  }

  

  Jet ignacio;

  ignacio.des[0] = 1;
  ignacio.des[1] = 1;
  ignacio.des[2] = 6;
  ignacio.des[3] = 3;
  ignacio.des[4] = 5;

  if (brelan (ignacio) == 0)
  {
    printf  ("\nAvec les chiffres 1;1;6;3;5 la fonction faux est correct\n");
  }
  else 
  {
    printf ("\nAvec les chiffres 1;1;6;3;5 la fonction faux n'est pas corrects\n");
  }



}



 int main ()
 {
      

brelanteste();

 

 }









