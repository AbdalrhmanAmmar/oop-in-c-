#include <iostream>
#include <string>
using namespace std;
class clsPerson
{
private:
	int id = 10;
	string _firstname;
	string _lastname;
	string _email;
	string _phone;
	string _subject;
	string _Body;
public:

	clsPerson() {

	}
	clsPerson(string firstname, string lastname, string email, string phone) {
		_firstname = firstname;
		_lastname = lastname;
		_email = email;
		_phone = phone;

	}

	void print() {
		cout << "-----------------------------------------------------------" << endl;
		cout << "ID" << id << endl;
		cout << "Firstname" << ":" << _firstname << endl;
		cout << "_lastname" << ":" << _lastname << endl;
		cout << "_email" << ":" << _email << endl;
		cout << "phone" << ":" << _phone << endl;
		cout << "-----------------------------------------------------------" << endl;


	}
	void SendMail(string subject, string body) {
		_subject = subject;
		_Body = body;

		cout << "The following meesage send successfuly to email: " << _email << endl;
		cout << "Subject" << _subject << endl;
		cout << "body" << ":" << _Body << endl;
	}
};

class clsEmplyess : public clsPerson {
private: 
	string _title;
	string _department;
	float _Salary;


public:
	void setTilte(string title) {
		_title = title;

	}
	string Title() {
		return _title;
	}

	void setDepartment(string department) {
		_department = department;
	}

	string getDepartment() {
		return _department;
	}

	//salary Also
};

int main()
{
	//clsPerson person1("Abdelrhman", "Ammar", "abdammar2023@gmail.com", "0795433538");
	//person1.print();
	//person1.SendMail("Hi", "How are you");


	clsEmplyess emplyee1;
	emplyee1.setTilte("junior");
	cout<<emplyee1.Title();
}