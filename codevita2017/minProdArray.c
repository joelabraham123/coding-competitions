#include <stdio.h>  
int main() {
	int i,j,l,min1=0,min2,n,k,a[500],b[500],c[500];
	scanf("%d %d",&n,&k); 
	for(i = 0;i<n;i++){
		scanf("%d",&a[i]); 
	}
	for(i = 0;i<n;i++){
		scanf("%d",&b[i]); 
	}
	for(i = 0;i<n;i++){
		c[i] = a[i]; 
	}
	for(i=0;i<n;i++){
		min1 = min1 + a[i]*b[i];
	}
	int minsum1;
	for(i=0;i<n;i++){
		minsum1 = 0;
		c[i] = a[i]+(k*2);
		for(j=0;j<n;j++){
			minsum1 = minsum1 + c[j]*b[j];	
		}
		for(l=0;l<n;l++){
			c[l] = a[l]; 
		}
		if (min1 > minsum1)
			min1 = minsum1;

	}
	int minsum2;
	for(i=0;i<n;i++){
		minsum2 = 0;
		c[i] = a[i]-(k*2);
		for(j=0;j<n;j++){
			minsum2 = minsum2 + c[j]*b[j];
		}
		for(l=0;l<n;l++){
			c[l] = a[l]; 
		}
		if (min1 > minsum2)
			min1 = minsum2;
	}
	printf("%d",min1);
	return 0;
}
