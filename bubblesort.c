#include<stdio.h>
#include<stdbool.h>
int temp;
void main()
{
    int arr[100],freq[100],n,count=0;
    printf("ENTER SIZE\n");scanf("%d",&n);
    printf("ENTER ELEMENTS\n");
    for(int i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);   //accepting values
    }
    printf("ELEMETS ARE:\n");
    for(int i=0;i<n;i++)
    {
      printf("%d,",arr[i]);
      freq[i]=-1;   // showing values
    }
    
    for(int i=0;i<n;i++)
    {
      count =1;
      for(int j=i+1;j<n;j++)
      {
        if(arr[i]==arr[j])
        {
          count++;
          freq[j]=0;
        }
      }
      if(freq[i]!=0)
      freq[i]=count;
    }

    printf("\nfrequency is :\n");
    for(int i=0;i<n;i++)
    {
      if(freq[i]!=0)
      printf("%d,",freq[i]);   // showing values
    }

}