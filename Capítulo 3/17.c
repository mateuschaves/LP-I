#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
  int n, i, l, m = 0;
  int a = 1;
  scanf("%d", &n);
  char aa[1024];
  m = n;
  while (1){
	  m /= 10;
	  if ( 1 > m){
		  break;
	  }
	  l++;
  }
  l++;
  for (i = 0; i < l; i++){
	  aa[i] = n / a % 10;
    if(n / a % 10){
  	  printf("%d", n / a % 10);
    }
	  a *= 10;
  }
  printf("\n");
  system("pause");
}