#include <stdio.h>
#include <math.h>



int main(){
      //mathematic
      /*int m = 5, n = 2;
      float bolum, kalan;
      bolum = 1.0f*5/2;
      bolum = (float)m /n;
      kalan = 5%2;
      printf("bolum : %f\n", bolum);
      printf("kalan : %f\n", kalan);
      int yas = 18;
      printf("baris %d yasinda\n",yas);
      yas++;// Increment
      printf("barisin yeni yasi %d \n",yas);*/

      //logical operators
      int a_yas = 26, b_yas = 18;
      if(a_yas > b_yas){
            printf("Abbas Baristan daha buyuktur.\n");
      }else if (a_yas < b_yas)
      {
            printf("Baris Abbastan daha buyuktur.\n");
      }else{
            printf("Baris ve Abbas yasitlar.\n");
      }

      //assign operators

      int a = 100, b = 25;
      int min;
      min = (a<b)?a:b;
      printf("%d daha kucuktur\n",min);
      char c = 'a';
      printf("%c %s\n",c,(c>='A'&&c<='Z') ? "buyuk harf":
      (c>='a'&&c<='z')?"kucuk harf" : (c>='0'&&c<='9')?"Rakamdir" : "Hic biri");
      
      return 0;
}