// 너의 평점은 : 열심히 문제를 푸시는 여러분은 A+입니다. _F

#include <stdio.h>

int main(void) 
{
    char name[51];
    char grade[3];
    double avg=0.0, credit=0.0, sumCredit=0.0, sum = 0.0;

    for (int i = 0; i < 20; i++){
        scanf("%s %lf %s", name, &credit, grade);

        if (grade[0] == 'P') {
            continue;
        } 
        sumCredit += credit;
        if (grade[0] == 'F') {
            continue;
        }
        else if (grade[0] == 'A') {
            sum = 4.0;
        }
        else if (grade[0] == 'B') {
            sum = 3.0;
        }
        else if (grade[0] == 'C') {
           sum = 2.0;
        }
        else {
            sum = 1.0;
        }
        if (grade[1] == '+') {
            sum += 0.5;
        }
        avg += credit * sum;
    }

    printf("%lf", avg / sumCredit);

    return 0;
}