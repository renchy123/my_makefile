#include "common.h"
#include "main.h"

#include "dlib.h"
#include "slib.h"

int main(void)
{
	printf("%s\n", MAIN_STR);
	common();
	module();

	printf("%s\n", dlib_name());
	printf("1+2 = %d\n",add(1,2));

	printf("%s\n", slib_name());
	printf("3*4 = %d\n",multi(3,4));

	return 0;
}
