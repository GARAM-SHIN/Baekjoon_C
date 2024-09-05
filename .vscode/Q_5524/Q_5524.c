// 입실 관리

#include <stdio.h>
#include <string.h>

int main(void) {
    int N;
    char arr[21];

    scanf("%d", &N);
    
    while(N--)
    {
        scanf("%s", arr);
        
        for(int i=0;i<strlen(arr);i++)
        {
            if(arr[i]>='A' && arr[i]<='Z')
            {
                arr[i]+=32;
            }
        }

        printf("%s\n", arr);
    }

    return 0;
}