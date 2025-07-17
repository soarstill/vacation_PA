#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 파일명: pa6-20.c
// 설명 : ............
// 작성자 : 조윤경
// 작성일 : 2025.7.17

int checkPrime();
int is_prime(int number);

int main()
{
	int res = checkPrime();

	return res;
}

// 함수명 : run_ui()
// 기능 : 양의 정수 하나 받아서 소수인지 아닌지 출력한다.
// 입력 : 없음 (대신 키보드로 입력)
// 반환 : 0일 때 정상 반환, 그외의 값은 오류 코드
int checkPrime()
{
	int n;

	while (1) 
	{
		// 1. 어떤 숫자 1개 입력 받음
		printf("1~N사이의 소수를 구합니다. N은? ");
		scanf("%d", &n);

		// 음수이면 종료
		if (n < 0) break;
	
		// 2. 소수인지 판별
		int result = is_prime(n);
		
	
		// 3. 소수이면 그 숫자하고 소수인지 / 아닌지 출력한다.
		if (result == 1) {
			printf("숫자 %d는 소수입니다", n);
		} else {
			printf("숫자 %d는 소수가 전혀전혀 아닙니다", n);
		}
	}

	return 0;
	
}

// 함수명 : is_prime(int n)
// 기능 : 숫자 n 이 소수이면 참(1)을 반환하고, 그렇지 않으면 것(0)을 반환한다.
// 입력 : 임의의 양의 정수 n
// 반환 : 참 (1) - 소수일 떄, 거짓(0) - 소수 아님
int is_prime(int n)
{
	int i = 0;
	// 소수인지 판별 
	for ( i = 2; i < n; i++) {
		if (n % i == 0) return 0; // 소수 아님!!
	}
	
	return 1; // 소수다!!!
}
