#include "List.h"
#include <iostream>
#include "tmp2.h"
using namespace std;

int main() {
	string count_help;
	string step_help; 
	string month_help;
	string toRemove_help;// для проверки ввода
	List Bales; // циклический односвязный список тюков
	vector<int> Result; // вектор нужных номеров тюков
	setlocale(LC_ALL, "Russian");
	cout << "Добро пожаловать в игру Хитрый Купец" << endl;
	cout << "Началось затопление корабля, нужно срочно выкидывать тюки!.. Кстати, сколько их было у нашего купца?" << endl;
	int count = Input<int>(count_help);
	while (count < 1) {
		cout << "Ну Вы же не бездарь, чтоб у Вас было 0 тюков. Сколько же на самом деле у Вас тюков: ";
		count = Input<int>(count_help);
	}
	count = count * 2;
	Bales.Add(count); // туда записались возможные номера тюков по кругу(зациклировались)
	cout << "Чертов Франсуа взял столько же тюков, сколько и Вы, и в итоге стало " << count << " тюков!" << endl;
	cout << "Тут вы заметили, что Великий Капитан Сан-Фран стал стучать своей ногой. Сколько раз он постучал: ";
	int step = Input<int>(step_help);
	while (step < 1 || step > count) {
		cout << "Столько раз он точно не стучал, он протопал от 1 до " << count << ". Сколько раз он протопал: ";
		step = Input<int>(step_help);
	}
	cout << "Именно через столько тюков Великий Сан-Фран собирается выкидывать по тюку!" << endl;
	cout << "Сан-Фран собирается выкинуть в сумме именно столько тюков: ";
	int toRemove = Input<int>(toRemove_help);
	while (toRemove < 1 || toRemove >= count) {
		cout << "Не-не-не, он хочет другое количество, что-то между 1 и " << count << ". Сколько же он хочет: ";
		toRemove = Input<int>(toRemove_help);
	}
	cout << "Тут Вы сквернословите, как будто Вам на ногу свалился гигантский сундук, и начинаете думать, куда же поставить Ваши тюки!" << endl;
	cout << "Капитан говорит, что начнет с такого номера тюка, который соответствует текущему номеру месяца!" << endl;
	cout << "Сегодня месяц... Какой?  ";
	int month = Input<int>(month_help);
	while (month < 1 || month > 12) {
		cout << "Вы что совсем потерянный или как? Какой сегодня МЕСЯЦ: ";
		month = Input<int>(month_help);
	}
	cout << "Тааак, Вы подумали и поняли, что тюки нужно ставить на такие места: ";
	Result = Bales.simulate(month, step, toRemove, count);
	for (int i = 0; i < Result.size(); i++) {
		cout << Result[i] << " ";
	}
}