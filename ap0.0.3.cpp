# arithmetic
#include <iostream>
#include <sstream>
using namespace std;
int main()
{
int k = 0;
	double* b = (double*)malloc(sizeof(double));
	char* command = (char*)malloc(sizeof(char));
	string str;
	double A;
	char com;
	getline(cin, str);
	istringstream stream(str);
	stream >> *b;
	while (stream >> com)
	{
	switch (com) {
		case '+':
			if (stream >> A) {
				command = (char*)realloc(command, (k + 1) * sizeof(char));
				*(command + k) = com;
			}
		k++;
			b = (double*)realloc(b, (k + 1) * sizeof(double));
			*(b + k) = A;
			break;
		case '-':
			if (stream >> A) {
				command = (char*)realloc(command, (k + 1) * sizeof(char));
				*(command + k) = com;
			}
			k++;
			b = (double*)realloc(b, (k + 1) * sizeof(double));
			*(b + k) = A;
			break;
		case '*':
			stream >> A;
			*(b + k) = (*(b + k)) * A;
			break;
		case '/':
			stream >> A;
			*(b + k) = (*(b + k)) / A;
			break;
		}
	}
	double rs = *b;
	for (int i = 0; i<k + 1; i++) {
		switch (*(command + i)) {
		case '+':
			rs += *(b + i + 1); break;
			case '-':
			rs -= *(b + i + 1); break;
		}
	}
	cout << rs<< endl;
	system("pause");
	return 0;
}
