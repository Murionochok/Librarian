#pragma once
#include <fstream>
#include <Windows.h>
#include <vector>
#include <string>
#include <sstream>
#include <iostream>

using namespace std;

class Registration
{
public:

    string name;
    string surname;
    string phoneNumber;
    string date;
    string birthday;
    string mail;
    int bookNum_user;

    Registration()
    {
        birthday = bookNum_user = 0;
        name = surname = phoneNumber = mail = " ";
    }
    Registration(string name,string surname, string birthday, string mail, string phoneNumber)
    {
        this->name = name;
        this->surname = surname;
        this->birthday = birthday;
        this->mail = mail;
        this->phoneNumber = phoneNumber;
        this->date = birthday;
        this->bookNum_user = 0;
    }
    string changeName();
    string changeSurname();
    string changePhoneNumber();
    string changeDate();
    string changeBirthday();
    string changeMail();
    int changeBookNum(int _num);
    void Get_info();
};
class books
{
public:
    void get()
    {
        cout << "name: " << this->bookName << "\t\t";
        cout << "author: " << this->author << "\t\t";
        cout << "number: " << this->bookNum << "\t";
        cout << "status: " << this->status << endl;
    }
    books(string _name, string _author, int _numb)
    {
        this->bookName = _name;
        this->author = _author;
        this->bookNum = _numb + 1;
        this->status = "available";
    }
    books(int _n)
    {
        cout << "Book name: "; cin >> this->bookName;
        cout << "Book author: "; cin >> this->author;
        this->bookNum = _n + 1;
        this->status = "available";
    }
    books()
    {
        this->author = this->bookName = " ";
        this->bookNum = 0;
        this->status = "available";
    }
    books change_status()
    {
        if (this->status == "available") this->status = "borrowed";
        else this->status = "available";
        return *this;
    }

    string bookName;
    int bookNum;
    string author;
    string status;
};

vector<Registration> sort_by_surname(vector<Registration>&);
vector<Registration> pushing_users(vector<Registration>&);
vector<books> pushing_books(vector<books>&);
void search_by_surname(vector<Registration>&, string);
vector<Registration> borrow(vector<Registration>&, string, int, vector<books>&);
void write_users(vector<Registration>&);
vector<Registration> read_users(vector<Registration>&);
void write_books(vector<books>&);
vector<books> read_books(vector<books>&);

