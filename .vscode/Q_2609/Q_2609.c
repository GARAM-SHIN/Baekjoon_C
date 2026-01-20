// 최대공약수와 최소공배수

#include <stdio.h>

int gcd(int A, int B)
{
    if (B == 0) return A;
    else return gcd(B, A % B);}

int main()
{
    int A, B;
    int maxdiv, minmul;
    int temp;

    scanf("%d %d", &A, &B);

    if (A < B)
    {
        temp = B;
        B = A;
        A= temp;
    }

    maxdiv = gcd(A, B);
    minmul = (A * B) / gcd(A, B);

    printf("%d\n%d\n", maxdiv, minmul);

    return 0;
}