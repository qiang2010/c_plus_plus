#include <iostream>

using namespace std;

int main(){

   string s;
   cin>>s;   // ע�⣺ ֱ��ʹ��cin����ʱ����ڵ�һ���հ��ַ�����
            //����������hello world��ʱ��ֻ�ǻ����hello
   cout <<s<<endl;

   // getline ��ȡ�����ı�,�ᶪ�����һ�����з�
   // ��������������һ������������һ����string����
   // getline�ķ���ֵ��istream������Ҳ����cin
   string p;
   getline(cin,p);
   cout<< p<<endl;



}
