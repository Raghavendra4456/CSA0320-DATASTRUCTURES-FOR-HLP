#include<stdio.h>
#include<conio.h>
int linear(int[],int,int);
main()
{
	int a[10],n,k,i,pos=-1;
	printf("Enter The Value Of N = ");
	scanf("%d",&n);
	printf("Enter The Array Elements = ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter The Search Key = ");
	scanf("%d",&k);
	pos=linear(a,n,k);
	if(pos!=-1)
	{
		printf("Available In List");
	}
	else
	{
		printf("Not Available In The List");
	}
	getch();
	return 0;
}

int linear(int a[],int n,int k)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		return (i);
    }
			return -1;
}

