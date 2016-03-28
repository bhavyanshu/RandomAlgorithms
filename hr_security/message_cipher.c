/**
 * https://www.hackerrank.com/challenges/security-message-space-and-ciphertext-space
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  int r,sum=0,a[100],i=0,num,j,flag=0;

  char num_str[12];
  scanf("%s",num_str);

  //just to handle zero in the beginning of digit!
  char c;
  c = num_str[0];
  if(c == '0') {
    flag=1;
  }
  num = atoi(num_str);

  while(num>0)
  {
    i++;
    r=num%10;
    num=num/10;
    if(r == 9) {
      r = 0;
    }
    else {
      r++;
    }
    a[i]=r;
  }

  if(flag==1) {
    a[i+1]=1;
    for(j=i+1;j>=1;j--)
      printf("%d",a[j]);
  }
  else {
    for(j=i;j>=1;j--)
      printf("%d",a[j]);
  }

  return 0;
}
