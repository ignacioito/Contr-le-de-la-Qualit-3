#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Jet Jet;
struct Jet
 {
  int des[5]; 
 }; 

int petitesuit(Jet jet)
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
            
            if (((somme1 >= 1) && (somme2 >= 1) && (somme3 >= 1) &&
                (somme4 >= 1)) ||
                ((somme2 >= 1) && (somme3 >= 1) && (somme4 >= 1) &&
                (somme5 >= 1)) ||
                ((somme3 >= 1) && (somme4 >= 1) && (somme5 >= 1) &&
                (somme6 >= 1)))
                
            {
              return 30; 
            }
      
  return 0 ;
  
}
  

 int main ()
 {
      

      Jet luiz;

  luiz.des[0] = 2;
  luiz.des[1] = 1;
  luiz.des[2] = 5;
  luiz.des[3] = 4;
  luiz.des[4] = 6;
  
  printf ("o valor do grandsuit sera %d\n", petitesuit (luiz));
}