#include <stdio.h>
#include <stdlib.h>

int main(){
	int angka;
	int frek;
	frek=0;
	
	do{
		scanf("%d",angka);
		frek++;
	}while(angka>=0);
	
	if(frek>1){
		printf("%d",0);
	}else{
		printf("%d\n",frek);
	}
	
	return 0;
}
