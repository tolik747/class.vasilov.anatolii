#include <iostream>
#include <string>
#include<Windows.h>

using namespace std;

class Student {
private:
    string name;
    string birthdate;
    string phone_number;
    string address;
    string group_number;

public:
    void set_name(string name) {
        this->name = name;
    }

    void set_birthdate(string birthdate) {
        this->birthdate = birthdate;
    }

    void set_phone_number(string phone_number) {
        this->phone_number = phone_number;
    }

    void set_address(string address) {
        this->address = address;
    }

    void set_group_number(string group_number) {
        this->group_number = group_number;
    }

    void print_info() {
        cout << "��'�: " << name << endl;
        cout << "���� ����������: " << birthdate << endl;
        cout << "����� ��������: " << phone_number << endl;
        cout << "������: " << address << endl;
        cout << "����� �����: " << group_number << endl;
    }
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Student student;

    student.set_name("������� �������");
    student.set_birthdate("17/04/2006");
    student.set_phone_number("+38066-7950-335");
    student.set_address("�������.������");
    student.set_group_number("���211");

    student.print_info();

    return 0;
}
