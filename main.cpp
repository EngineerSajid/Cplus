#include <iostream>
using namespace std;

class Line {
private:
    double length;
    double width;
public:
    void setLength( double len, double wid);
    double getLength();
    Line( double len, double wid ); //This is the constructor

};
//Member function definition including constructor
Line::Line( double len, double wid) {

    length = len;
    width = wid;
}
void Line::setLength( double len, double wid ) {
    length = len;
    width = wid;
}

double Line::getLength(){
    return length * width;
}
//Main function for the program
int main() {
    double len, wid;
    cout << "Rectangle Area Calculator : " << endl;
    cout << "Enter length: ";
    cin >> len;
    cout << "Enter width: ";
    cin >> wid;
    Line line(len, wid);

    //get initially set length
    cout << "Area of rectangle: " << line.getLength() << endl;

    //set line length again
    cout << "Enter new length: ";
    cin >> len;
    cout << "Enter new width: ";
    cin >> wid;
    line.setLength(len, wid);
    cout << "New area of rectangle: " << line.getLength() << endl;
    auto hello = 5;


    return 0;
}






