#include <stdio.h>
#include <stdlib.h>

int main(){
	int N;
	int i,j,temp;
	int frek,max,min;
	float med;
	int X;
	
	scanf("%d",&N);
	
	int arrN[N];
	int arrIdx[N];
	
	for(i=0;i<N;i++){
		scanf("%d",&arrN[i]);
	}
	scanf("%d",&X);
	
	frek=0;
	for(i=0;i<N;i++){
		if(arrN[i]==X){
			arrIdx[frek]=i;
			frek++;
		}
	}
	//sorting
	for(i=1;i<=N;i++){
		temp = arrN[i];
		j = i-1;
		while(arrN[j]>temp && j>=0){
			arrN[j+1] = arrN[j];
			j--;
		}
		arrN[j+1] = temp;
	}
	
	if(N % 2 == 0){
		med=(float)(arrN[(int)N/2-1]+arrN[(int)N/2])/2;
	}else{
		med=(float)arrN[(int)(N-1)/2];
	}
	min=arrN[0];
	max=arrN[N-1];
	
	if(frek>0){
		printf("%d\n",frek);
		
		for(i=0;i<frek;i++){
			if(i==frek-1){
				printf("%d\n",arrIdx[i]);
			}else{
				printf("%d,",arrIdx[i]);
			}
		}
		
		if(X==max){
			printf("maksimum\n");
		}
		if(X==min){
			printf("minimum\n");
		}
		if((float)X==med){
			printf("median\n");
		}
	}else{
		printf("%d tidak ada\n",X);
	}
	return 0;
}
