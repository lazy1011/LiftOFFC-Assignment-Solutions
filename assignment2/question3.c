#include <stdio.h>
int main(){	
int n,ld,p,x,fd,md;	
printf("Enter the number:");	
scanf("%d",&n);	
ld=n%10;	
p=n/10;	
x=1;	
while(p>0)
{
		x=x*10;
		p=p/10;	
}
fd=n/x;	
md=(n%x)/10;	
printf("Swaped number:");
printf("%d%d%d",ld,md,fd);	
return 0;	}