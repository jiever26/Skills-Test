#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()

{
    double PAYRate, GROSSIncome, NETIncome, SCHOOLAmount, BONDSAmount;
    double CLOTHESAmount, PARENTSBONDSAmount, HOURSWorked;
    
    const double TaxRate = 0.14;
    const double ClothesPercentageOfIncome = 0.10;
    const double SchoolPercentageOfIncome = 0.01;
    const double SavingsBondsPercentageOfIncome = 0.25;
    const double ParentsAdditionalBondsAmount = 0.50;
    
    cout << "Hours of Work: ";
    cin >> HOURSWorked;
    
    cout << "Hourly Rate of Work: $";
    cin >> PAYRate;
    
    GROSSIncome = HOURSWorked * PAYRate;
    NETIncome = GROSSIncome *= TaxRate;
    CLOTHESAmount = NETIncome * ClothesPercentageOfIncome;
    SCHOOLAmount = NETIncome * SchoolPercentageOfIncome;
    NETIncome -= (CLOTHESAmount + SCHOOLAm
	ount);
    BONDSAmount = NETIncome * SavingsBondsPercentageOfIncome;
    PARENTSBONDSAmount = BONDSAmount * ParentsAdditionalBondsAmount;
    
    cout << fixed << showpoint << setprecision(2);
    
    cout << "Gross Income: $" << GROSSIncome << endl;
    cout << "Net Income: $" << NETIncome << endl;
    cout << "Clothes & Accessories: $" << CLOTHESAmount << endl;
    cout << "School Supplies: $" << SCHOOLAmount << endl;
    cout << "Savings Bonds: $" << BONDSAmount << endl;
    cout << "Additional Savings Bond of Parents: $" <<PARENTSBONDSAmount << endl;
    
    _getch();
    return 0;
}
