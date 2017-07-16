#include <stdio.h>  
int main() {
	int i,j,k,sum=0,N,num1=6,a[500];
	scanf("%d",&N); 
	for(i = N;i>=0;i--){
		sum = sum + i;
	}

	a[0] = num1;
	for(i=1;i<sum;i++){
		a[i] = a[i-1] + (a[i-1] - a[i-2]) + 16;
	}
	k = 0;
	for(i=1;i<=N;i++){
		for(j=1;j<=i;j++){
			printf("%05d ",a[k]);
			k++;
		}
		printf("\n");
	}
	return 0;
}
