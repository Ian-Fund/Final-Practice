#include <iostream>
#include "Triangle.h"
#include "Shape.h"
using namespace std;
int main() {
    Triangle tri1;
    tri1.setWidth(3);
    tri1.setHeight(5);
    Triangle tri2(5,10);

    cout<<tri1.getArea();
    cout<<endl<<tri2.getArea();

    return 0;
}