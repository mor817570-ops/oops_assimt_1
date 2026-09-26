#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float breadth;

public:
    Rectangle(float l = 0, float b = 0) : length(l), breadth(b) {}

    void input() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter breadth: ";
        cin >> breadth;
    }

    float area() const {
        return length * breadth;
    }

    float perimeter() const {
        return 2 * (length + breadth);
    }
};

int main() {
    Rectangle r;
    r.input();

    cout << "Area = " << r.area() << endl;
    cout << "Perimeter = " << r.perimeter() << endl;

    return 0;
}
