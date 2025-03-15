#include <stdio.h>

unsigned int eleva2(unsigned int e){
	e = e<<1;
	return e;
}

int main(){
	printf("%d\n", eleva2(5));
	printf("%d\n", eleva2(7));
}
