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

  fof(n,f);
  return 0;
}

int fof(int limit, int farr[]) {
  int i,j,k,result;

  //TASK: IN(2,3,1) if f(1) = 2 then f(2) = 3
  for(i=1;i <= limit; i++) {
    result = farr[farr[i]];
    printf("fof(%d) -> %d\n",i,result);
  }
  return 0;
}
