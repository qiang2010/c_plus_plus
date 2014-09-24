#include <iostream>

using namespace std;

void printStringInfo(string a){

    cout<< "empty? "<<a.empty()<<endl;
    cout<< "size? "<<a.size()<<endl;
}

int main(){

    string fortest;
    printStringInfo(fortest);

    getline(cin, fortest);
    printStringInfo(fortest);

    string a = "abcdef",  b = "abcdefg";
    cout <<a << ">"<<b<< "?  "<<(a>b) ;

    // string对象的赋值操作，
    string c = "qiang";
    a = c;    // 将c的内容拷贝一份给 a


    // string相加，和java不一样，C++要求，相加的两个字符串，至少有一个是string类型的
    string d = "ji " + c ;   // 是正确的，因为+两边c为string，如果是“qiang” + "ji" 就会报错

}
