#include <stdio.h>
int main(){	
int num;	
int i;
int evs=0;	
int ods=0;	
for(i=0;i<=9;i++)
{
		printf("enter the number:",i);
		scanf("%d",&num);		
  if (num%2==0)
  {
			evs=evs+num;
		 }
		else
  {
			ods=ods+num;
		}	
}
	printf("SUM OF EVENS--> %d\n",evs);	
 printf("SUM OF ODDS--> %d",ods);
	return 0;		
}