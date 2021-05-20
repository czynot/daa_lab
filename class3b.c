// Insertion sort
// Number is 20000 to 100000, step 20000
// Perform insertion sort
// Output execution time for each

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void sort(int n)
{
  int i, j, temp, *a;
  double cpu_time_taken;
	clock_t start,end;
	
  printf("\n Number of input elements : %d",n);

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
  
  cpu_time_taken=(double)(end-start)/CLOCKS_PER_SEC;
	printf("\n CPU time taken: %f",cpu_time_taken);
  
}

int class3b()
{
  for(int i = 20000; i < 100001; i = i+20000)
    sort(i);
  
  return 0;
}