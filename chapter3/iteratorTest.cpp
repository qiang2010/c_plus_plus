#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<double>  dList(12,1.1);

    // 迭代器的 begin 函数返回容器的第一个数据
    // 迭代器的 end    函数返回最后一个元素后面的元素，作为哨兵用
    // 可以用 解引用操作符来访问容器中的数据  *it
    //  如果容器为空，则迭代器的 begin 和 end 函数返回相同的值
    for(vector<double>::iterator it = dList.begin();it != dList.end();it ++)
    {
       cout << " "<< *it<<endl;
    }
    // const_iterator 不能通过该迭代器来改变原来容器中的元素
    for( vector<double>::const_iterator it = dList.begin(); it != dList.end() ; it ++){
        cout << *it <<endl;
    }

    //迭代器可以进行算术操作，可以加上或者减去一个整型值
    vector<double>::iterator mid = dList.begin() + dList.size()/2;
    // 上面的代码初始化一个迭代器，使得其指向容器的中间位置


    // 任何修改vector 长度的操作都会使得迭代器失效

}
