/**
 * https://www.hackerrank.com/challenges/security-encryption-scheme
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int encrypt(int n)
{
  if(n<=1)
   return 1;
  else
   return n*encrypt(n-1);
}

int main() {
  int n;
  scanf("%d",&n);
  printf("%d",encrypt(n));
  return 0;
}
