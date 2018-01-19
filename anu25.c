#include <stdio.h>
 
void main()
{
  int a[100], min,size,i,j,temp;
 
  printf("Enter the number of elements in array\n");
  scanf("%d", &size);
 
  printf("Enter %d integers\n", size);
 
  for (i = 0; i < size; i++)
    scanf("%d", &a[i]);
 
  for (i = 0; i < size; i++)
  {
for( j=i+1;j<size;j++)
{
    if (a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
  printf("median element is:");
printf("%d",a[size/2]);
}
