#include <stdio.h>
#include <stdlib.h>

int main(){
	int N;
	int i,j;
	int kuad;
	int sumkuad[5];
	int sumcol[5][5];
	
	for(i=0;i<5;i++){
		sumkuad[i]=0;
		for(j=0;j<5;j++){
			sumcol[i][j]=0;
		}
	}
	
	scanf("%d",&N);
	int x[N],y[N],col[N];
	
	for(i=0;i<N;i++){
		scanf("%d %d %d",&x[i],&y[i],&col[i]);
		if (x[i]==0 || y[i]==0){
			sumkuad[0]++;
			for(j=0;j<5;j++){
				if (col[i]==j+1){
					sumcol[0][j]++;
				}
			}

		}else if (x[i]>0 && y[i]>0){
			sumkuad[1]++;
			for(j=0;j<5;j++){
				if (col[i]==j+1){
					sumcol[1][j]++;
				}
			}
		}else if (x[i]<0 && y[i]>0){
			sumkuad[2]++;
			for(j=0;j<5;j++){
				if (col[i]==j+1){
					sumcol[2][j]++;
				}
			}
		}else if (x[i]<0 && y[i]<0){
			sumkuad[3]++;
			for(j=0;j<5;j++){
				if (col[i]==j+1){
					sumcol[3][j]++;
				}
			}
		}else{
			sumkuad[4]++;
			for(j=0;j<5;j++){
				if (col[i]==j+1){
					sumcol[4][j]++;
				}
			}
		}
	}
	
	for (i=0;i<5;i++){
		if (sumkuad[i]!=0){
			printf("%d=%d\n",i,sumkuad[i]);
			for(j=0;j<5;j++){
				printf("[%d]%d\n",j+1,sumcol[i][j]);
			}
		}
	}
	return 0;
}
