#include  <iostream>
#include <climits>

using namespace std;

class matrix {
public:
	matrix(int i, int j);
	~matrix();
	void lengthSet(int len);
	void wigthSet(int wig);
	void matrixPrint();
private:
	int length;
	int wigth;
};


matrix::matrix(int i, int j)
{
	cout << "最大长度30， 最大宽度15" << endl;
	lengthSet(i);
	wigthSet(j);

}

matrix::~matrix() 
{
	length = 0;
	wigth  = 0;
}
void matrix::lengthSet(int len)
{
	length = len;
	if (length > 30) {
		length = 30;
	}
}

void matrix::wigthSet(int wig)
{
	wigth = wig;
	if (wigth > 15) {
		wigth = 15;
	}
}

void matrix::matrixPrint()
{
	int i, j;
	for (i = 0; i < wigth; i++) {
		for (j = 0; j < length; j++) {
			if (i == 0 || i == wigth - 1) {
				cout << "-";
			} else {
				if (j == 0 || j == length - 1) {
					cout << "|";
				} else {
					cout << " ";
				}
			}
		}
		cout << endl;
	}
}

int  main(int argc, char *argv[])
{
	int  i = INT_MAX;
	int  len, wig;

	cout << "sizeof(int) = " << sizeof(int) << endl;
	cout << "sizeof(long) = " << sizeof(long) << endl;
	cout << "sizeof(short) = " << sizeof(short) << endl;
	cout << "sizeof(char) = " << sizeof(char) << endl;
	cout << "sizeof(long long) = " << sizeof(long long) << endl;
	cout << "请输入矩形长度:______\b\b\b\b\b\b\a";
	cin >> len;
	cout << "请输入矩形宽度:______\b\b\b\b\b\b\a";
	cin >> wig;

	matrix  matrix1 = matrix(len, wig);

	matrix1.matrixPrint();

	cout.put('A');
	cout << "按任意键推出！" << endl;
    //while (i--) {
	    
	//}
	
	cin.get();
	cin.get();
	return i;
}