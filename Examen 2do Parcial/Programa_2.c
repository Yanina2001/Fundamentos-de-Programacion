#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char pal1[20], pal2[20], palfinal[40];
	int i;
	
	printf("Digita la primer palabra a combinar: \n");
	scanf("%s", pal1);
	printf("Digita la segunda palabra a combinar: \n");
	scanf("%s", pal2);
	
	for(i = 0; i < 20; i++){
		palfinal[(i*2)]= pal1[i];
		palfinal[(i*2)+1]=pal2[i];
	}
	
		printf("%s",palfinal);

	return(0);
}






