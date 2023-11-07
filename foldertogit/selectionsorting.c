#include<stdio.h>
void main()
{
    int arr[100],n;
    printf("ENTER SIZE\n");scanf("%d",&n);
    printf("ENTER ELEMENTS\n");
    for(int i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);   //accepting values
    }
    printf("ELEMETS ARE:\n");
    for(int i=0;i<n;i++)
    {
      printf("%d,",arr[i]);   // showing values
    }
    int temp,k;
    for(int i=0;i<n-1;i++)
    {
      k=0;
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
              k++;
              temp=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=temp;
            }
        }
        if(k==0)
        break;
        
    }
    printf("\nSORTED ELEMETS ARE:\n");
    for(int i=0;i<n;i++)
      printf("%d,",arr[i]);   // showing values
}