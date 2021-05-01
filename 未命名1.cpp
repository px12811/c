 #include<stdio.h>
int main()
	{
		int mid,n,max,min,x,max_i,min_i,count =0;
		int a[n];
		scanf("%d",&n);
		count =0;
		for(int i =0;i<n;i++)
		{	 
			scanf("%d",&a[i]);		
		} 
		max = a[0];
		min = a[n-1];
		 for(int i=0;i<n;i++)
		 {
			 if(min>=a[i]){
			 	min = a[i];
			 	min_i=i;
			 }
		 }
		mid=a[0];
		a[0]=a[min_i];
		a[min_i]=mid;
		 for(int i=0;i<n;i++)
		 {
			 if(max<=a[i]){
			 	max = a[i];
			 	max_i = i;
			 }
		 }
		mid=a[n-1];
		a[n-1]=max;
		a[max_i]=mid;
			
		for(int i =0;i<n;i++)
		{	 
			printf("%d ",a[i]);		
		}
		return 0;
    }
   
