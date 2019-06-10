/* Assuming triangle exists - valid input from user */

#include<stdio.h>
#include<math.h>

int main()
{
   double a, b, c, s, area;

   printf("Enter the sides of triangle\n");

   scanf("%lf%lf%lf", &a, &b, &c);

   s = (a+b+c)/2;
   printf("Semi perimeter is:%.2lf\n",s);

   area = sqrt(s*(s-a)*(s-b)*(s-c));

   printf("Area of the triangle = %.2lf\n", area);

   return 0;
}
