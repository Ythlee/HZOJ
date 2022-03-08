#include <stdio.h>

int main(int argc, char *argv[])
{
	char x;
	scanf("%c", &x);
	if(x == 'a')
		printf("It is good");
	else if(x == 'b'){
		printf("OMG");
	}
	else{
		printf("Yes!");
	}
	return 0;
}
