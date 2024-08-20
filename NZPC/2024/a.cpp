#include <iostream>

bool isLeapYear(int year)
{
    return (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
}

void printYear(int year, const int currYear)
{
    std::cout << year << " ";

    if (year == currYear)
        std::cout << "is a ";
    else if (year < currYear)
        std::cout << "was a ";
    else
        std::cout << "will be a ";

    if (isLeapYear(year))
        std::cout << "leap year.\n";
    else
        std::cout << "common year.\n";
}

int main()
{
    const int currYear = 2024;

    int n;
    std::cin >> n;

    for (int i = 0; i < n; ++i)
    {
        int year;
        std::cin >> year;

        printYear(year, currYear);
    }
}