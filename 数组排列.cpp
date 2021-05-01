   #include<stdio.h>
   void select_sort(int a[],int n)
   {
   		
   		for(int i =0;i<n-1;i++){
   		int	min_index = i;
   			for(int j=i+1;j<n;j++)
   			{
   				if(a[j]<a[min_index])
   				{
   					min_index = j;
				   }
			   }
			if(i !=min_index){
				int mid_vari = a[i];
				a[i] = a[min_index];
				a[min_index] = mid_vari;
				
			}
		   }
   }
	int main()
	{
		int n,x,count =0;
		scanf("%d",&n);
		int a[n];
		count =0;
		for(int i =0;i<n;i++)
		{	 
			scanf("%d",&a[i]);		
		} 
		select_sort(a,n);
		for(int i =n;i>0;i--)
		{
			printf("%d",a[i-1]);
			count ++;
			if(count<n){
				printf(" ");
			}
		}
	

    }
   

