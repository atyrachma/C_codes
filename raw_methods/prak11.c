#include<stdio.h>

int main(){
	int i,j; //counter
	int N;
	char C1,C2;
	
	scanf("%d\n%c\n%c",&N,&C1,&C2);
	
	if (N>0 && C1!=C2){
		for(i=1;i<=N;i++){
			if (i==1){
				for(j=1;j<=N;j++){
					printf("%c",C1);
				}
			}else if(i==N){
				for(j=1;j<=N;j++){
					printf("%c",C1);
				}
			}else{
				printf("%c",C1);
				for(j=1;j<=N-2;j++){
					printf("%c",C2);
				}
				printf("%c",C1);
			}
			printf("\n");
		}
	}else{
		printf("Masukan tidak valid\n");
	}
	return 0;
}

