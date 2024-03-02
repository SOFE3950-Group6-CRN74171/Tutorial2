#include <stdio.h>

int main() {

double arr[5] = {1.2, 5.5, 2.1, 3.3, 3.3};

printf("In the following array: \n");

for (int i = 0; i < 5; i++)
	printf("%.1f ", arr[i]);
	
printf("\n");

for (int i = 1; i < 5; i++) {
        if (arr[i] > arr[i - 1]) {
            printf("%.1f is greater than %.1f\n", arr[i], arr[i - 1]);
        } else if (arr[i] < arr[i - 1]) {
            printf("%.1f is less than %.1f\n", arr[i], arr[i - 1]);
        } else {
            printf("%.1f is the same as %.1f\n", arr[i], arr[i - 1]);
        }
    }
return 0;
}
