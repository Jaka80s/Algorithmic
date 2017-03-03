#include<stdio.h>
struct student
{
	char name[21];
	char score;
};

int main()
{
	struct student a[100], t;
	int i, j, n;
	scanf("%d", &n);                             //輸入一個數n 
	for(i=1; i<=n; i++)                         //迴圈讀入n個人名和分數 
		scanf("%s %d", a[i].name, &a[i].score); 
	
	//按分數從高到低進行排序 
	for(i=1; i<=n-1; i++){
		for(j=1; j<=n-i; j++){
			if(a[j].score < a[j+1].score)       //對分數進行比較
			{ t=a[j]; a[j]=a[j+1]; a[j+1]=t; } 
		}
	}
	
	for(i=1; i<=n; i++)                       //輸出人名 
		printf("%s\n\n", a[i].name);
	getchar();getchar();
	return 0;
}
