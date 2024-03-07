#include <stdio.h>

int main(){

      /*char c = 'M';
      
      printf("The character is : %c\n\n",c);
      printf("The character is : %i\n\n",c);
      unsigned char c1 = 128;
      printf("The sighned number is : %u\n",c1);
      printf("The unsighned number is : %i\n",c1);
      float eps = 0.000002;
      
      printf("The 3esp of float number is : %.3f\n",eps);
      printf("The notation number is : %E\n",eps);
      printf("The float number is : %f\n",eps);
      printf("The double number is : %g\n",eps);

      printf("The number in octal base is : %o\n",c);
      
      printf("The number in hexadecimal base is : %X\n\n",c);

      char s[] = "Hello\n";
      printf("%.3s\n", s);
      printf("%5.3s", s);//toplam 5 character 3i bizim yazdigimizdan
      printf("%+10s", s);
      printf("%#o\n ", c1);
      printf("%0o\n ", c1);*/
      //[flag]{- ->left justify, + -> show signs, # -> for show base,0 for space}[width][][length]

      //Scanf function
      int m;
      float f;
      double d;
      scanf("%f", &f);
      printf("The float number is : %f\n",f);
      scanf("%lf", &d);
      printf("The float number is : %g\n",d);
      scanf("%d", &m);
      printf("The number is : %i\n",m);



      return 0;
}