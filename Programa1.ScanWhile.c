#include<stdio.h>
int main()
  {
    int arr1[3][3];
    int j;
    int i;
    
    while (i < 3) 
      {
        while (j < 3) 
        {
          scanf("%d", &arr1[i][j]);
          j=j+1;
        }
        i=i+1;
        j=0;
      }

    while ( i < 3) 
      {
        printf("\n");
        while (j < 3)
          {
            printf("%d\t", arr1[i][j]);
            j=j+1;
          }
        i=i+1;
        j=0;
      }
    return=0
  }
