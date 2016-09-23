#include<cstdio>

using namespace std;
#define INf 987654321

int main() {
	int input;
	
	scanf("%d",&input);
	int sum=0;
	int num=0;
	 //unsigned int multi=1;

	unsigned long multi = 1;
	bool arr[1001] = { false, };
	
	for (int i = 1; i <= input; i++) {
		if (input%i == 0) {
			arr[i] = true;
			num++;
			sum += i;
			multi *= i;
			multi %= 10;
			
		}
	}

	for (int i = 1; i <= input; i++) {
		if (arr[i] == true) {
			printf("%d ", i);
		}
		
	}
	printf("\n");
	printf("%d\n", num);
	printf("%d\n", sum);
	
	//printf("%u\n", multi % 10);

	printf("%u\n", multi % 10);

	
	return 0;
}