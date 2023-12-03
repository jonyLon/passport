#pragma once
#include "helper.h"
#include <iostream>
#include <string>
using namespace std;
namespace Passport_UA {

	class Passport
	{
	public:
		Passport() = default;
		Passport(const string full_name, const size_t& birth_day, const size_t& birth_month, const size_t& birth_year, const size_t& age, Sex sex, string nationality)
			: full_name{ full_name }, birth_date(birth_day, birth_month, birth_year), age{ age }, sex{ sex }, nationality{ nationality } {
			++last_num;
			num += last_num;
		}
		~Passport() {
		}
		void print() const;
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
		string formRecord();
		string formDocNum();
	};
}
