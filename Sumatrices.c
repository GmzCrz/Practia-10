#include<stdio.h>
int main()
  {
    int arr1[3][3];
    int j;
    int i;
    for (i = 0; i < 3; i++) 
      {
        for (j = 0; j < 3; j++) 
        {
          scanf("%d", &arr1[i][j]);
        }
      }

    int arr2[3][3];
    for (i = 0; i < 3; i++) 
      {
        for (j = 0; j < 3; j++) 
        {
          scanf("%d", &arr2[i][j]);
        }
      }

    

    for (i = 0; i < 3; i++) 
      {
        printf("\n");
        for (j = 0; j < 3; j++)
          {
            printf("%d\t", arr1[i][j]);
          }
      }
        
    for (i = 0; i < 3; i++) 
      {
        printf("\n");
        for (j = 0; j < 3; j++)
          {
            printf("%d\t", arr2[i][j]);
          }
      }
    return 0;
    }
  
