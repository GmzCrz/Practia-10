#include<stdio.h>
int main()
  {
    int arr1[3][3]={{a,2,3},{4,5,6},{7,8,9}};
    int j=0;
    int i=0;

    while (i < 3)
      {
          j=0;
        while (j < 3)
          {
            printf("%d\t", arr1[i][j]);
            j=j+1;
          }
        printf("\n");
        i=i+1;
      }
    return 0;
  }
