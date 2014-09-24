#include <iostream>

using namespace std;

int main(){

   string s;
   cin>>s;   // 注意： 直接使用cin读的时候会在第一个空白字符结束
            //当我们输入hello world的时候，只是会读入hello
   cout <<s<<endl;

   // getline 读取整行文本,会丢弃最后一个换行符
   // 传入两个参数，一个是输入流，一个是string对象
   // getline的返回值是istream参数，也就是cin
   string p;
   getline(cin,p);
   cout<< p<<endl;



}
