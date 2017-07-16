# include<stdio.h>
int main()
{
	int dog_no,cat_no,test,c;
	int count=0;
	
	scanf("%d %d",&dog_no,&cat_no);
	while(1)
	{
		if(dog_no==cat_no)
		{
			count++;
			break;
		}

		else if(dog_no == cat_no+1 || dog_no+1 == cat_no)
		{
			count++;
			break;
		}
		
		else
		{
			if(dog_no>cat_no)
			{
				if(cat_no==0)
				{
				    count=-1;
					break;
				}
				c = cat_no;
				cat_no = c-1;
				dog_no = c+1;
				count ++;	
			}
			
			else
			{
				if(dog_no==0)
				{
				   count=-1;
					break;
				}
				c = dog_no;
				dog_no = c-1;
				cat_no = c+1;
				count++;	
			}
		}
		
	}
	
	printf("%d",count);
	
	return(0);
}
