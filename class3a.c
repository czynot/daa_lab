#include<stdio.h>
#include<stdlib.h>

int binarysearch(int *a, int lo, int up, int x)
{
  int mid;

  if(lo>up)
    return -1;

  mid = (lo+up)/2;

  if(x==a[mid])
    return mid;
    
  else if(x<a[mid])
    binarysearch(a,lo,mid-1,x);
  
  else
    binarysearch(a,mid+1,up,x);
}

int class3a()
{
  int *a, n, i, x, pos;

  printf("Enter the no of elements:\n");
  scanf("%d",&n);

  a=(int *)malloc(sizeof(int)*n);\

  printf("Enter the numbers:\n");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  
  printf("Enter the no to be searched\n");
  scanf("%d",&x);
  
  pos=binarysearch(a,0,n-1,x);

  if(pos==-1)
    printf("Not found");
    
  else
    printf("Found at index %d",pos);
    
  return 0;
}

