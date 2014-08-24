#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int compare(const void *a,const void *b){
	const int *da = (const int *)a;
	const int *db = (const int *)b;
	return (*da>*db) - (*da<*db);
}

long long int find_max(int *ar,long long int init_elem,long long int size){
	long long int l,m;
	m=ar[init_elem];
	for(l=init_elem;l<size;l++)
	{
		if(ar[l]>m)
		{
		m = ar[l];
		}
	}
	return m;
}

int main(){
	long long int i,j,k,n,z;
	long long int unfairness=9999999,new_unfairness;
	long long int min,max;
	
	scanf("%lld",&n); //Input value of total packets

	scanf("%lld",&k); //Input no. of children

	int arr[n]; 
	//Input how much candy each packet contains
	//for(i=0;i<n;i++)
		//scanf("%lld",&arr[i]);	
	FILE *file;	
	char *buffer; 
	int BUF_SIZ = 30; // size of a line in your file, 10 digits enough for your ints?  
	int q; 
	file=fopen("array.txt","r");
	for(q=0;fgets(buffer,sizeof(buffer),file)!=NULL;q++)
	{ 
	fscanf(file,"%d",&arr[q]);
	}

	qsort(arr,n, sizeof(int),compare); //Sort in ascending order

	for(i=0;i<n-k;i++){
		z=k+i;
		if(z>(n-1)){ break;}
		//printf("\ni=%d",i);
		min=arr[i];
		//printf("Min:%d",min);
		max=find_max(arr,i,z);
		//printf("Max:%d\n",max);
		new_unfairness = max-min;
		if(new_unfairness<unfairness){
			//Update unfairness
			unfairness=new_unfairness;
		}
	}
	//unfairness = max - min; //Calculate unfairness value
	printf("%lld",unfairness);
}
