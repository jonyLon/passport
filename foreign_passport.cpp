#include "ForeignPassport.h"

void ForeignPassport_UA::ForeignPassport::print() const {
	Passport::print();
	cout << "Series number: " << series_number << endl;
	cout << "Visas: " << visas << endl;
}