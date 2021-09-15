#include <stdio.h>
void debug_func(void){
	static int debug_flag = 0;
	fprintf(stderr, "Debug flag-%d triggered\n", debug_flag++);
}
int main(){
	debug_func();
	printf("hello world\n");
	debug_func();
	return 0;
	debug_func();
}
