#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;


void readFile(string &array, string input);
void removeDups(string &array);

int main() {

    string input = "input1.txt";
    string array[5];

    char ch;
    string placeHolder= "";
    ifstream ifs(input.c_str(),fstream::in);
    if (!ifs.is_open()){
        cerr<<"Unable to open " << input <<endl;
        exit(1);
    }



    int x = 0;
    while (ifs >> skipws >> ch) {
        if (ch == '{') {
            placeHolder="";
        }
        else if(ch =='}'){
            array[x]=placeHolder;

            x++;
        }
        else {
            placeHolder+=ch;

        }
    }











    return 0;
}



void readFile(string &array, string input){


    char ch;
    string placeHolder= "";
    ifstream ifs(input.c_str(),fstream::in);
    if (!ifs.is_open()){
        cerr<<"Unable to open " << input <<endl;
        exit(1);
    }



    int x = 0;
    while (ifs >> skipws >> ch) {
        if (ch == '{') {
            placeHolder="";
        }
        else if(ch =='}'){
            array[x]=placeHolder;

            x++;
        }
        else {
            placeHolder+=ch;

        }
    }





void removeDups(string &array){
    for (int i = 0; i < 10000; i++){
        for (int j = i + 1; j < 10000; j++)
        {
            if (array[i] == array[j])
            {
                array[j]= array[j+1];
            }
        }
    }

}