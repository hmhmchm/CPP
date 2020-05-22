#include <iostream>

int main() {
	//문제1
	/*int num,sum = 0;
	
	for (int i = 1; i < 6; i++) {
		std::cout << i << "번째 정수 입력: ";
		std::cin >> num;
		sum += num;
	}
	
	std::cout << sum << std::endl;*/

	//문제 2
	/*char name[100];
	char pnum[100];

	std::cout << "당신의 이름은 무엇인가요?" << std::endl;
	std::cin >> name;
	std::cout << "전화번호는 무엇인가요?" << std::endl;
	std::cin >> pnum;

	std::cout << "당신의 이름은" << name << "입니다." << std::endl;
	std::cout << "당신의 번호는" << pnum << "입니다." << std::endl;
	*/
	
	//문제 3
	/*int num; //입력받을 숫자
	
	std::cin >> num; //입력
	for (int i = 1; i < 10; i++) {
		std::cout << num << " * " << i << " = " << num*i <<std::endl;
	}*/
	
	//문제 4
	/*int sale = 0;//판매 금액
	int salary = 0; //급여

	salary = 50 + (sale * 0.12);
	for (int i = 0; ;i++) {
		std::cout << "판매 금액을 만원 단위로 입력(-1 to end) : ";
		std::cin >> sale;
		if (sale != -1) {
			std::cout << "이번 달 급여: " << salary << "만원" << std::endl;
		}
		else {
			std::cout << "프로그램을 종료합니다." << std::endl;
			break;
		}
	}*/
}
