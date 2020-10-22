
#include <float.h>
#include <stdio.h>

int main() {
	printf("Float32 machine epsilon: %.7e\n", __FLT_EPSILON__);
    printf("Float62 machine epsilon: %.15e\n", __DBL_EPSILON__);

    printf("Float32 max: %.7e\n", __FLT_MAX__);
    printf("Float62 max: %.15e\n", __DBL_MAX__);
	return 0;
}