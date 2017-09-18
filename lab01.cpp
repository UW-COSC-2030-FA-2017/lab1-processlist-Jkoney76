// lab01.cpp
// Jake Koney


#include <iostream>
#include <fstream>
#include <string>
using std::ifstream;
using std::string;
using namespace std;





int main() {
	float n = 1;
	string filename;

	cout << "Please enter the input file name: ";
	cin >> filename;


	ifstream filestr;    // Create an input file stream.
	filestr.open(filename);  // Use it to read from a file.
	int counter = 0;
	float num1 = 0;
	float num2 = 0;

	if (filestr.fail()) {

		cout << "Error: Can't open the file.\n";

	}

	else {

		while (!filestr.eof()) {

			counter++;
			filestr >> n;


			if (counter == 1) {
				num1 = n;
			}
			else if (counter == 2) {
				num2 = n;

			}

		}
		cout << "Count: " << counter << endl;
		filestr.close();

		filestr.open(filename);		
		int nCount = 0;
		float num3 = 0;

		while (!filestr.eof())
		{
			filestr >> n;
			nCount++;
			int LastBut1 = counter - 1;

			if (nCount == LastBut1) {
				num3 = n;
				cout << "Second to Last: " << num3 << endl;
			}

			if (nCount == counter)
			{
				cout << "Last Number: " << n << endl;

			}
		}

		
		cout << "First Number is: " << num1 << " and your " << "Second number is: " << num2 << " your Last Number is: " << n << "and your Second to Last number is: " << num3 << endl;
		system("pause");
		return 0;
	}
}
