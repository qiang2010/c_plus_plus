#include <iostream>

using namespace std;

int main(){

  /*
   * string::size_type 是String的配套类型，一般是于机器无关的
   * 尽量不要把int类型的变量用于遍历string
   * 不要把 size()函数返回给int类型，因为size返回的是 string::size_type类型的
  */
  string test = "qiang";
  for( string::size_type i = 0; i< test.size();i++)
    cout << test[i]<<endl;




}
