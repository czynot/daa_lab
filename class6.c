#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int partition(int arr[],int l,int r)
{
  int j=l+1,k=r,temp;
  int num=arr[l];

  while(k>=j)
  {
    while(arr[j]<num)
    j++;
    while(arr[k]>num)
    k--;
  
    if(k>j)
    {
      temp=arr[j];
      arr[j]=arr[k];
      arr[k]=temp; 
    }
  }

  temp=arr[k];
  arr[k]=arr[l];
  arr[l]=temp;
 
  return k;
}

void quicksort(int arr[],int l,int r)
{ 
  int m;
  if(r>l)
  {
    m=partition(arr,l,r);
    quicksort(arr,l,m-1);
    quicksort(arr,m+1,r);
  }
}

int class6()
{
  int *arr,n,i;
  clock_t start,end;
  double cpu_time_used;
    
  printf("\nEnter numner of elements:");
  scanf("%d",&n);
  arr=(int*)malloc(sizeof(int)*n);

  for(i=0;i<n;i++)
  {
    arr[i]=rand()%1000;
  }

  printf("\n Input list:");
  for(i=0;i<n;i++)
    printf("\t%d",arr[i]);
        
  start=clock();
  quicksort(arr,0,n-1);
  end=clock();
   
  printf("\n Sorted list: ");
  for(i=0;i<n;i++)
    printf("\t%d",arr[i]);
    
  cpu_time_used = (double) (end-start)/CLOCKS_PER_SEC;
  printf("\n Time elapsed: %f",cpu_time_used);
  
  return 0;
}

int partition(int arr[],int l,int r)
{
  int j=l+1,k=r,temp;
  int num=arr[l];

  while(k>=j)
  {
    while(arr[j]<num)
    j++;
    while(arr[k]>num)
    k--;
  
    if(k>j)
    {
      temp=arr[j];
      arr[j]=arr[k];
      arr[k]=temp; 
    }
  }

  temp=arr[k];
  arr[k]=arr[l];
  arr[l]=temp;
 
  return k;
}

void quicksort(int arr[],int l,int r)
{ 
  int m;
  if(r>l)
  {
    m=partition(arr,l,r);
    quicksort(arr,l,m-1);
    quicksort(arr,m+1,r);
  }
}