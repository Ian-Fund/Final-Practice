//
// Created by mathbot on 12/5/17.
//

#ifndef FINAL_REVIEW_NO6_2_SHAPE_H
#define FINAL_REVIEW_NO6_2_SHAPE_H


class Shape {
protected:
    double width;
    double height;

    Shape(){

    }
    Shape(double width, double height){
        this->width = width;
        this->height=height;
    }
    void setWidth(double width){
        this->width = width;
    }
    void setHeight(double height){
        this->height = height;
    }
    double getWidth(){
        return width;
    }
    double getHeight(){
        return height;
    }
};


#endif //FINAL_REVIEW_NO6_2_SHAPE_H
