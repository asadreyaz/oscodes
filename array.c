#include<stdio.h>
void main()
{
  int arr[100],n;
  printf("ENTER SIZE OF THE ARRAY\n");
  scanf("%d",&n);
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
  printf("\nENTER SEARCHING ELEMENT\n");
  scanf("%d",&sch);
  for(int i=0;i<n;i++)
  {
      if(sch==arr[i])                  //linear searching.
      {
          pos=i+1;
          break;
      }
  }
  if(pos!=0)
  printf("ELEMENT FOUND AND THE POSITION IS = %d\n",pos);
  else
  printf("ELEMENT NOT FOUND\n");
}