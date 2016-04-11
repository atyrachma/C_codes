#include <stdio.h>

int main(){
	int a,b,c;
	int max;
	
	scanf("%d\n%d\n%d",&a,&b,&c);
	printf("%d\n",a+b+c);
	
	max=a;
	if (b>max){
		max=b;
		if (c>max){
			max=c;
		}
	}else{
		if (c>max){
			max=c;
		}
	}
	
	printf("%d\n",max);
	return 0;
}
