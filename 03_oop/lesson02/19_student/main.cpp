#include <cassert>
#include <stdexcept>

class Student {
public:
    // constructor
    Student(std::string name, int grade, float gpa) : name(name), grade(grade), gpa(gpa) {
        Validate();
    }
    // accessors
    std::string Name() const { return name; }
    int Grade() const { return grade; }
    float Gpa() const { return gpa; }
    // mutators
    void Name(std::string name) {
        this->name = name;
        Validate();
    }
    void Grade(int grade) {
        this->grade = grade;
        Validate();
    }
    void Gpa(float gpa) {
        this->gpa = gpa;
        Validate();
    }

private:
    std::string name;
    int grade;
    float gpa;

    void Validate() const {
        if (grade < 0 || grade > 12) {
            throw std::invalid_argument("invalid grade");
        }
        if (gpa < 0 || gpa > 4) {
            throw std::invalid_argument("invalid gpa");
        }
    }
};

// TODO: Test
int main() {
    Student s("Fred", 6, 3.2);
    bool caught = false;
    try {
        s.Grade(13);
    } catch(...) {
        caught = true;
    }
    assert(caught);
}
