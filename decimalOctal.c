
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int decimal=0;
	int octal[8];
	int i=0;
	printf("Escribe un numero decimal\n-->");
	scanf("%d",&decimal);
	while(decimal>=8){
		octal[i]=decimal%8;
		decimal=decimal/8;
		i++;
	}
	octal[i]=decimal;
	int j=0;
	for(j=i;j>=0;j--){
		printf("%d",octal[j]);
	}
	return 0;
}
