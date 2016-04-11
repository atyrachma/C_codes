#include<stdio.h>

int main(){
	int x,y,z;
	int n=0;
	int sisa;
	int cek=0;

	scanf("%d",&x);
	do{
		scanf("%d",&y);
		z=y;
		if (y>0){
			cek=1;
			while(y>0){
				sisa=y%10;
				y=y/10;
				if(sisa==x){
					n++;
				}
			}
		}
	}while(z>=0);

	
	if (n==0 && cek==0){
		printf("Tidak ada bilangan\n");
	}else{
		printf("%d\n",n);
	}
	return 0;
}
