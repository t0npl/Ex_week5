#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	int b;
	char a[100];
	scanf("%s", a);
	b = strlen(a);
	for (int i = 0; i < b; i++) {
		if (a[i] >= 65 && a[i] <= 90 || a[i] >= 97 && a[i] <= 122) {
			printf("%c", a[i]);
		}
		else {
			printf(" ");
		}
	}
	return 0;
}