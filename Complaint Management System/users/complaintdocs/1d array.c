
#include <stdio.h>
int main()
{
    int arr[5] = { 1, 2, 4, 8, 16 };
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    arr[3] = 9721;
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
