#include <iostream>
#include "FindMinMax.h"

template <class T>
class FindMinMax{
private:
    T arr[6];
    T findMin( ){
        T arr[6];
        T min = arr[0];
        for (int i = 0; i < 6; ++i) {
            if(arr[i]< min){
                min = arr[i];
            }
        }
        return min;
    };
    T findMax(){
        {
            T arr[6];
            T max = arr[0];
            for (int i = 0; i < 6; ++i) {
                if(arr[i] > max){
                    max = arr[i];
                }
            }
            return max;
        }
    };

public:
    T display(){
        cout<<"Max value is "<< findMax()<<endl;
        cout<<"Min value us "<<findMin()<<endl;

    }
    FindMinMax(T newArr[]){
        for (int i = 0; i < 6; ++i) {
            arr[i] = newArr[i];
        }
    }

};

int main() {
    int arr1[6]= {1,-2,-5,10,62,13};
    FindMinMax<int> intArr(arr1);
    intArr.display();
     char arr2[]={'k'};
    FindMinMax<char>charArr(arr2);
    charArr.display();
    return 0;
}