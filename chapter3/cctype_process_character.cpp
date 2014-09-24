#include <iostream>
#include <cctype>

// cctype 头文件中的很多函数可以用于处理string对象的字符，或者其他任何char值

/*
*     需要注意的时候 c中的一些头文件在c++中仍然可以用，但是不建议直接使用 name.h的文件
*     因为相应的文件，c++已经处理成了 cname文件，cname的文件中的名字都是std中的。
*/

using namespace std;

int main(){
   string test = "qiang ji";

   string::size_type str_size = test.size();
   for( string::size_type i = 0 ; i < str_size ; i++ ){
      cout << test[i]<<"  ispunct: "<< ispunct(test[i])<<endl;
      cout << test[i]<<"  isalnum: "<< isalnum(test[i])<<endl;
      cout << test[i]<<"  isspace: "<< isspace(test[i])<<endl;
      cout << test[i]<<"  isgraph: "<< isgraph(test[i])<<endl;
   }

}
