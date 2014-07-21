/**
Solution to https://www.hackerrank.com/challenges/find-median - Still failing for test cases 2 & 3. Will fix it as soon as possible!

Very interesting challenge based on Selection Algorithm (http://en.wikipedia.org/wiki/Selection_algorithm). The basic idea is similar to a Quicksort, except that when you recurse, you only recurse into the partition that will hold the number(s) you're looking for.

Challenge
Given a list of numbers, can you find the median?

Input Format
There will be two lines of input:

    n - the size of the array
    ar - n numbers that makes up the array

Output Format
Output one integer, the median.

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

int median(int left,int right, long int* ar) {

	int i,j,x,k,temp;
 	//Partition
	x = ar[right]; //pivot
	i = left-1;
	for(j=left;j<right-1;j++) {
		if(ar[j]<=x) {
			i++;
			temp = ar[i];
			ar[i] = ar[j];
			ar[j] = temp;
		}
	}
	temp = ar[i+1];
	ar[i+1] = ar[right];
	ar[right] = temp;
	/*for(k=0;k<a_size;k++)
		printf("%d",ar[k]);*/
	return i+1;
}

int selecte(long int *ar, int left, int right, int k) {
	if (left==right) return ar[left];
	int q = median(left, right, ar);
	int d = q - left + 1;
	if(d==k) return ar[q];
	else if(d>k) return selecte(ar,left,q-1,k);
	else return selecte(ar,q+1,right,k-d);
}

int main() {

    
    int res,c,_a_size;
    /* Uncomment for file based test case, not for hackerrank.com */
    FILE *f;
    f=fopen("test_case_median","r");
	int i=0;
	long int _a[10001];
    while(fscanf(f,"%d", &c) == 1 ){    
      _a[i]=c;
      i++;
    }
    /*scanf("%d",&_a_size);
    int _a[_a_size],_a_i;
    for(_a_i = 0; _a_i < _a_size; _a_i++) { 
        int _a_item;
        scanf("%d", &_a_item);
        
        _a[_a_i] = _a_item;
    }*/
    _a_size = i;
	res = selecte(_a, 0,_a_size-1, (_a_size+1)/2);
	printf("%d",res);
}
