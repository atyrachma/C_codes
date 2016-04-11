#include<stdio.h>
#include<stdlib.h>
int main(){
	int y,z;
	int n0=0;
	int n1=0;
	int n2=0;
	int n3=0;
	int n4=0;
	int n5=0;
	int n6=0;
	int n7=0;
	int n8=0;
	int n9=0;
		
	int sisa;
	int cek=0;
	int sum=0;
	do{
		scanf("%d",&y);
		z=y;
		if (y>0){
			cek=1;
			sum++;
			while(y>0){
				sisa=y%10;
				y=y/10;
				
				switch(sisa){
					case 0 : n0++;break;
					case 1 : n1++;break;
					case 2 : n2++;break;
					case 3 : n3++;break;
					case 4 : n4++;break;
					case 5 : n5++;break;
					case 6 : n6++;break;
					case 7 : n7++;break;
					case 8 : n8++;break;
					case 9 : n9++;break;
				}
			}
		}else if (y==0){
			cek=1;
			sum++;
			n0++;
		}
		
	}while(z>=0);

	
	if (n0==0 && n1==0 && n2==0 && n3==0 && n4==0 && n5==0 && n6==0 && n7==0 && n8==0 && n9==0 && cek==0){
		printf("0\n");
	}else{
		printf("%d\n",sum);
		if (n0!=0){
			printf("%d : %d\n",0,n0);
		}
		if (n1!=0){
			printf("%d : %d\n",1,n1);
		}
		if (n2!=0){
			printf("%d : %d\n",2,n2);
		}
		if (n3!=0){
			printf("%d : %d\n",3,n3);
		}
		if (n4!=0){
			printf("%d : %d\n",4,n4);
		}
		if (n5!=0){
			printf("%d : %d\n",5,n5);
		}
		if (n6!=0){
			printf("%d : %d\n",6,n6);
		}
		if (n7!=0){
			printf("%d : %d\n",7,n7);
		}
		if (n8!=0){
			printf("%d : %d\n",8,n8);
		}
		if (n9!=0){
			printf("%d : %d\n",9,n9);
		}
	}
	
	return 0;
}

