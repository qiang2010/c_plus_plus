#include <iostream>
#include <cctype>

// cctype ͷ�ļ��еĺܶຯ���������ڴ���string������ַ������������κ�charֵ

/*
*     ��Ҫע���ʱ�� c�е�һЩͷ�ļ���c++����Ȼ�����ã����ǲ�����ֱ��ʹ�� name.h���ļ�
*     ��Ϊ��Ӧ���ļ���c++�Ѿ�������� cname�ļ���cname���ļ��е����ֶ���std�еġ�
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
