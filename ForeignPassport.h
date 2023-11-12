#pragma once
#include "Paasport.h"
class ForeignPassport :public Passport 
{
public:
	ForeignPassport(const string full_name, const size_t& birth_day, const size_t& birth_month, const size_t& birth_year, const size_t& age, Sex sex, string nationality, string series_number, string visas)
		: Passport(full_name, birth_day, birth_month, birth_year, age, sex, nationality), series_number{ series_number }, visas{visas} {}
	ForeignPassport(Passport &passport, string series_number, string visas)
		:Passport(passport), series_number{ series_number }, visas{ visas } {}


	void print() const {
		Passport::print();
		cout << "Series number: " << series_number << endl;
		cout << "Visas: " << visas << endl;
	}



private:
	string series_number;
	string visas;
};

