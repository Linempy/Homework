#include <stdio.h>
#include "fillOfArray.h"


int main() {
	size_t n;
	int array[MAX_LEN] = {0};

	printf("������� ���-�� ��������� �������: ");
	scanf_s("%zu", &n);

	fillOfArray(array, n);

}