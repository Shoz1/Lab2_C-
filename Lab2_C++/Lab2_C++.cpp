#include "pch.h"
#include "windows.h"
#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;

typedef struct Student
{
	char FirstName[15], SecondName[15], LastName[15];
	int Age, Height, Weight;
	char Sex[10];
	char nationality[20];
	int year, mouth, day;
	int PhoneNumber;
	int ZipCode;
	char Country[15], Region[15], District[15], City[15], Street[15], House[15], Apartment[15];
	char HEI[20], Group[10], Specialty[20];
	int Course, AvrMark;
};

Student InitPerson();
Student* InitArray(int);
void DisplayArray(Student*, int);
void DisplayStudent(Student);

int main(void)
{
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int Dimension;
	Student* MassiveStruct;
	cout << "Введите количество человек: ";
	cin >> Dimension;
	cout << endl;
	MassiveStruct = InitArray(Dimension);
	cout << "Количество людей: "<< Dimension << endl << endl;
	DisplayArray(MassiveStruct, Dimension);

}

Student InitPerson()
{
	Student Person;
	cout << "Введите Имя: ";
	cin >> Person.FirstName;
	cout << "Введите Фамилию: ";
	cin >> Person.SecondName;
	cout << "Введите Отчество: ";
	cin >> Person.LastName;
	cout << "Введите Пол: ";
	cin >> Person.Sex;
	cout <<"Введите Возраст: ";
	cin >> Person.Age;
	cout << "Введите Национальность: ";
	cin >> Person.nationality;
	cout << "Введите Рост: ";
	cin >> Person.Height;
	cout << "Введите Вес: ";
	cin >> Person.Weight;
	cout << "Введите Дату рождения: ";
	cout << endl;
	cout << "Год: ";
	cin >> Person.year;
	cout << "Месяц: ";
	cin >> Person.mouth;
	cout << "День: ";
	cin >> Person.day;
	cout << "Номер телефона: ";
	cin >> Person.PhoneNumber;
	cout << "Страна: ";
	cin >> Person.Country;
	cout << "Область: ";
	cin >> Person.Region;
	cout << "Район: ";
	cin >> Person.District;
	cout << "Почтовый индекс: ";
	cin >> Person.ZipCode;
	cout << "Город: ";
	cin >> Person.City;
	cout << "Улица: ";
	cin >> Person.Street;
	cout << "Дом: ";
	cin >> Person.House;
	cout << "Квартира: ";
	cin >> Person.Apartment;
	cout << "Уч. Заведение: ";
	cin >> Person.HEI;
	cout << "Специальность: ";
	cin >> Person.Specialty;
	cout << "Курс: ";
	cin >> Person.Course;
	cout << "Группа: ";
	cin >> Person.Group;
	cout << "Средняя Оценка: ";
	cin >> Person.AvrMark;
	cout << endl;

	return Person;
}

Student* InitArray(int Dimension)
{
	Student* Massive = (Student*)malloc(Dimension * sizeof(Student));
	//if (Massive == NULL) return NULL;
	for (int i = 0; i < Dimension; i++)
	{
		cout << "Введите информацию про " << i + 1 << " человек " <<endl;
		Massive[i] = InitPerson();
	}
	return Massive;
}

void DisplayArray(Student* Massive, int Dimension)
{
	int i;
	for (i = 0; i < Dimension; i++)
	{
		DisplayStudent(Massive[i]);
	}
}

void DisplayStudent(Student Person)
{
	cout << "Человек : ";
	cout << Person.FirstName <<" "<< Person.SecondName <<" "<< Person.LastName <<" ";
	cout << "Дата Рождения: " << Person.year << "." << Person.mouth << "." << Person.day << endl << endl;
	cout << "Данные о человеке: "<< endl;
	cout << "Пол: " << Person.Sex << " " << "Возраст: " << Person.Age << " " << "Национальность: " << Person.nationality << " " << "Рост: " << Person.Height << " " << "Вес: " << Person.Weight << endl << endl;
	cout << "Место Жительства: "<< endl;
	cout << "Страна: " << Person.Country << " " << "Область: " << Person.Region << " " << "Район: " << Person.District << " " << "Почтовый Индекс: " << Person.ZipCode << endl;
	cout << "Город: " << Person.City << " " << "Улица: " << Person.Street << " " << "Дом: " << Person.House << " " << "Квартира: " << Person.Apartment << endl << endl;
	cout << "Данные о Учебе: " << endl;
	cout << "Место Учебы: " << Person.HEI << " " << "Специальность: " << " " << "Курс: " << Person.Course << " " << "Группа: " << Person.Group << " " << "Средний бал: " << Person.AvrMark;
	cin.get();
}