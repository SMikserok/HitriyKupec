#include "List.h"
#include <iostream>
#include "tmp2.h"
using namespace std;

int main() {
	string count_help;
	string step_help; 
	string month_help;
	string toRemove_help;// ��� �������� �����
	List Bales; // ����������� ����������� ������ �����
	vector<int> Result; // ������ ������ ������� �����
	setlocale(LC_ALL, "Russian");
	cout << "����� ���������� � ���� ������ �����" << endl;
	cout << "�������� ���������� �������, ����� ������ ���������� ����!.. ������, ������� �� ���� � ������ �����?" << endl;
	int count = Input<int>(count_help);
	while (count < 1) {
		cout << "�� �� �� �� �������, ���� � ��� ���� 0 �����. ������� �� �� ����� ���� � ��� �����: ";
		count = Input<int>(count_help);
	}
	count = count * 2;
	Bales.Add(count); // ���� ���������� ��������� ������ ����� �� �����(���������������)
	cout << "������ ������� ���� ������� �� �����, ������� � ��, � � ����� ����� " << count << " �����!" << endl;
	cout << "��� �� ��������, ��� ������� ������� ���-���� ���� ������� ����� �����. ������� ��� �� ��������: ";
	int step = Input<int>(step_help);
	while (step < 1 || step > count) {
		cout << "������� ��� �� ����� �� ������, �� �������� �� 1 �� " << count << ". ������� ��� �� ��������: ";
		step = Input<int>(step_help);
	}
	cout << "������ ����� ������� ����� ������� ���-���� ���������� ���������� �� ����!" << endl;
	cout << "���-���� ���������� �������� � ����� ������ ������� �����: ";
	int toRemove = Input<int>(toRemove_help);
	while (toRemove < 1 || toRemove >= count) {
		cout << "��-��-��, �� ����� ������ ����������, ���-�� ����� 1 � " << count << ". ������� �� �� �����: ";
		toRemove = Input<int>(toRemove_help);
	}
	cout << "��� �� ��������������, ��� ����� ��� �� ���� �������� ���������� ������, � ��������� ������, ���� �� ��������� ���� ����!" << endl;
	cout << "������� �������, ��� ������ � ������ ������ ����, ������� ������������� �������� ������ ������!" << endl;
	cout << "������� �����... �����?  ";
	int month = Input<int>(month_help);
	while (month < 1 || month > 12) {
		cout << "�� ��� ������ ���������� ��� ���? ����� ������� �����: ";
		month = Input<int>(month_help);
	}
	cout << "�����, �� �������� � ������, ��� ���� ����� ������� �� ����� �����: ";
	Result = Bales.simulate(month, step, toRemove, count);
	for (int i = 0; i < Result.size(); i++) {
		cout << Result[i] << " ";
	}
}