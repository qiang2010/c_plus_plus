#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector< int > intlist(10,12) ;  // ����vector�ж��ַ���

    for(vector<int>::size_type i = 0; i < intlist.size(); i++){
        cout<< i <<"  "<< intlist[i]<<endl;
    }

    cout << "empty? "<<intlist.empty()<<endl;
    cout << "size ? "<<intlist.size()<<endl;
    intlist.push_back(1111);
    cout << "size ? "<<intlist.size()<<endl;

}
