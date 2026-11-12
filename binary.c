#include<stdio.h>   
int binarysearch_rec(int *arr,int n,int se)
{
	int l,h,m;
	l=0,h=n-1;
	while(l<h)
	{
		m=(l+h)/2;
		if(arr[m]==se)
		{
			return 1;
		}
		else if(arr[m]>se)
		{
			h=m-1;
		}
		else if(arr[m]<se)
		{
			l=m+1;
		}
	}
	return 0;
	/*
int binarysearch_rec(int *arr,int l,int h,int se)
{
	if(l>h)
	{
		return 0;
	}
	int m;
	m=(l+h)/2;
	if(arr[m]==se)
	{
		return 1;
	}
	if(arr[m]<se)
	{
		l=m+1;
	}
	return binarysearch_rec(arr,l,h,se);
}*/
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int se;
	scanf("%d",&se);
	int res;
	res=binarysearch(arr,n,se);//res=binarysearch(arr,0,n-1,se);
	if(res==1)
	{
		printf("found");
	}
	else
	{
		printf("not found");
	}
	return 0;
}
