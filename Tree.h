
#include "Plant.h"
#pragma once// ��������� �������� ������ plant

#include <fstream>
using namespace std;

	// ������
	class tree : public plant {
		int age; // �������
	public:
		// �������������� ��������� ������
		void InData(ifstream& ifst); // ����
		void Out(ofstream& ofst); // �����
		void OutTree(ofstream& ofst);
		tree() {  } // �������� ��� �������������.
	};

