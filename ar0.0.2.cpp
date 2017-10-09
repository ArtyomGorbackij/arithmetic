#include <iostream>
#include <sstream>
#include <stdio.h>
#include <string>
using namespace std;
int main()
{   string str;
	double num1, num2;
	char act;
	getline(cin, str);
	istringstream stream(str);
	stream >> num2;
	while (stream >> act)
	{if (act == '+')
		{stream >> num1;
			num2 = num2 + num1;
		}
		else if (act == '-')
		{stream >> num1;
			num2 = num2 - num1;
		}
		else if (act == '*')
		{stream >> num1;
			num2 = num2 * num1;
		}
		else if (act == '/')
		{stream >> num1;
			num2 = num2 / num1;
		}
	}
	cout << num2<< endl;
	system("pause");
	return 0;}
