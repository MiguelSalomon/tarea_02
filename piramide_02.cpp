#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,j,n;
	printf("dame la altura de la piramide: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		printf(" ");
		for(j=1;j<=2*i-1;j++)
		printf("*");
		printf("\n");
	}
}
