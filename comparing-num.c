#include<stdio.h>
#include<stdlib.h>
int Min(int, int); 
int main(){
	int x, y;
	while(scanf("%d%d", &x, &y) != EOF){
		printf("%d\n", Min(x, y));
	}
}

int Min(int a, int b){
	if(a < b) return a;
	else return b;
}

