﻿// CPPSoloWork1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Реализуйте класс “Студент”.Необходимо хранить в переменных - членах класса : ФИО, дату рождения, контактный телефон,
//город, страну, название учебного заведения, город и страну(где
//    находится учебное заведение), номер группы.Реализуйте функции - члены класса для ввода данных, вывода данных, реализуйте
//    аксессоры для доступа к отдельным переменным - членам.
//

#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    const char* fio;
    const char* dateofbirth;
    const char* phone;
    const char* city;
    const char* country;
    const char* university;
    const char* universitycity;
    const char* universitycountry;
    const char* numbergroup;
public:
    Student(const char* fio, const char* dateofbirth, const char* phone, const char* city, const char* country, const char* university,
        const char* universitycity, const char* universitycountry, const char* numbergroup) :
        fio{new char[sizeof(fio)]}, dateofbirth{ new char[sizeof(dateofbirth)] }, 
        phone{ new char[sizeof(phone)] }, city{ new char[sizeof(city)] }, 
        country{ new char[sizeof(country)] }, university{ new char[sizeof(university)] },
        universitycity{ new char[sizeof(universitycity)] }, 
        universitycountry{ new char[sizeof(universitycountry)] }, 
        numbergroup{ new char[sizeof(numbergroup)] }       
    {
        this->fio = fio;
        this->dateofbirth = dateofbirth;
        this->phone = phone;
        this->city = city;
        this->country = country;
        this->university = university;
        this->universitycity = universitycity;
        this->universitycountry = universitycountry;
        this->numbergroup = numbergroup;
    }
    void print() {
        cout << fio << " " << dateofbirth << " " << phone << " " << city << " " << country << " "
            << university << " " << universitycity << " " << universitycountry << " " << numbergroup << "\n";
    }
    const char* GetFIO() 
    {
        return fio;
    }
    void SetFIO(const char* newfio) {
        fio = new char[sizeof(newfio)];
        fio = newfio;
    }
};
int main()
{
    Student stud{ "Antonov Anton Antonovich","25.08.2001"," + 79992524585",
        "Rostov","Russia","DGTU","ROSTOV","Russia","Cool123" };
    stud.print();
    cout << stud.GetFIO() << "\n";
    stud.SetFIO("Ivanov Ivan Ivanovich");
    stud.print();
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.