# include <stdio.h>
#define PI 3.14159265358979323846

int main()
{


	double 원의넓이;

	printf("원의넓이를 구하여라\n");

	printf("원의 반지름을 입력하시오\n");
	scanf_s("%lf\n", &반지름);

	printf("원의넓이는 : %.2lf 입니다\n", 원의넓이);

	원의넓이 = 반지름 * 반지름 * PI;

//#include <stdio.h>

//#define PI 3.14159265358979323846

    //int main() {
        //double radius, area;

        // 사용자로부터 반지름 입력 받기
       // printf("원의 반지름을 입력하세요: ");
        //scanf_s("%lf", &radius);

        // 원의 넓이 계산
        //area = PI * radius * radius;

        // 결과 출력
        //printf("원의 넓이는: %.2lf\n", area);

        //return 0;


}

