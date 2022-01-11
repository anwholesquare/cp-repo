#include<bits/stdc++.h>
using namespace std;

int main() {
    map<string,int> student_mark;
    student_mark["Anan"] = 92;
    student_mark["Adiba"] = 81;
    student_mark["Shanto"] = 87;
    student_mark["Elhum"] = 73;

    cout << "BEGIN TO END ORDER: " << endl << endl;
    map<string, int>::iterator ii;
    for (ii =  student_mark.begin(); ii != student_mark.end(); ++ii){
        cout << (*ii).first << " : " << (*ii).second << endl;
    }


    cout << "END TO BEGIN ORDER: " << endl << endl;

    map<string, int>::reverse_iterator ri;
    for ( ri =  student_mark.rbegin(); ri != student_mark.rend(); ++ri){
        cout << (*ri).first << " : " << (*ri).second << endl;
    }

}

/*

MAP OVERVIEW

key     | value
int        int
int        string
string     int


MAP Iterators

    map<string,int> student_mark;
    map<string, int>::iterator ii;
    for (ii =  student_mark.begin(); ii != student_mark.end(); ++ii){
        cout << (*ii).first << " : " << (*ii).second << endl;
    }


*/