/**
 * https://www.hackerrank.com/domains/security/functions
 */
#include <stdio.h>
#include <math.h>

main() {
  int x[1000];
  int xr[1000];
  int i;

  for(i=1;i<=1000;i++) {
    x[i] = i;
    xr[i] = x[i]%11;
    printf("\n%d - %d",x[i],xr[i]);
  }
}
