#include <iostream>

using namespace std;

int main(){

  /*
   * string::size_type ��String���������ͣ�һ�����ڻ����޹ص�
   * ������Ҫ��int���͵ı������ڱ���string
   * ��Ҫ�� size()�������ظ�int���ͣ���Ϊsize���ص��� string::size_type���͵�
  */
  string test = "qiang";
  for( string::size_type i = 0; i< test.size();i++)
    cout << test[i]<<endl;




}
