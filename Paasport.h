#pragma once
#include <iostream>
#include <string>
using namespace std;

struct Date
{
	Date(const size_t& day, const size_t& month, const size_t& year) : day{ day }, month{ month }, year{ year } {}
	Date(): day{ 12 }, month{ 11 }, year{ 2027 } {}
	size_t day;
	size_t month;
	size_t year;
	string line = (day < 10 ? "0" + to_string(day) : to_string(day)) + "." + (month < 10 ? "0" + to_string(month) : to_string(month)) + "." + to_string(year);
	string recordLine = to_string(year) + (month < 10 ? "0" + to_string(month) : to_string(month)) + (day < 10 ? "0" + to_string(day) : to_string(day));
};
enum Sex
{
	male = 1, female = 2
};

class Passport
{
public:
	Passport() = default;
	Passport(const string full_name, const size_t& birth_day, const size_t& birth_month, const size_t& birth_year, const size_t& age, Sex sex, string nationality) 
		: full_name{ full_name }, birth_date(birth_day, birth_month, birth_year), age{ age }, sex{ sex }, nationality{nationality} {
		++last_num;
		num += last_num;
	}
	~Passport() {
	}

	void print() const {
		cout << "Full name: " << full_name << endl;
		cout << "Birth date: " << birth_date.line << endl;
		cout << "Age: " << age << endl;
		cout << "Sex: " << (sex == Sex::male ? "Male" : "Female") << endl;
		cout << "Nationality: " << nationality << endl;
		cout << "Expiry date: " << expiry_date.line << endl;
		cout << "Record: " << record << endl;
		cout << "Document number: " << document_num << endl;
	}
	


private:
	static size_t last_num;
	string full_name;
	Date birth_date;
	size_t age;
	Sex sex;
	string nationality;
	Date expiry_date = Date();
	size_t num = last_num + 1;
	string record = formRecord();
	string document_num = formDocNum();
	string formRecord() {
		string record = birth_date.recordLine + "-";
		string numStr = to_string(num);
		switch(numStr.length())
		{
		case 1:
			record += "000" + numStr;
			break;
		case 2: 
			record += "00" + numStr;
			break;
		case 3:
			record += "0" + numStr;
			break;
		case 4:
			record += numStr;
			break;
		}
		return record;
	}
	string formDocNum() {
		string doc_num = "0000";
		string numStr = to_string(num);
		switch (numStr.length())
		{
		case 1:
			doc_num += "000" + numStr;
			break;
		case 2:
			doc_num += "00" + numStr;
			break;
		case 3:
			doc_num += "0" + numStr;
			break;
		case 4:
			doc_num += numStr;
			break;
		}
		return doc_num;
	}
};

size_t Passport::last_num = 0;