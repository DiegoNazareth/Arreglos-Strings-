#include<stdio.h>
#include<string.h>

int main(){
	int i;
	char nombres[5][201];
	for(i=0;i<5;i++){
		printf("Dame el nombre\n");
		fgets(nombres[i],sizeof(nombres[i]), stdin);
	}
	for(i=0;i<5;i++){
		printf("%s\n", nombres[i]);
	}
	return(0);
}
