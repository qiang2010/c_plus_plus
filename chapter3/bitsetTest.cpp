#include <iostream>
#include <bitset>

using namespace std;

/*
 * bitset 类用于处理 位集 上的操作， 需要包含 bitset文件
*/

int main(){

    // 用 unsigned 类型初始化bitset 对象
    bitset<16> bitvec1(0xffff);  // 16位的bitset 里面全是 1
    bitset<32> bitvec2(0xffff);  // 前面16位是 1 ，后面没有初始化的为 0
    bitset<128>bitvec3(0xffff);  // 前面16位是 1 ，后面剩下的全是 0

    // 用 string 对象初始化 bitset
    string str("1100");
    bitset<32> bitvec4(str);  //  从str的右边往左读取，也就是 bitvec4 的 0 和1 位是 0 ，2 和3 位是 1 ，其余都是 0

    string str2("111111111000000010100100111100");
    bitset<32> b2(str2,10,5);    // 从 str2的 str2[10] 连续的 5 个字符作为初始化输入。
    bitset<32> b(str2,str2.size()-10);  // 使用最后十个字符作为初始化，省略最后一个参数，则表示到结束

    cout << b <<endl;   // 直接输出所有的二进制位

    // bitset 上面的操作
    cout<< b.any()<<endl;   // 是否存在 为 1 的位
    cout<< b.count()<<endl;   //为 1 的位的个数
    cout<< b.none()<<endl;   // 不存在 为 1 的为吗？
    cout<< b.size()<<endl;   //  位的个数
    cout<< b[3]<<endl;   // 输出第四位

    cout<< b.set()<<endl;   // 将所有位都设置为 1
    cout<< b.set(2)<<endl;   // 将第三位设置为 1

    cout<< b.test(2)<<endl;   // 测试某位是否为 1

    cout<< b.reset()<<endl;   // 将所有位都设置为 0
    cout<< b.reset(2)<<endl;   // 将第三位设置为 0

    cout<< b.flip()<<endl;   //  翻转
    cout<< b.flip(2)<<endl;   //  翻转 某一位

    cout<< b.to_ulong()<<endl;   //  返回一个 unsigned long的值

}
