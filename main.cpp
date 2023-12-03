#include "Paasport.h"
#include "ForeignPassport.h"
using namespace ForeignPassport_UA;
using namespace Passport_UA;
int main()
{
    Passport Vlad("Shliaruk Vladyslav Volodymyrovych", 13, 2, 2000, 23, Sex::male, "Ukrainian");
    Vlad.print();
    cout << endl;
    ForeignPassport Vladuha(Vlad, "AA345908", "USA, England, Japan");
    Vladuha.print();
}

