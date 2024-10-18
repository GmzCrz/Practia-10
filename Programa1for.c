#include<stdio.h>
int main()
  {
    int arr1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int j;
    int i;

    for (i = 0; i < 3; i++) 
      {
        for (j = 0; j < 3; j++)
          {
            printf("%d\t", arr1[i][j]);
          }
        
      }
    return=0
  }
