#include <stdio.h>

int main(){

      for (size_t i = 1; i < 100; i++)
      {
            if(i%5 == 0 && i%3 == 0){
                  printf("Bizz Buzz\n");
            }
            else if (i%5 == 0)
            {
                  printf("Bizz\n");
            }
            else if(i%3 == 0){
                  printf("Buzz\n");
            }
            else{
                  printf("%ld\n",i);
            }
      }
}