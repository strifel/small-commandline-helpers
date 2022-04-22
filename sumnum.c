#include <stdio.h>

int main(void) {
	int i = 0;
	int in = 0;
	while (1) {
		scanf("%d", &in);
		if (feof(stdin)) break;
		i += in;
	}
	printf("%d\n", i);
} 
