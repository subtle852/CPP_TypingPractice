#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <time.h>
using namespace std;

// 26�� �ҹ��� + Ư������
int main()
{
	clock_t start = clock();
	srand((unsigned int)(time(nullptr)));
	int index;
	char output = 'a';
	char input;

	char a[100] = {};

	// �迭 ����
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

	//�ܼ� �迭 ��¿�
	/*for (int i = 0; i < 57; i++)
	{
		cout << (char)a[i] << " ";
	}*/

	// �޽��� ���
	cout << "�����Ͻ÷��� 1���� ��������" << endl;
	cout << "�����Ͻ÷��� 0���� ��������" << endl;

	cin >> input;

	if (input == '1')
	{
		while (true)
		{
			int index = rand() % 57;
			if (index == 11)
			{
				cout << a[index] << " (����)";
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
						check = 1; // check ������ �ǵ�� �ι�° while�� ���� ��������� ����
						continue; // �ι�° while�� �ñ�� �ٽ� ù��° while������ ������ ����
					}
					else
					{
						cout << "�ٽ� �Է�" << endl;
						cin >> input;
						if (input == '0')
						{
							cout << "real? \n";
							clock_t end = clock();
							double time = double(end - start) / CLOCKS_PER_SEC; //�ʴ��� ��ȯ
							printf("����ð� : %0.3lf\n", time); //�Ҽ��� ��° �ڸ�����

							//system("cls");

							cin >> input;
							cout << "�����մϴ�, �̿����ּż� �����մϴ�";

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
					double time = double(end - start) / CLOCKS_PER_SEC; //�ʴ��� ��ȯ
					printf("����ð� : %0.3lf\n", time); //�Ҽ��� ��° �ڸ�����

					//system("cls");

					cin >> input;
					cout << "�����մϴ�, �̿����ּż� �����մϴ�";
					break;
				}
			}
		}
	}

	else if(input == 0)
	{
		cout << "�����մϴ�, �̿����ּż� �����մϴ�";
		return 0;
	}
}