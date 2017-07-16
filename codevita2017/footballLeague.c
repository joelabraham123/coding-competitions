#include <stdio.h>  
#include <string.h>
#include <malloc.h>
int main() {
	int i,j,k,teams,matches,gf[20],ga[20],gd[20],s1[100],s2[100],matchcount[20],pts[20],temp;
	char names[20][20],t1[100][20],t2[100][20],*temp1;
	scanf("%d",&teams); 
	for(i=0;i<teams;i++){
		scanf("%s",names[i]); 
	}
	scanf("%d",&matches); 
	for(i=0;i<matches;i++){
		scanf("%s %s %d %d",t1[i],t2[i],&s1[i],&s2[i]);
	}
	for(i=0;i<matches;i++){
		if(strcmp(t1[i],t2[i]) == 0){
			printf("Invalid Input");
			return 0;
		}
	}
	for(i=0;i<teams;i++){
		for(j=0;j<matches;j++){
			if((strcmp(names[i],t1[j]) == 0)||(strcmp(names[i],t2[j]) == 0)){
				matchcount[i]++;
				if(strcmp(names[i],t1[j]) == 0){
					gf[i] = gf[i]+s1[j];
					ga[i] = ga[i]+s2[j];
					if(s1[j]>s2[j])
						pts[i] +=2;
					if(s1[j] == s2[j])
						pts[i] +=1;
				}
				else{
					gf[i] = gf[i]+s2[j];
					ga[i] = ga[i]+s1[j];
					if(s1[j]<s2[j])
						pts[i] +=2;
					if(s1[j] == s2[j])
						pts[i] +=1;
				}
			}
		}
	}
	for(i=0;i<teams;i++){
		if(matchcount[i]>2){
			printf("Invalid Input");
			return 0;
		}
	}
	for(i=0;i<(teams-1);i++){
		for(j=0;j<(teams-i-1);j++){
			if(pts[j]<pts[j+1]){
				temp = pts[j];
				pts[j] = pts[j+1];
				pts[j+1] = temp;
				
				temp1 = (char*)malloc(50);
				strcpy(temp1,names[j]);
				strcpy(names[j],names[j+1]);
				strcpy(names[j+1],temp1);
				
				temp = gf[j];
				gf[j] = gf[j+1];
				gf[j+1] = temp;
				
				temp = ga[j];
				ga[j] = ga[j+1];
				ga[j+1] = temp;
				
				temp = matchcount[j];
				matchcount[j] = matchcount[j+1];
				matchcount[j+1] = temp;
			}
		}
	}
	for(i=0;i<teams;i++)
		gd[i] = gf[i] - ga[i];
	for(i=0;i<teams;i++)
		printf("%s %d %d %d %d %d\n",names[i],matchcount[i],gf[i],ga[i],gd[i],pts[i]);
	return 0;
}
