#define _CRT_SECURE_NO_WARINGS
#include<stdio.h>
int main() {
	int a;
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			printf("*");
		}
		if (i < a - 1) {
			printf("\n");
		}
	}
	return 0;
}