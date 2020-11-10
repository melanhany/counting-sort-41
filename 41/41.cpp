#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

int main()
{
	ifstream fin("INPUT.TXT");
	ofstream fout("OUTPUT.TXT");
	int n, i;
	int massiv_n[201];
	for (i = 0; i < 201; i++)
		massiv_n[i] = 0;

	fin >> n; //кол-во участков
	for (i = 0; i < n; i++) {
		int temp;
		fin >> temp;
		massiv_n[temp + 100]++;
	}
	

	for (i = 0; i < 201; i++)
		for (int j = 0; j < massiv_n[i]; j++)
			fout << i - 100 << ' ';
		/*if (massiv_n[i] != 0) {
			fout << i - 100 << ' ';
		}*/
	return 0;
}
