// 세수정렬 _F

#include <stdio.h>

int main() {
    int num[3];
    int min, index, temp;

    for(int i=0; i<3; i++ )
    {
        scanf("%d", &num[i]);
    }

    for(int j=0; j<3; j++) 
    {
        min = 1000001;
        for(int k=j; k<3; k++) {
            if(num[k] < min) {
                min = num[k];
                index = k;
            }
        }
        temp = num[j];
        num[j] = num[index];
        num[index] = temp;
    }

    for(int i=0; i<3; i++) 
    {
        printf("%d ", num[i]);
    }

    return 0;
}