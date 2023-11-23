#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,RQ[100],initial,TH=0;
	printf("\nenter the no.of.requests:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nenter the request sequence%d:",i);
		scanf("%d",&RQ[i]);
	}
	printf("\nenter the initial:");
	scanf("%d",&initial);
	for(i=0;i<n;i++)
	{
		TH+=abs(RQ[i]-initial);
		TH=RQ[i];
	}
	printf("\ntotal head movement:%d",TH);
	return 0;
}
