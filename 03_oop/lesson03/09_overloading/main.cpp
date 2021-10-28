#include <ctime>
#include <iostream>

class Date {
public:
    Date(int day, int month, int year) : day_(day), month_(month), year_(year) {}
    Date(int day, int month) : day_(day), month_(month)  // automatically sets the Date to the current year
    {
        time_t t = time(NULL);
        tm* timePtr = localtime(&t);
        year_ = timePtr->tm_year + 1900;
    }
    int Year() {
        return year_;
    }

private:
    int day_;
    int month_;
    int year_;
};

int main() {
    Date d(29, 3);
    std::cout << d.Year() << std::endl;
}
