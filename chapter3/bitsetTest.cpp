#include <iostream>
#include <bitset>

using namespace std;

/*
 * bitset �����ڴ��� λ�� �ϵĲ����� ��Ҫ���� bitset�ļ�
*/

int main(){

    // �� unsigned ���ͳ�ʼ��bitset ����
    bitset<16> bitvec1(0xffff);  // 16λ��bitset ����ȫ�� 1
    bitset<32> bitvec2(0xffff);  // ǰ��16λ�� 1 ������û�г�ʼ����Ϊ 0
    bitset<128>bitvec3(0xffff);  // ǰ��16λ�� 1 ������ʣ�µ�ȫ�� 0

    // �� string �����ʼ�� bitset
    string str("1100");
    bitset<32> bitvec4(str);  //  ��str���ұ������ȡ��Ҳ���� bitvec4 �� 0 ��1 λ�� 0 ��2 ��3 λ�� 1 �����඼�� 0

    string str2("111111111000000010100100111100");
    bitset<32> b2(str2,10,5);    // �� str2�� str2[10] ������ 5 ���ַ���Ϊ��ʼ�����롣
    bitset<32> b(str2,str2.size()-10);  // ʹ�����ʮ���ַ���Ϊ��ʼ����ʡ�����һ�����������ʾ������

    cout << b <<endl;   // ֱ��������еĶ�����λ

    // bitset ����Ĳ���
    cout<< b.any()<<endl;   // �Ƿ���� Ϊ 1 ��λ
    cout<< b.count()<<endl;   //Ϊ 1 ��λ�ĸ���
    cout<< b.none()<<endl;   // ������ Ϊ 1 ��Ϊ��
    cout<< b.size()<<endl;   //  λ�ĸ���
    cout<< b[3]<<endl;   // �������λ

    cout<< b.set()<<endl;   // ������λ������Ϊ 1
    cout<< b.set(2)<<endl;   // ������λ����Ϊ 1

    cout<< b.test(2)<<endl;   // ����ĳλ�Ƿ�Ϊ 1

    cout<< b.reset()<<endl;   // ������λ������Ϊ 0
    cout<< b.reset(2)<<endl;   // ������λ����Ϊ 0

    cout<< b.flip()<<endl;   //  ��ת
    cout<< b.flip(2)<<endl;   //  ��ת ĳһλ

    cout<< b.to_ulong()<<endl;   //  ����һ�� unsigned long��ֵ

}
