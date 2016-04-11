#include <stdio.h>
#include <math.h>
#include "point.h"

int main(){
	point P;
	int kode;
	float input1,input2;
	
	BacaPOINT(&P);
	do{
		scanf("%d",&kode);
		
		if (kode==0){
			TulisPOINT(P);
		}else if(kode==1){
			scanf("%f %f",&input1,&input2);
			Translasi(&P,input1,input2);
			TulisPOINT(P);
		}else if(kode==2){
			scanf("%f",&input1);
			Putar(&P,input1);
			TulisPOINT(P);
		}else if(kode==3){
			Mirror(&P,true,false);
			TulisPOINT(P);
		}else if(kode==4){
			Mirror(&P,false,true);
			TulisPOINT(P);
		}else{
			printf("Kode operasi salah\n");
		}
	}while(kode!=0);
	
	return 0;
}
