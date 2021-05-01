   #include<stdio.h>
	int main()
	{	
		int max ,min;
		int a[1000];
		int i =0;
	while(scanf("%d",&a[i]))
	{
		if (a[i]==-10000){
			break;
		}
		i = i+1;
	}
	max = a[0];min=a[0];
	
	for(int k=0;k<i;k++)
	{
		if (max<a[k]){
				max = a[k];
			}
			if(min>a[k]){
				min = a[k];
				}
	}
	printf("%d %d",max,min);
	}
