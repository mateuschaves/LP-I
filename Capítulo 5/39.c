#include <stdio.h>
#include <stdlib.h>

int primo(int n)
{
int i;

for (i = 2; i < n; i++)
{
if (n % i == 0)
	return 0;
i++;
}

return 1;
}

void main(void)
{
int a, i, j=0,k;

do
{
printf("Introduza um numero par superior a 4: ");
scanf("%d", &a);
}while((a<=4) || (a%2!=0)) ; 

for(k=4; k<=a ; k=k+2)
{
for(i=1 ; i<=k/2 ; i++)
{
	if(primo(i))
		if(primo(k-i))
			j=k-i;
}
printf("O numero %d, e a soma dos primos %d + %d\n", k, k-j, j);
}

system("PAUSE");
}