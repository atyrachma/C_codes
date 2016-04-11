#include <stdio.h>

int main(){
	char *str;
	char *str1;
	printf("Baca string 20kar\n");
	str=(char*)malloc(20*sizeof(char));
	printf("Masukan string 20 kar\n");
	scanf("%s",str);
	return 0;
}
