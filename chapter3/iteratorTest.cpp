#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<double>  dList(12,1.1);

    // �������� begin �������������ĵ�һ������
    // �������� end    �����������һ��Ԫ�غ����Ԫ�أ���Ϊ�ڱ���
    // ������ �����ò����������������е�����  *it
    //  �������Ϊ�գ���������� begin �� end ����������ͬ��ֵ
    for(vector<double>::iterator it = dList.begin();it != dList.end();it ++)
    {
       cout << " "<< *it<<endl;
    }
    // const_iterator ����ͨ���õ��������ı�ԭ�������е�Ԫ��
    for( vector<double>::const_iterator it = dList.begin(); it != dList.end() ; it ++){
        cout << *it <<endl;
    }

    //���������Խ����������������Լ��ϻ��߼�ȥһ������ֵ
    vector<double>::iterator mid = dList.begin() + dList.size()/2;
    // ����Ĵ����ʼ��һ����������ʹ����ָ���������м�λ��


    // �κ��޸�vector ���ȵĲ�������ʹ�õ�����ʧЧ

}
