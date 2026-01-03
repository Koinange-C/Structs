#include <stdio.h>

/*Struct has the capability to store more than one element of different types and this is how it is declared*/
struct {
	char *engine;
} car1, car2;
int main() {
	car1.engine = "DDis 190 Engine";
	car2.engine = "1.2 L Kappa Dual VTVT";
	printf("%s\n", car1.engine);
	printf("%s\n", car2.engine);
	return 0;
}
