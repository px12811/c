#include <stdio.h>
int main()
{    int a[100],t,i,j,p,k,n,count=0,flag=0,x,left,right,mid,*q,temp,min;//�������Ҫ�������������������ٶ��� 
    char c;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    c=getchar();
    while(c!='X')
    {
        switch(c)
        {
            case 'A': //��С����ð������n��������n-1�ˣ����ÿ����������ÿ�˽�����ݼ��ÿո�����ÿ�˽����軻�� 
                printf("ð������:\n");
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
            case 'B': //��С����ѡ������n��������n-1�ˣ����ÿ����������ÿ�˽�����ݼ��ÿո�����ÿ�˽����軻�� 
                printf("ѡ������:\n");
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
            case 'C'://��С����ֱ�ӽ�������n��������n-1�ˣ����ÿ����������ÿ�˽�����ݼ��ÿո�����ÿ�˽����軻�� ��
                printf("ֱ�ӽ�������:\n");
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
            case 'D': //***ѡ������С�����������n��������n-1�ˣ����ÿ����������ÿ�˽�����ݼ��ÿո�����ÿ�˽����軻�С�
                printf("��������:\n");
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
            //��������һ������x�����۰���ҷ������Ƿ��������д���x������������x���ڵ��±꣬������ȽϵĴ���,���û�ҵ������no��
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
