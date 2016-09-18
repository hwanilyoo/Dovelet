#include<cstdio>

using namespace std;
#define INF 987654321

int main() {
	float speed, weight, power;

	scanf("%f %f %f",&speed,&weight,&power);

	if (speed <= 4.5) {
		if (weight >= 150) {
			if (power >= 200) {
				printf("Wide Receiver ");
			}

		}

	}
	if (speed <= 6.0) {
		if (weight >= 300) {
			if (power >= 500)
				printf("Lineman ");
			
		}
		
			
	}

	if (speed <= 5.0){
		if (weight >= 200) {
			if (power >= 300)
				printf("Quarterback ");
			
		}
		
			
	}
	


	if (speed > 6.0)
		printf("No positions ");
	else if (5.0 < speed && speed < 6.0 ) {
		if (weight < 300) printf("No positions");
		else {
			if(power<500)printf("No positions");
		}
	}
	else if (4.5 < speed && speed < 5.0) {
		if (weight < 200) printf("No positions");
		else {
			if (power<300)printf("No positions");
		}
	}
	else if (speed <= 4.5) {
		if (weight < 150) printf("No positions");
		else {
			if (power<200)printf("No positions");
		}
	}

	
	printf("\n");
	return 0;
}