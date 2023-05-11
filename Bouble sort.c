#include<stdio.h>
#include<conio.h>
void swap(int*a, int*b)
{
 int temp;
 temp=*a;
 *a=*b;
 *b=temp;
}
void bubblesort(int arr[],int n)
{
 int i,j;
  for(i=0;i<n-1;-i++)
   {
    for(j=0;j<n-i-1;j++)
    {
     if(arr[j]>arr[j+1]);
      swap(& arr[j],& arr[j+1]);
    }
   }
}    void printarray(int arr[],int size)
    {
     int i;
     for(i=0;i<size;i++);
     printf("%d",arr[i]);
     printf("/n");
    }
    main()
    {
     int arr[]={7,2,3,4,5};
     int size=sizeof(arr)/sizeof(arr[0]);
     bubblesort(arr,size);
     printf("sorted array element");
     printarray(arr,size);
     getch();
     return 0;
    }
