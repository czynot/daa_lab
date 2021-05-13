// Insertion sort
// Input number of elements from user
// Input list of numbers from user
// Perform insertion sort
// Output result
// Output execution time

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int class2()
{
  int i, j, n, temp, *a;
  double cpu_time_taken;
	clock_t start,end;
	
  printf("Number of input elements : ");
  scanf("%d",&n);

  a=(int*)malloc(sizeof(int)*n);
    
  for(i = 0; i < n; i++)
  	a[i]=rand()%1000;

	start=clock();

  for(i = 1; i < n; i++)
  {
    temp = a[i];

    for(j = i; j > 0 && a[j-1] > temp; j--)
      a[j] = a[j-1];

    a[j] = temp;
  }

  end=clock();
    
  printf("The sorted elements : ");

  for(i = 0; i < n; i++)
    printf(" %d", a[i]);

  printf("\n");
  
  cpu_time_taken=(double)(end-start)/CLOCKS_PER_SEC;
	printf("\n CPU time taken: %f",cpu_time_taken);
  
  return 0;
}
