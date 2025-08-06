#include"stdio.h"
#include"omp.h"

static void fn_helloworld_prl() {
#pragma omp parallel
	{
	printf("Helloworld_A\n");
	printf("Helloworld_B\n");
	}
}



void fn_helloworld_srl() {
	printf("Hello World Serial\n");
}
