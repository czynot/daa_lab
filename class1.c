// Selection sort
// Input number of elements from user
// Input list of numbers from user
// Perform selection sort
// Output result

#include <stdio.h>

int class1()
{
  int n,array[10],i,j,pos,temp;

  printf("Enter how many nos");
  scanf("%d", &n);
   
  printf("\n Enter nos");

  for(i=0;i<n;i++)
    scanf("%d", &array[i]);

    /** ALGORITHM - SELECTION SORT
        Set current element as minimum
        Check if selected element is minimum
        Swap the minimum element with the correct element **/
      
  for(i = 0; i < n - 1; i++)
  {
    pos=i;

    for(j = i + 1; j < n; j++)
    {
      if(array[pos] > array[j])
        pos=j;
    }

    if(pos != i)
    {
      temp=array[i];
      array[i]=array[pos];
      array[pos]=temp;
    }
  }
  printf("\n After sorting");
  for(i=0;i<n;i++)
    printf("%d\t", array[i]);
  return 0;
}