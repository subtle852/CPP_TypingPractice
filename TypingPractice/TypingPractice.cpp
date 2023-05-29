#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <time.h>
using namespace std;

// 26개 소문자 + 특수문자
int main()
{
	clock_t start = clock();
	srand((unsigned int)(time(nullptr)));
	int index;
	char output = 'a';
	char input;

	char a[100] = {};

	// 배열 구성
	for (int i = 0; i < 26; i++)
	{
		
		a[i] = output;
		output++;
	}

	output = '!';
	for (int i = 26; i < 41; i++)
	{
		a[i] = output;
		if (output == '$')
		{
			a[i] = '&';
		}
		output++;
	}

	output = ':';
	for (int i = 41; i < 48; i++)
	{
		a[i] = output;
		output++;
	}

	output = '[';
	for (int i = 48; i < 53; i++)
	{
		a[i] = output;
		output++;
	}

	output = '{';
	for (int i = 53; i < 57; i++)
	{
		a[i] = output;
		output++;
	}

	//단순 배열 출력용
	/*for (int i = 0; i < 57; i++)
	{
		cout << (char)a[i] << " ";
	}*/

	// 메시지 출력
	cout << "시작하시려면 1번을 누르세요" << endl;
	cout << "종료하시려면 0번을 누르세요" << endl;

	cin >> input;

	if (input == '1')
	{
		while (true)
		{
			int index = rand() % 57;
			if (index == 11)
			{
				cout << a[index] << " (문자)";
			}
			if (index == 124)
			{
				cout << a[index] << " (vertical bar)";
			}

			cout << a[index];
			cin >> input;
			{
				int check = 0;
				while (check == 0 && input != '0')
				{
					if (a[index] == input)
					{
						check = 1; // check 변수를 건드려 두번째 while문 조건 불충분으로 만듬
						continue; // 두번째 while문 팅기고 다시 첫번째 while문으로 보내기 위함
					}
					else
					{
						cout << "다시 입력" << endl;
						cin >> input;
						if (input == '0')
						{
							cout << "real? \n";
							clock_t end = clock();
							double time = double(end - start) / CLOCKS_PER_SEC; //초단위 변환
							printf("경과시간 : %0.3lf\n", time); //소수점 셋째 자리까지

							//system("cls");

							cin >> input;
							cout << "종료합니다, 이용해주셔서 감사합니다";

							return 0;
						}
					}
				}
			}

			{
				if (input == '0')
				{
					cout << "real? \n";
					clock_t end = clock();
					double time = double(end - start) / CLOCKS_PER_SEC; //초단위 변환
					printf("경과시간 : %0.3lf\n", time); //소수점 셋째 자리까지

					//system("cls");

					cin >> input;
					cout << "종료합니다, 이용해주셔서 감사합니다";
					break;
				}
			}
		}
	}

	else if(input == 0)
	{
		cout << "종료합니다, 이용해주셔서 감사합니다";
		return 0;
	}
}