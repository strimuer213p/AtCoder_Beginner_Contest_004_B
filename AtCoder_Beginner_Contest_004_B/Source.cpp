/*
��蕶
�����N�� 4 x 4 �}�X�̔Ֆʂ������܂����B
�e�}�X�ɂ� .ox �̂����ꂩ�̕�����������Ă��܂��B
�ނ͂��̔Ֆʂ���]��������A�ǂ���������ԂɂȂ�̂��C�ɂȂ�܂����B
�Ֆʂ𐳖ʂ��猩���Ƃ��̏�Ԃ��^������̂ŁA180 �x��]��������̔Ֆʂ��o�͂��Ă��������B
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