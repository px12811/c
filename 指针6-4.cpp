#include <stdio.h>
#define MAXN 10

void sort( int a[], int n ){
	int max,temp;
	for(int i=0;i<n-1;i++)
	{
		max=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[max]>a[j])
				max=j;
		}
		temp = a[max];a[max]=a[i];a[i]=temp;
		
	}
}

int main()
{
    int i, n;
    int a[MAXN];

    scanf("%d", &n);
    for( i=0; i<n; i++ )
        scanf("%d", &a[i]);

    sort(a, n);

    printf("After sorted the array is:");
    for( i = 0; i < n; i++ )
        printf(" %d", a[i]);
    printf("\n");

    return 0;
}

/* 你的代码将被嵌在这里 */
