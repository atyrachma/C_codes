#include <stdio.h>

const float min=0; 
	  float max=4;
	  float stop=-999;

int IsWithinRange(float X,float min,float max);

int main(){
	/*kamus*/
	//int i; //counter
	float IP,rata2;
	int range,nLulus,nMhs;
	
	/*algoritma*/
	nMhs=0;
	nLulus=0;
	rata2=0;
	
	scanf("%f",&IP);
	if(IP == stop){
		printf("Tidak ada data\n");
	} else {
		do {
			range=IsWithinRange(IP,min,max);
			if (range == 1) {
				nMhs = nMhs + 1;
				rata2 = (rata2*(nMhs-1) + IP)/nMhs;
				if (IP >= 2.75) {
					nLulus = nLulus + 1;
				}
			} 
			scanf("%f",&IP);
		} while (IP != stop);
		printf("%d\n%d\n%d\n%.2f\n",nMhs,nLulus,nMhs-nLulus,rata2);
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
