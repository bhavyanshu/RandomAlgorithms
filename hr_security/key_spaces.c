/**
 * https://www.hackerrank.com/challenges/security-key-spaces
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  int r,a[100],e,i=0,j,flag=0;
  long int num;
  char num_str[12];

  scanf("%s",num_str);
  scanf("%d",&e);

  char c;
  c = num_str[0];

  if(c == '0') {
    flag=1;
  }
  num = atol(num_str);

  if(e<1) {
    printf("%s",num_str);
    return 0;
  }
  else {
    while(num>0) {
      int tmp = e;
      i++;

      r=num%10;
      num=num/10;
      //printf("e=%d,i=%d,num=%ld\n",e,i,num);
      while(tmp>0)
      {
        if(r == 9) {
          r = 0;
        }
        else {
          r++;
        }
        tmp--;
      }
      a[i]=r;
    }
  }

  if(flag==1) {
    a[i+1]=e;
    for(j=i+1;j>=1;j--)
      printf("%d",a[j]);
  }
  else {
    for(j=i;j>=1;j--)
      printf("%d",a[j]);
  }
  return 0;
}
