#include <stdio.h>

int main(int argc, char *argv[])
{
	int a;
	scanf("%d",&a);
	
	if(a <= 3){
		printf("14");
	}
	else{
		printf("%.1lf\n",(a-3) * 2.3 + 14) ;
	}

	return 0;
}
