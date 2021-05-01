   #include<stdio.h>
	int main()
	{
		int n,max,min;
		scanf("%d",&n);
		int a[n];
		scanf("%d",&a[0]);
		max = a[0];
		min = a[0];
		for(int i =1;i<n;i++)
		{	 
			scanf("%d",&a[i]);
			if (max<a[i]){
				max = a[i];
			}
			if(min>a[i]){
				min = a[i];
			}
				
		} 
		printf("%d %d",max,min);
	}
