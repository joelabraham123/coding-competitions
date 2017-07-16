#include <stdio.h>
#include<math.h>
void main()
{
	float va,vb,da,db,dist;
	int time;
	;
	printf("Enter da,db,va,vb :");
	scanf("%f %f %f %f",&da,&db,&va,&vb);
	if(va<0||vb<0||da<0||db<0)
	{
		printf("Invalid Input");
	}
	else if(va==vb&&da==db)
	{
		printf("min distance : 0");
	}
	else
	{
	time=(da*va+db*vb)/(va*va+vb*vb);
	time++;
	dist=((da-time*va)*(da-time*va)+(db-time*vb)*(db-time*vb));
	dist=pow(dist,0.5);
	printf("min distance : %f",dist);
	}
}
