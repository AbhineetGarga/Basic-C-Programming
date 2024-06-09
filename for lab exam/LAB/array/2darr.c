#include<stdio.h>
int main(){
    // arr[i][j]
    int arr[3][3], arr1[3][3], arr2[3][3],i,j;
    printf("Enter the first array");
    for (i= 0; i < 3; i++)
    {
      for ( j = 0; j < 3; j++)
      {
       scanf("%d", &arr[i][j]);
      }
    }

    printf("Enter the Second array");
     for (i= 0; i < 3; i++)
    {
      for ( j = 0; j < 3; j++)
      {
       scanf("%d", &arr1[i][j]);
      }
    }
// To store the sum 
    for (i= 0; i < 3; i++)
    {
      for ( j = 0; j < 3; j++)
      {
       arr2[i][j]= arr[i][j] + arr1[i][j];
      }
    }



    for (i= 0; i < 3; i++)
    {
      for ( j = 0; j< 3; j++)
      {
       printf("%d ", arr[i][j]);
      }
      printf("\n");
    }
    
    // read arr 1 
    printf("\n");
    for (i= 0; i < 3; i++)
    {
      for ( j = 0; j< 3; j++)
      {
       printf("%d ", arr[i][j]);
      }
      printf("\n");
    }

   // read arr 2
    printf("\n");
    for (i= 0; i < 3; i++)
    {
      for ( j = 0; j< 3; j++)
      {
       printf("%d ", arr2[i][j]);
      }
      printf("\n");
    }

    // for sum os 1 and 2
     printf("\n");
    for (i= 0; i < 3; i++)

    {
      for ( j = 0; j< 3; j++)
      {
       printf("%d ", arr2[i][j]);
      }
      printf("\n");
    } 
    return 0;
}



// cout<<"mhvh"<<gh<<"vjh"<<gh<<fg