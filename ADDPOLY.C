#include<stdio.h>
#include<conio.h>

struct poly
{
	int coef;
	int exp;
};
void main()
{
	struct poly p1[10],p2[10],p3[10];
	int l,m,n,i,j,k;
	clrscr();
	printf("Enter number of terms for first polynomial:");
	scanf("%d",&l);
	for(i=0;i<l;i++)
	{
		printf("Enter coefficient for %d term:",i+1);
		scanf("%d",&p1[i].coef);
		printf("Enter exponent for %d term:",i+1);
		scanf("%d",&p1[i].exp);
	}
	printf("Enter number of terms for second polynomial:");
	scanf("%d",&m);
	for(j=0;j<m;j++)
	{
		printf("Enter coefficient for %d term:",i+1);
		scanf("%d",&p2[j].coef);
		printf("Enter exponent for %d term:",i+1);
		scanf("%d",&p2[j].exp);
	}
	while(i==l && j==m)
	{
		i=0,j=0,k=0;
		if(p1[i].exp>p2[j].exp)
		{
			p3[k].coef=p1[i].coef;
			p3[k].exp=p1[i].exp;
			i++;
			k++;
		}
		if(p1[i].exp<p2[j].exp)
		{
			p3[k].coef=p2[j].coef;
			p3[k].exp=p2[j].exp;
			j++;
			k++;
		}
		if(p1[i].exp==p2[j].exp)
		{
			p3[k].coef=p1[i].coef+p2[j].coef;
			p3[k].exp=p1[i].exp+p2[j].exp;
			i++;
			j++;
			k++;
		}
	}
	printf("Polynomial 1: ");
	for(i=0;i<l;i++)
	{
		printf("%dX^%d ",p1[i].coef,p1[i].exp);
		if(i+1==l)
		{
			break;
		}
		else
		{
			printf("+ ");
		}
	}
	printf("\n Polynomial 2: ");
	for(j=0;i<m;j++)
	{
		printf("%dX^%d ",p2[j].coef,p2[j].exp);
		if(j+1==m)
		{
			break;
		}
		else
		{
			printf("+ ");
		}
	}
	n=sizeof(p3);
	printf("\n Addition of two polynomial: ");
	for(k=0;k<n;k++)
	{
		printf("%dX^%d ",p3[k].coef,p3[k].exp);
		if(k+1==n)
		{
			break;
		}
		else
		{
			printf("+ ");
		}
	}
	getch();

}
