#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b) {
	// 이거는 한 줄로 구현 가능함.(인라인 ㄱㄴ)
}

int main()
{
	double a[100];//실수가 입력될 배열 
	double max=0, min=100;//최대값과 최소값이 들어갈 실수형 변수 
	int i, n;//반복문에 필요한 것들
	double sum = 0;
	double avg;
	
	scanf("%d", &n);//n을 입력받음 
	for(i = 0; i < n; i++) {//n까지 반복하며 입력받음 
		scanf("%lf", &a[i]);//0부터 n까지의 방까지 실수를 저장함 
		sum += a[i];//총점과 평균을 구하기 위해 
	}
	
	for(i = 0; i < n; i++) {//0부터 n까지 계속 바꿔줌 
		if(a[i] > max) max = a[i];
		if(a[i] < min) min = a[i];
	}
	sum = sum - (max + min);
	avg = sum / (n - 2);
	//max = 최대값(현재)
	//min = 최솟값(현재)
	printf("%.4lf", avg);
	
	return 0;
}
