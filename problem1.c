/**
 * Program to find the sum of multiples of p or q UPTO Z (Included if multiple of p or q). 
 */

#include<stdio.h>
int sum(int p,int q,int z);

main() {
	int p,q,z; //z is the limit upto which the sum is to be found.
	printf("Enter the first number: ");
	scanf("%d",&p);
	printf("\nEnter the second number: ");
	scanf("%d",&q);
	printf("\nEnter the limit: ");
	scanf("%d",&z);
	printf("The sum of the multiples of %d and %d is %d\n",p,q,sum(p,q,z)); //Main formula to find the sum
}

int sum(int p1,int q1,int z1) {
	int n1,n2,n3,result; //
	n1=z1/p1;
	n2=z1/q1;
	n3=z1/(p1*q1);
	printf("n1=%d, n2=%d, n3=%d\n",n1,n2,n3);
	result = ((p1*n1*(n1+1))+(q1*n2*(n2+1))-(p1*q1*n3*(n3+1)))/2;
	return result;
}