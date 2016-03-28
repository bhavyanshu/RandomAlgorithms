/**
 * https://www.hackerrank.com/domains/security/functions
 */
 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,f[20],g[20],i,j,k;
    scanf("%d\n",&n);

    for(i=1;i<=n;i++)
      scanf("%d",&f[i]);

    //TASK: if f(1) = 2 then g(2) = 1
    for (i = 1; i<=n; i++) {
      for(j=1;j<=n;j++) {
        if(i == f[j]) {
          printf("f(%d) -> %d\n",i,j);
        }
      }
    }
    return 0;
}
