#include<cstdio>

using namespace std;
#define INF 987654321

int main() {
	/*
		풀이
		예제 9/16

		1. 9에 10을 곱해서 16으로 나눈 몫을 구한다. 90 / 16 = 5   ... 10
		2. 위 식의 나눈 나머지에 10을 곱해서 다시 나눈 몫을 구한다. 100 / 16 = 6 ... 4
		3. 반복.
		40 / 16 = 2 ... 8
		80 / 16 = 5 ... 0

		나머지가 0이 나왔으니 여기서 나누어떨어집니다. 
		따라서 구한 몫을 나열하면 5,6,2,5가 되고, 답은 0.5625
	*/
	int a, b, k;
	scanf("%d %d %d",&a,&b,&k);
	
	
	int result[1001] = { 0, };
	
	for (int i = 0; i <= k; i++) {
		result[i] = a / b; //a=1, b=13
		a=(a%b)*10;

	}
	printf("0.");
	for (int i = 1; i <= k; i++) {
		printf("%d", result[i]);
	}
	printf("\n");
	return 0;
}