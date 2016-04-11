#include<stdio.h>

int main(){
	int N;
	int i; //counter
	float real,sum;
	
	sum=0;
	
	scanf("%d",&N);
	if (N>0){
		for(i=1;i<=N;i++){
			scanf("%f",&real);
			sum+=real;
		}
		printf("%.2f\n%.2f\n",sum,(sum/(float)N));
	}
	return 0;
}
