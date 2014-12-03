#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define BUFELEM 40

int compare(const void *a,const void *b){
	const int *da = (const int *)a;
	const int *db = (const int *)b;
	return (*da>*db) - (*da<*db);
}

int main(){
	long long int i,j,k,n,z,c;
	long long int unfairness=999999999999,new_unfairness;
	long long int min,max;

	scanf("%lld",&n); //Input value of total packets

	scanf("%lld",&k); //Input no. of children

	int arr[n];
	//Input how much candy each packet contains
	//for(i=0;i<n;i++)
		//scanf("%lld",&arr[i]);
	int q=0;
	static const char filename[] = "angrykidstestcase2.txt";
	FILE *file = fopen(filename, "r");
	if ( file != NULL )
	{
	int buffer;
		while(fscanf(file,"%d",&buffer)!=EOF) {
		arr[q]=buffer;
		q++;
		}
	}
	else
		printf("Error opening file!\n");

	for(c=0;c<n;c++) {
		printf("%d \n",arr[c]);
	}

	qsort(arr,n, sizeof(int),compare); //Sort in ascending order

	for(i=0;i<=n-k;i++){
		z=k+i-1;
		if(z>(n-1)){ break;}
		min=arr[i];
		max=arr[z];
		new_unfairness = max-min;
		if(new_unfairness<unfairness){
			//Update unfairness
			unfairness=new_unfairness;
		}
	}
	//unfairness = max - min; //Calculate unfairness value
	printf("%lld",unfairness);
}
