#include <stdio.h>

int IsWithinRange(float X,float min,float max);

int main(){
	/*kamus*/
	float IP,sumIP;
	int nMhs,nLulus;
	
	/*algoritma*/
	nMhs=0;
	nLulus=0;
	sumIP=0;
	IP=0;
	
	while (IP!=-999){
		scanf("%f",&IP);
		if (IsWithinRange(IP,0,4)){
			if (IsWithinRange(IP,2.75,4)){
				nLulus++;
			}
			nMhs++;
			sumIP+=IP;
		}
	}
	if (nMhs==0){
		printf("Tidak ada data\n");
	}
	else {
		printf("%d\n%d\n%d\n%.2f\n",nMhs,nLulus,nMhs-nLulus,sumIP/(float)nMhs);
	}
	
	return 0;
}

int IsWithinRange(float X,float min,float max){
	if (X >=min && X<=max) {
		return 1;
	}else{
		return 0;
	}
}
