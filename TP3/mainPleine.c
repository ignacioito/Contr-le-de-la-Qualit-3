#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Jet Jet;
struct Jet
 {
  int des[5]; 

 }; 

int mainPleine(Jet jet)
{
  
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

            
            if (((somme1 == 3) && (somme2 == 2)) ||
                ((somme1 == 3) && (somme3 == 2)) ||
                ((somme1 == 3) && (somme4 == 2)) ||
                ((somme1 == 3) && (somme5 == 2)) ||
                ((somme1 == 3) && (somme6 == 2)) ||
                ((somme2 == 3) && (somme1 == 2)) ||
                ((somme2 == 3) && (somme3 == 2)) ||
                ((somme2 == 3) && (somme4 == 2)) ||
                ((somme2 == 3) && (somme5 == 2)) ||
                ((somme2 == 3) && (somme6 == 2)) ||
                ((somme3 == 3) && (somme1 == 2)) ||
                ((somme3 == 3) && (somme2 == 2)) ||
                ((somme3 == 3) && (somme4 == 2)) ||
                ((somme3 == 3) && (somme5 == 2)) ||
                ((somme3 == 3) && (somme6 == 2)) ||
                ((somme4 == 3) && (somme1 == 2)) ||
                ((somme4 == 3) && (somme2 == 2)) ||
                ((somme4 == 3) && (somme3 == 2)) ||
                ((somme4 == 3) && (somme5 == 2)) ||
                ((somme4 == 3) && (somme6 == 2)) ||
                ((somme5 == 3) && (somme1 == 2)) ||
                ((somme5 == 3) && (somme2 == 2)) ||
                ((somme5 == 3) && (somme3 == 2)) ||
                ((somme5 == 3) && (somme4 == 2)) ||
                ((somme5 == 3) && (somme6 == 2)) ||
                ((somme6 == 3) && (somme1 == 2)) ||
                ((somme6 == 3) && (somme2 == 2)) ||
                ((somme6 == 3) && (somme3 == 2)) ||
                ((somme6 == 3) && (somme4 == 2)) ||
                ((somme6 == 3) && (somme5 == 2)))
     
            {
              return 25; 
            }
      
  return 0 ;

}


 int main ()
 {
      

      Jet luiz;

  luiz.des[0] = 2;
  luiz.des[1] = 2;
  luiz.des[2] = 3;
  luiz.des[3] = 3;
  luiz.des[4] = 3;
  
  printf ("Le valeur de main pleine est: %d\n", mainPleine (luiz));
 }






