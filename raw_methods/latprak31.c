#include <stdio.h>
#include <stdlib.h>

int cekKar(char kar);

int main(){
	int i,N,pil;
	int voc,cons,numb,chara;
	char kar;
	voc=0;
	cons=0;
	numb=0;
	chara=0;
		
	do{
		scanf("%d",&N);
		if (N<=0){
			printf("Masukan salah\n");
		}
	}while (N<=0);
					
	if (N>0){
		for (i=1;i<=N;i++){
			scanf("\n%c",&kar);
			switch(cekKar(kar)){
				case 1 : voc++;break;
				case 2 : cons++;break;
				case 3 : numb++;break;
				case 4 : chara++;break;
			}
		}
	printf("%d\n%d\n%d\n%d\n",voc,cons,numb,chara);
	}
	return 0;
}

int cekKar(char kar){
	if((kar>='a' && kar<='z') || (kar>='A' && kar<='Z')){
		if(kar=='a' || kar=='A' || kar=='i' || kar=='I' || kar=='u' || kar=='U' || kar=='e' || kar=='E' || kar=='o' || kar=='O'){
			return 1;
		}else{
			return 2;
		}
	}else if((kar>='0' && kar<='9')){
		return 3;
	}else{
		return 4;
	}
}
