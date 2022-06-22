#include "Back.h"
#include "pch.h"
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
        name = surname = phoneNumber = date = mail = " ";
    }
    Registration(int count)
    {
        cout << "Name: "; cin >> this->name;
        cout << "Surname: "; cin >> this->surname;
        cout << "Year of birth: "; cin >> this->birthday;
        cout << "Mail: "; cin >> this->mail;
        cout << "Phone Number: "; cin >> this->phoneNumber;
        cout << "Date of registartion(xx.xx.xxxx): "; cin >> this->date;
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

   /* int main()
    {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    vector<Registration> users;
    vector<books> bookList;

    read_users(users);
    read_books(bookList);

    int x = 0, z = 0;
    string surn, borrower;
    do
    {
        cout << "\nChoose an operation:\n1.Add user/already sorted\n2.Get info about user by surname\n3.Show users\n4.Get info about books\n5.Borrow a book\n6.Add book\n";
        cin >> x;
        switch (x)
        {
        case 1: pushing_users(users);
            sort_by_surname(users); break;
        case 2: cout << "\nWhich element do you want to see?" << endl;
            cin >> surn;
            search_by_surname(users, surn); break;
        case 3: for (int i = 0; i < users.size(); i++)
        {
            users[i].Get_info();
            cout << "____________________________\n";
        } break;
        case 4: for (int i = 0; i < bookList.size(); i++)
        {
            bookList[i].get();
        } break;
        case 5: cout << "\nWhich book should be borrowed?\n";
            for (int i = 0; i < bookList.size(); i++)
            {
                bookList[i].get();
            }
            int borrow_book;
            cin >> borrow_book;
            cout << "\nWho borrows a book? (Enter a surname of user)\n";
            cin >> borrower;
            borrow(users, borrower, borrow_book, bookList);
            bookList[borrow_book - 1].change_status();
            break;
        case 6: pushing_books(bookList); break;
        }

        cout << "\nDo you want to continue?\t";
        cin >> z;

    } while (z != 0);

    write_users(users);
    write_books(bookList);
    return 0;
    }*/
void Registration::Get_info()
{
    cout << "Name: " << this->name << endl;
    cout << "Surname: " << this->surname << endl;
    cout << "Year of birth: " << this->birthday << endl;
    cout << "Mail: " << this->mail << endl;
    cout << "Phone Number: " << this->phoneNumber << endl;
    cout << "Date of registartion(xx.xx.xxxx): " << this->date << endl;
    cout << "The number of the chosen book: " << this->bookNum_user << endl;
}
string Registration::changeName()
{
    string x;
    cout << "Name: "; cin >> x;
    name = x;
    return name;
}
string Registration::changeSurname()
{
    string x;
    cout << "Surname: "; cin >> x;
    surname = x;
    return surname;
}
string Registration::changePhoneNumber()
{
    string x;
    cout << "Phone number: "; cin >> x;
    phoneNumber = x;
    return phoneNumber;
}
string Registration::changeDate()
{
    string x;
    cout << "Date of registartion(xx.xx.xxxx): "; cin >> x;
    date = x;
    return date;
}
string Registration::changeBirthday()
{
    string x;
    cout << "Year of Birth: "; cin >> x;
    birthday = x;
    return birthday;
}
string Registration::changeMail()
{
    string x;
    cout << "Mail: "; cin >> x;
    mail = x;
    return mail;
}
int Registration::changeBookNum(int _num)
{
    this->bookNum_user = _num;
    return bookNum_user;
}
vector<Registration> sort_by_surname(vector<Registration>& arr)
{
    for (int i = 0; i < arr.size(); i++)
        for (int j = 0; j < i; j++)
        {
            if (arr[j].surname > arr[i].surname)
            {
                Registration temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

    return arr;
}
vector<Registration> pushing_users(vector<Registration>& arr)
{
    Registration tmp(1);
    arr.push_back(tmp);
    return arr;
}
void search_by_surname(vector<Registration>& arr, string surn)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i].surname == surn)
        {
            arr[i].Get_info();
            cout << "_____________________________\n";
            break;
        }
        if (arr.size() - i == 1 && arr[i].surname != surn)
        {
            cout << "This user was not founded\n";
            break;
        }

    }
}
vector<Registration> borrow(vector<Registration>& arr, string surn, int number, vector<books>& bookarr)
{
    if (bookarr[number - 1].status == "borrowed")
    {
        cout << "Book is already borrowed!\n";
        bookarr[number - 1].change_status();
        return arr;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i].surname == surn)
        {
            if (arr[i].bookNum_user != 0)
            {
                for (int j = 0; j < bookarr.size(); j++)
                {
                    if (arr[i].bookNum_user == bookarr[j].bookNum) bookarr[j].change_status();
                }
            }
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i].surname == surn)
        {
            arr[i].changeBookNum(number);
            arr[i].Get_info();
            cout << "_____________________________\n";
            break;
        }
        if (arr.size() == 1 && arr[i].surname != surn)
        {
            cout << "This user was not founded\n";
            break;
        }

    }
    return arr;
}
void write_users(vector<Registration>& arr)
{
    ofstream outName, outSurname, outBirth, outPhone, outMail, outDate, outBookNum;
    outName.open("users_name.txt");
    for (int i = 0; i < arr.size(); i++)
    {
        outName << arr[i].name << "\n";
    }
    outName.close();
    outSurname.open("users_surname.txt");
    for (int i = 0; i < arr.size(); i++)
    {
        outSurname << arr[i].surname << "\n";
    }
    outSurname.close();
    outBirth.open("users_birth.txt");
    for (int i = 0; i < arr.size(); i++)
    {
        outBirth << arr[i].birthday << "\n";
    }
    outBirth.close();
    outPhone.open("users_phone.txt");
    for (int i = 0; i < arr.size(); i++)
    {
        outPhone << arr[i].phoneNumber << "\n";
    }
    outPhone.close();
    outMail.open("users_mail.txt");
    for (int i = 0; i < arr.size(); i++)
    {
        outMail << arr[i].mail << "\n";
    }
    outMail.close();
    outDate.open("users_date.txt");
    for (int i = 0; i < arr.size(); i++)
    {
        outDate << arr[i].date << "\n";
    }
    outDate.close();
    outBookNum.open("users_bookNum.txt");
    for (int i = 0; i < arr.size(); i++)
    {
        outBookNum << arr[i].bookNum_user << "\n";
    }
    outBookNum.close();
}
vector<Registration> read_users(vector<Registration>& arr)
{
    ifstream inName, inSurname, inBirth, inPhone, inMail, inDate, inBookNum;
    string str_tmp, str_name, str_surname, str_birth, str_phone, str_mail, str_date, str_bookNum;
    int counter = 0;
    inName.open("users_name.txt");
    while (!inName.eof())
    {
        str_tmp = " ";
        getline(inName, str_tmp);
        counter++;
    }
    inName.close();
    counter--;
    for (int i = 0; i < counter; i++)
    {
        Registration tmp;
        arr.push_back(tmp);
    }
    int j = 0;
    inName.open("users_name.txt");
    while (!inName.eof() && j != arr.size())
    {
        str_name = " ";
        getline(inName, str_name);
        arr[j].name = str_name;
        j++;
    }
    inName.close();
    j = 0;
    inSurname.open("users_surname.txt");
    while (!inSurname.eof() && j != arr.size())
    {
        str_surname = " ";
        getline(inSurname, str_surname);
        arr[j].surname = str_surname;
        j++;
    }
    inSurname.close();
    j = 0;
    inBirth.open("users_birth.txt");
    while (!inBirth.eof() && j != arr.size())
    {
        str_birth = " ";
        getline(inBirth, str_birth);
        arr[j].birthday = str_birth;
        j++;
    }
    inBirth.close();
    j = 0;
    inPhone.open("users_phone.txt");
    while (!inPhone.eof() && j != arr.size())
    {
        str_phone = " ";
        getline(inPhone, str_phone);
        arr[j].phoneNumber = str_phone;
        j++;
    }
    inPhone.close();
    j = 0;
    inMail.open("users_mail.txt");
    while (!inMail.eof() && j != arr.size())
    {
        str_mail = " ";
        getline(inMail, str_mail);
        arr[j].mail = str_mail;
        j++;
    }
    inMail.close();
    j = 0;
    inDate.open("users_date.txt");
    while (!inDate.eof() && j != arr.size())
    {
        str_date = " ";
        getline(inDate, str_date);
        arr[j].date = str_date;
        j++;
    }
    inDate.close();
    j = 0;
    inBookNum.open("users_bookNum.txt");
    while (!inBookNum.eof() && j != arr.size())
    {
        stringstream ss;
        int bookNum_integer = 0;
        str_bookNum = " ";
        getline(inBookNum, str_bookNum);
        ss << str_bookNum;
        ss >> bookNum_integer;
        arr[j].bookNum_user = bookNum_integer;
        j++;
    }
    inBookNum.close();
    return arr;
}
vector<books> read_books(vector<books>& arr)
{
    ifstream inNameBook, inAuthor, inNumber, inStatus;
    string str_tmp;
    int counter = 0;
    inNameBook.open("books_name.txt");
    while (!inNameBook.eof())
    {
        str_tmp = " ";
        getline(inNameBook, str_tmp);
        counter++;
    }
    inNameBook.close();
    counter--;
    for (int i = 0; i < counter; i++)
    {
        books tmp;
        arr.push_back(tmp);
    }
    str_tmp = " ";
    int j = 0;
    inNameBook.open("books_name.txt");
    while (!inNameBook.eof() && j != arr.size())
    {
        str_tmp = " ";
        getline(inNameBook, str_tmp);
        arr[j].bookName = str_tmp;
        j++;
    }
    inNameBook.close();
    j = 0;
    inAuthor.open("books_author.txt");
    while (!inAuthor.eof() && j != arr.size())
    {
        str_tmp = " ";
        getline(inAuthor, str_tmp);
        arr[j].author = str_tmp;
        j++;
    }
    inAuthor.close();
    j = 0;
    inNumber.open("books_number.txt");
    while (!inNumber.eof() && j != arr.size())
    {
        stringstream ss;
        int bookNum_integer = 0;
        str_tmp = " ";
        getline(inNumber, str_tmp);
        ss << str_tmp;
        ss >> bookNum_integer;
        arr[j].bookNum = bookNum_integer;
        j++;
    }
    inNumber.close();
    j = 0;
    inStatus.open("books_status.txt");
    while (!inStatus.eof() && j != arr.size())
    {
        str_tmp = " ";
        getline(inStatus, str_tmp);
        arr[j].status = str_tmp;
        j++;
    }
    inStatus.close();
    return arr;
}
void write_books(vector<books>& arr)
{
    ofstream outName, outAuthor, outNum, outStatus;
    outName.open("books_name.txt");
    for (int i = 0; i < arr.size(); i++)
    {
        outName << arr[i].bookName << "\n";
    }
    outName.close();
    outAuthor.open("books_author.txt");
    for (int i = 0; i < arr.size(); i++)
    {
        outAuthor << arr[i].author << "\n";
    }
    outAuthor.close();
    outNum.open("books_number.txt");
    for (int i = 0; i < arr.size(); i++)
    {
        outNum << arr[i].bookNum << "\n";
    }
    outNum.close();
    outStatus.open("books_status.txt");
    for (int i = 0; i < arr.size(); i++)
    {
        outStatus << arr[i].status << "\n";
    }
    outStatus.close();
}
vector<books> pushing_books(vector<books>& arr)
{
    books tmp(arr.size());
    arr.push_back(tmp);
    return arr;
}
