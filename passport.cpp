#include "Paasport.h"

size_t Passport_UA::Passport::last_num = 0;
void Passport_UA::Passport::print() const {
	cout << "Full name: " << full_name << endl;
	cout << "Birth date: " << birth_date.line << endl;
	cout << "Age: " << age << endl;
	cout << "Sex: " << (sex == Sex::male ? "Male" : "Female") << endl;
	cout << "Nationality: " << nationality << endl;
	cout << "Expiry date: " << expiry_date.line << endl;
	cout << "Record: " << record << endl;
	cout << "Document number: " << document_num << endl;
}

string Passport_UA::Passport::formRecord() {
	string record = birth_date.recordLine + "-";
	string numStr = to_string(num);
	switch (numStr.length())
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

string Passport_UA::Passport::formDocNum() {
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
