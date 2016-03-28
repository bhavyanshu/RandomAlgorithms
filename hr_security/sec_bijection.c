/**
 * https://www.hackerrank.com/domains/security/functions
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,x[20],i,j,flag = 0,orig=0;
    scanf("%d\n",&n);

    for(i=1;i<=n;i++)
      scanf("%d",&x[i]);

    //check for distinct 1-1
    for (i = 1; i<=n; i++) {
      orig = x[i];
      for (j = i+1; j<=n; j++) {
          if (x[j] == orig) {
            //printf("x %d - orig %d\n",x[i],orig);
            flag = 1;
          }
      }
    }

    if(flag == 1)
      printf("NO");
    else
      printf("YES");

    return 0;
}
