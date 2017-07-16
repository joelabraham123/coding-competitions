# include<stdio.h>
void main()
{
	int dog_no,cat_no,test,c,i;
	int count=0;
	
	scanf("%d",&test);
	for(i=0;i<test;i++)
	{
	
	scanf("%d %d",&dog_no,&cat_no);
	while(1)
	{
		if(dog_no==cat_no||dog_no == cat_no+1 || dog_no+1 == cat_no)
		{
			count++;
			break;
		}
		
		else if((dog_no>2*cat_no)||(cat_no>2*dog_no))
		{
			count=-1;
			break;
		}
		else if((dog_no ==cat_no+2)||(cat_no==dog_no+2))
		{
			count=2;
			break;
		}
		else
		{
			if(dog_no>cat_no)
			{
				if(dog_no==2*cat_no)
				{
					count=cat_no;
					break;
				}
				else
				
				{
					count=cat_no-1;
					break;
				}
			}
			
			else
			{
					if(cat_no==dog_no*2)
				{
					count=dog_no;
					break;
				}
				else
				{
					count=dog_no-1;
					break;
				}	
			}
		}
		
	}

	printf("%d",count);
}
	return;
}
