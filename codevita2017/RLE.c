#include<stdio.h>
#include<string.h>
int main()
{
	char string[1000];
	char *array[100];
	int i=0,j,count,len,k=0,sum[100],l,m,x;
	//gets (string)		//dont use in codevita
	scanf ("%[^\n]%*c", string);
	array[i] = strtok(string," ");
	
	while(array[i]!='\0')
	{
	   array[++i] = strtok('\0'," ");
	}
	count = i;
	while(count!=0){
		l =0 ;
		len = strlen(array[k]);
		for(j=0;j<len;j++){
			sum[l] = (array[k][j]-64);	
			l++;		
		}
		for(m=0;m<l;m++){
			if(m%2==0){
				for(x=0;x<sum[m];x++)
					printf("0");
			}else{				
				for(x=0;x<sum[m];x++)
					printf("!");
			}
		}
		k++;
		count--;
		printf("\n");
	}
	return 0;
}
