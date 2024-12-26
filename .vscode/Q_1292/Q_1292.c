// 쉽게 푸는 문제

#include <stdio.h>

int main(){
	int arr[1001];
    int k=1,A,B;
    int sum=0;

	for(int i=1; i<=1000; i++)
    {
		for(int j=1; j<=i; j++){
			arr[k]=i;
			if(k>1000){
				break;
			}
			k++;
		}
	}

	scanf("%d %d",&A,&B);

	for(int i=A; i<=B; i++){
		sum+=arr[i];
	}

	printf("%d",sum);
}
