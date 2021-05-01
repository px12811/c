#include <stdio.h>
int main()
{    int a[100],t,i,j,p,k,n,count=0,flag=0,x,left,right,mid,*q,temp,min;//如果还需要定义其他变量，自行再定义 
    char c;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    c=getchar();
    while(c!='X')
    {
        switch(c)
        {
            case 'A': //从小到大冒泡排序，n个数请做n-1趟，输出每趟排序结果，每趟结果数据间用空格间隔，每趟结束需换行 
                printf("冒泡排序:\n");
				q = a;
				for(i=0;i<n-1;i++)
				{
					for(j=0;j<n-1;j++)
					{
						if(a[j]>a[j+1])
						{
							temp=a[j];a[j]=a[j+1];a[j+1]=temp;
						}
					}
					
					for(q=a;q<a+n;q++)
					printf("%d ",*q);
					printf("\n");
				 } 


                break;
            case 'B': //从小到大选择排序，n个数请做n-1趟，输出每趟排序结果，每趟结果数据间用空格间隔，每趟结束需换行 
                printf("选择排序:\n");
                  for(i=0;i<n-1;i++)
                {
                	min = i;
                	for(j=i+1;j<n;j++)
                	{
                		if(a[min]>a[j])
                			min = j;
					}
		
				temp = a[i];a[i]=a[min];a[min]=temp;
				for(q=a;q<a+n;q++)
					printf("%d ",*q);
					printf("\n");	
				
}

                break;
            case 'C'://从小到大直接交换排序，n个数请做n-1趟，输出每趟排序结果，每趟结果数据间用空格间隔，每趟结束需换行 。
                printf("直接交换排序:\n");
	        	    for(i=0;i<n-1;i++)
                {
                	
                	for(j=i+1;j<n;j++)
                	{
                		if(a[i]>a[j]){
                		temp = a[i];a[i]=a[j];a[j]=temp;
					}
				}
			
				for(q=a;q<a+n;q++)
					printf("%d ",*q);
					printf("\n");



			}
                break;
            case 'D': //***选做，从小到大插入排序，n个数请做n-1趟，输出每趟排序结果，每趟结果数据间用空格间隔，每趟结束需换行。
                printf("插入排序:\n");
				for(i=1;i<n;i++)
				{
					
						temp = a[i];
						for(j=i-1;j>=0&&a[j]>temp;j--)
							a[j+1]=a[j];
						a[j+1]=temp;	
					
					for(q=a;q<a+n;q++)
					printf("%d ",*q);
					printf("\n");
				}



                break;
            case 'E': 
            //请先输入一个整数x，用折半查找法查找是否在数组中存在x，如果存在输出x所在的下标，并输出比较的次数,如果没找到输出“no”
				scanf("%d",&x);
				left = 0;right=n-1;
				while(left<=right){
				mid  = (left+right)/2;
				if(a[mid]>x){	
					right=mid-1;
					count++;
					//printf("a[mid]=%d right=%d\n",a[mid],right);
				}
				else if(a[mid]<x){
					left=mid+1;
					count++;
					//printf("a[mid]=%d left=%d\n",a[mid],left);	
				}
				else {
					flag=1;
					break;
				}
			}
				if(flag) printf("%d %d\n",mid,count+1);
				else printf("no\n");
                break;
        }
        c=getchar();
    }
}
