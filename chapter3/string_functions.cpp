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

    // string����ĸ�ֵ������
    string c = "qiang";
    a = c;    // ��c�����ݿ���һ�ݸ� a


    // string��ӣ���java��һ����C++Ҫ����ӵ������ַ�����������һ����string���͵�
    string d = "ji " + c ;   // ����ȷ�ģ���Ϊ+����cΪstring������ǡ�qiang�� + "ji" �ͻᱨ��

}
