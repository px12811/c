 #include<stdio.h>
int main()
	{
		int mid=0,n,max,min,max_i=0,min_i=0;
		int a[n];
		scanf("%d",&n);
		if(n==2){
		scanf("%d %d", &a[0],&a[1]);
		}
		else{
		max = a[0];
		min = a[0];
	    scanf("%d", &a[0]);
		for(int i =1;i<n;i++)
		{	 
			scanf("%d",&a[i]);	
			if(min>a[i])
			{
			 	min = a[i];
			 	min_i=i;	
			} 
			if(max<a[i])
			{
				max = a[i];
				max_i = i;
		 	}
		}
	}
		mid = a[min_i];a[min_i]=a[0];a[0]=mid;
		mid = a[max_i];a[max_i]=a[n-1];a[n-1]=mid;
			
		for(int i =0;i<n;i++)
		{	 
			printf("%d ",a[i]);		
		}
	return 0;
    }
   
 
