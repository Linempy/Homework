#include "fillOfArray.h"


void fillOfArray(int *a, size_t n) {
	int *p, *e;

	for (p = a, e = p + n; p < e; ++p) {
		scanf_s("%d", p);
	}
}
