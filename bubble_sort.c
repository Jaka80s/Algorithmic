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
	scanf("%d", &n);                             //��J�@�Ӽ�n 
	for(i=1; i<=n; i++)                         //�j��Ū�Jn�ӤH�W�M���� 
		scanf("%s %d", a[i].name, &a[i].score); 
	
	//�����Ʊq����C�i��Ƨ� 
	for(i=1; i<=n-1; i++){
		for(j=1; j<=n-i; j++){
			if(a[j].score < a[j+1].score)       //����ƶi����
			{ t=a[j]; a[j]=a[j+1]; a[j+1]=t; } 
		}
	}
	
	for(i=1; i<=n; i++)                       //��X�H�W 
		printf("%s\n\n", a[i].name);
	getchar();getchar();
	return 0;
}
