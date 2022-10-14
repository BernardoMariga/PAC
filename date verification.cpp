// Date verification function.
#include <iostream>

bool dateCheck(int month, int day, int year){

    bool leapYear;

    // Bool that identifies leap years.
    leapYear = ((year%4 == 0 && year%100 != 0) || year%400 == 0);

    // Checks date possibilities.
    if (month > 0 && month <= 12){
        if (month == 4 || month == 6 || month == 9 || month == 11 && day <= 30) {
            return true;
            }else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 && day <=31){
                return true;
            }else if (month == 2) {
                if (leapYear == 1 && day <= 29) {
                    return true;
                }
                if (leapYear == 0 && day <= 28) {
                    return true;
                }else{
                    return false;
                }
            }
        }else{
            return false;
        }
}

int main()
{
    int month, day, year;
    std::cout << "Enter a date (month, date, year): ";
    std::cin >> month >> day >> year;
    if (dateCheck(month, day, year) == 1){
        std::cout << "This is a valid date.";
    }else{
        std::cout << "This is not a valid date.";
    }
    return 0;
}