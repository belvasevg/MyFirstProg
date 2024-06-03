#include "func_Person.h"

void print_pars_person(Person p)
{
	cout << "Имя и Фамилия человека: " << p.name << " " << p.surname << endl;
	cout << "Возраст человека: " << p.age << endl;
	cout << "Вес человека: " << p.weight << endl;
}
