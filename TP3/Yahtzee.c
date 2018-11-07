#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Jet Jet;
struct Jet
 {
  int des[5]; 

 }; 

int yahtzee(Jet jet)
 {
    if((jet.des[0] == jet.des[1]) && (jet.des[1] == jet.des[2]) && (jet.des[2]== jet.des[3]) && (jet.des[3]== jet.des[4])) 

    {
      return 50;
    }
  
  return 0;

}



 int main ()
 {
      

      Jet luiz;

  luiz.des[0] = 3;
  luiz.des[1] = 3;
  luiz.des[2] = 3;
  luiz.des[3] = 3;
  luiz.des[4] = 3;

  printf ("Le valeur de brelan est: %d\n", yahtzee (luiz));
 }





