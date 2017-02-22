#include<stdio.h>
int main()
{
	int a[11], i, j, t;

	for(i=0; i<=10; i++)
		a[i]=0;                    //初始化為0

	for(i=1; i<=5; i++)            //迴圈讀入5個數
	{
		scanf("%d", &t);           //把每一個數讀到變數t中
		a[t]++;
	}

	for(i=0; i<=10; i++)           //依次判斷a[0]~a[10]
		for(j=1; j<=a[i]; j++)     //出現了幾次就列印幾次
			printf("%d", i);

	getchar(); getchar();
	//這裡的getchar(); 用來暫停程式，以便查看程式的內容
	//也可以用system("pause");等來代替
	return 0;
}