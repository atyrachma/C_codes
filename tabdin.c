#include <stdio.h>
#include <stdlib.h>

int main(){
	int i;
	int *tab=(int*)malloc(10*sizeof(int));
	printf("Tabel sudah dialokasi dinamik\n");
	for(i=0;i<10;i++){
		*(tab+i)=i;
		printf("Nilai tabel ke %2d : %d\n",i,*tab+i);
	}
	return 0;
}
	
