//Muhammad Yuda Pratama
//21091397025
//D4 MI 2021A

#include <iostream>
using namespace std;

int main()
{
	int matA[2][2] = {4, 2, 8, 10};
	int matB[2][2] = {-5, 8, 4, -12};
	int j,k;
	
	cout << "Matriks A" << endl;
	for (int i=0; i<2; i++){
		for (int j=0; j<2; j++){
			cout << matA[i][j] << " ";
		}
	cout << endl;
	}
	cout << "Matriks B" << endl;
	for (int i=0; i<2; i++){
		for (int j=0; j<2; j++){
			cout << matB[i][j] << " ";
		}
	cout << endl;
	}
	
	cout << endl;
	cout << "Hasil perkalian matriks A dan eksponen 5 " << endl;
	for (int i=0; i<2; i++){
		for (int j=0; j<2; j++){
			cout << matA[i][j] * 5 << " ";
		}
	cout << endl;
	}
	
	system("PAUSE");
	return 0;
}
