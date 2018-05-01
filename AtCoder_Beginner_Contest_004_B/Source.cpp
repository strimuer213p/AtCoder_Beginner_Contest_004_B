/*
問題文
高橋君は 4 x 4 マスの盤面を見つけました。
各マスには .ox のいずれかの文字が書かれています。
彼はこの盤面を回転させた後、どういった状態になるのか気になりました。
盤面を正面から見たときの状態が与えられるので、180 度回転させた後の盤面を出力してください。
*/

#include<iostream>
#include<array>

int main() {
	std::array<std::array<char, 4>, 4> ar;

	int i, j;

	for(i = ar.size()-1; i>=0;i--) {
		for (int j = ar[ar.size() - 1].size()-1; j >=0; j--) {
			std::cin >> ar[i][j];
		}
	}

	for (i = 0; i < ar.size(); i++) {
		for (j = 0; j < ar[ar.size() - 1].size(); j++) {
			std::cout << ar[i][j] << " ";
		}
		std::cout << "\n";
	}

	std::cout << std::endl;

	return 0;
}