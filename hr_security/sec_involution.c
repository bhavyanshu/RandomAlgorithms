/**
 * https://www.hackerrank.com/domains/security/functions
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,f[20],i,j,flag = 0,orig=0;
    scanf("%d\n",&n);

    for(i=1;i<=n;i++)
      scanf("%d",&f[i]);

    for(i=1;i<=n;i++)
      //orig = f[i];
      //printf("f[%d] -> %d & f[%d] -> %d\n",i,orig, orig, f[orig]);
      if(f[f[i]] != i)
        flag = 1;

    if(flag == 1)
      printf("NO");
    else
      printf("YES");

    return 0;
}
