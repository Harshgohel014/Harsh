#include <iostream>
using namespace std;
class Distance {
private:
    int feet;
    int inches;
public:
    Distance() {
        feet = 0;
        inches = 0;
    }

    
    Distance(int ft, int in) {
        feet = ft;
        inches = in;
    }
    void display() {
        cout << "Distance: "<<"Feet = " << feet<<"  Inches = "<< inches<< endl;
    }
};
int main() {
    Distance d1; 
    Distance d2(5, 9);
    d1.display(); 
    d2.display(); 
    return 0;
}
