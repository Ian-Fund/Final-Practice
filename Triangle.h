//
// Created by mathbot on 12/5/17.
//

#ifndef FINAL_REVIEW_NO6_2_TRIANGLE_H
#define FINAL_REVIEW_NO6_2_TRIANGLE_H


#include "Shape.h"

class Triangle: public Shape{
public:
    Triangle(){

    }
    Triangle(double width, double height){
        this->setWidth(width);
        this->setHeight(height);
    }
    double getArea(){
        double x;
        x= (this->getWidth()*this->getHeight()/2);
    }
};


#endif //FINAL_REVIEW_NO6_2_TRIANGLE_H
