#include<cstdio>

using namespace std;

#define INF 987654321


int main() {
	int n;
	scanf("%d",&n);
	

	long long number = (n + 1) / 2;
	long long end = 2*(number*number) - 4* number + 3 + (n-1)*2;
	
	//end = ���� ��, end-2 = ������ 2��°, end-4 = ������ 4��°
	printf("%lld\n",end + end-2 + end-4);

	return 0;
}