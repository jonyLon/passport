#include "Paasport.h"
#include "ForeignPassport.h"
int main()
{
    Passport Vlad("Shliaruk Vladyslav Volodymyrovych", 13, 2, 2000, 23, Sex::male, "Ukrainian");
    Vlad.print();
    cout << endl;
    ForeignPassport Vladuha(Vlad, "AA345908", "USA, England, Japan");
    Vladuha.print();
}

