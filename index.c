#include <stdio.h>

int main() {
    int data[5] = {10, -1, 20, -1, 60}, sum = 0, count = 0, i;

    for(i = 0; i < 5; i++)
        if(data[i] != -1)
            sum += data[i], count++;

    int avg = sum / count;

    for(i = 0; i < 5; i++)
        if(data[i] == -1)
            data[i] = avg;

    for(i = 0; i < 5; i++)
        printf("%d ", data[i]);

    return 0;
}
