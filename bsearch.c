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
    int sch,pos=0;
    printf("\nENTER SEARCHING ELEMENT\n"); scanf("%d",&sch);
    int beg=0,last=n-1,mid;
    while(beg<=last)       //binary searching on assumed ascending sorted array arr[].
    {
        mid=(beg+last)/2;
        if(sch==arr[mid])
        {
            pos=mid+1;
            break;
        }
        else if(sch<arr[mid])
            last=mid-1;
        else
        beg=mid+1;
    }
    if(pos!=0)
    printf("ELEMENT FOUND AND THE POSITION IS = %d\n",pos);
    else
    printf("ELEMENT NOT FOUND\n");
}