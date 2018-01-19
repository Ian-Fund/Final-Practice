#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string get_str_between_two_str(const string &s,const string &begin, const string &end);

int main() {

    string input = "input1.txt";
    ifstream ifs(input.c_str(),fstream::in);
    if (!ifs.is_open()){
        cerr<<"Unable to open " << input <<endl;
        exit(1);
    }
    char begin = '{';
    string end = "}";



    char ch;

    while (ifs >> noskipws >> ch) {
        cout << ch<< endl; // Or whatever
    }

//    for (int i = 0; i <  ifs.get(); ++i) {
//        while (c != '{') {
//            cout << c;
//
//        }
//        while (ifs.get()) {
//            cout << c;
//
//        }
//    }



    string spaces = "";
//
//    while (!ifs.eof()){
//        getline(ifs, spaces);
//        cout<<get_str_between_two_str(spaces,begin,end)<<endl;
//        //cout<<spaces<<endl;
//    }


    return 0;
}

string get_str_between_two_str(const string &s,const string &begin, const string &end) {
    int first_delim_pos = s.find(begin);
    int end_pos_of_first_delim = first_delim_pos + begin.length();
    int last_delim_pos = s.find_first_of(end, end_pos_of_first_delim);

    return s.substr(end_pos_of_first_delim,last_delim_pos - end_pos_of_first_delim);
}