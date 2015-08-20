#include <stdio.h>
#include <stdlib.h>

main ()
{
     int a,b,c;
     printf("Programa que muestre 3 numeros y diga que triangulo es: ");
     printf("Dame el valor a: ");
     scanf("%d",& a);
     printf("Dame el valor b: ");
     scanf("%d",& b);
     printf("Dame el valor de c: ");
     scanf("&d",& c);
     if((a==b)&&(b==a))
     {
         printf(" Es escaleno");
     }
     else if(a==b||b==c||c==a)
     {
          printf("Es isosceles");
          
     else
          printf("Es escaleno");
     }
     
     system("pause");
     return 0;
     
}     
          
                       
     
