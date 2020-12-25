#include <stdio.h>

int main() {
	int x1 = -1, x2 = -1, x3 = -1, x4 = -1;

	int c1, c2, c3, c4;

	for (c1 = 0; c1 < 9; c1++) {
		x1++;
		x2 = -1;
		for (c2 = 0; c2 < 9; c2++) {
			x2++;
			x3 = -1;
			for (c3 = 0; c3 < 9; c3++) {
				x3++;
				x4 = -1;
				for (c4 = 0; c4 < 9; c4++) {
					x4++;
					//printf("%d, %d, %d, %d : ", x1, x2, x3, x4);
					if (x1 + x2 == 6)
						if (x1 + x3 == 6)
							if (x3 + x4 == 8)
								printf("%d, %d, %d, %d\n", x1, x2, x3, x4);
				//	printf("\n");
				}
			}
		}
	}
	printf("end");
}