/* Print given below pattern
*
* *
* * *
* * * *
*/


#include <stdio.h>

 void main()
{
  int n, i, j;

  printf("Enter number of rows\n");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
  {
    for(j = 1; j <= i; j++)
      printf("*");

    printf("\n");
  }

}
