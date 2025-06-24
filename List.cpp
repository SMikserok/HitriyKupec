#include "List.h"
#include <iostream>

void List::Add(int count) {
    for (int i = 1; i <= count; i++) {
        Node* Temp = new Node(i);

        if (!head) {
            head = Temp;
            head->Getnext() = head;// Циклируем
        }
        else {
            Node* Current = head;

            while (Current->Getnext() != head) {
                Current = Current->Getnext();
            }

            // Добавляем новый узел в конец
            Current->Getnext() = Temp;
            Temp->Getnext() = head;  //Циклируем
        }
    }
}

vector<int> List::simulate(int Month, int Step, int toRemove, int size) { // основной метод (основан на задаче Иосифа Флавия)

    int start_index = (Month - 1) % size; // начало выбрасывания тюков
    Node* current = head;
    Node* prev = nullptr;

    if (start_index == 0) { // проходка
        prev = head;
        while (prev->Getnext() != head) {
            prev = prev->Getnext();
        }
    }
    else {
        for (int i = 0; i < start_index; i++) {
            prev = current;
            current = current->Getnext();
        }
    }

    for (int i = 0; i < toRemove; i++) {  // удаляем элементики
        Node* toDelete = current;
        prev->Getnext() = current->Getnext();

        if (toDelete == head) {
            head = current->Getnext();
        }

        current = current->Getnext();
        delete toDelete;
        size--;

        if (size == 0) {
            current = nullptr;
            prev = nullptr;
            break;
        }

        for (int j = 0; j < Step - 1; j++) { // переход к следующему step-1 элементу
            prev = current;
            current = current->Getnext();
        }
    }

    vector<int> result; // начинаем собирать итоговый вектор-результат
    if (size == 0) {
        return result;
    }

    Node* start = current;
    result.push_back(current->Getdata());
    current = current->Getnext();
    while (current != start) {
        result.push_back(current->Getdata());
        current = current->Getnext();
    }

    sort(result.begin(), result.end());
    return result;
}