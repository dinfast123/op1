#include "OP1.h"
#include "OP2.h"
#include <stdio.h>
int main(int argc, char ** argv){
	int eg = 0;
	printf("1.simple demo\n");
	printf("2.3d graph algorithm\n");
	printf("please input a number to choose demo:");
	scanf_s("%d",&eg);
	switch (eg)
	{
	case 1:
		return OP1::run();
	case 2:
		return OP2::run();
	default:
		return OP2::run();
		break;
	}
	
}