#include <iostream>  
using namespace std;  
  
/*���Ѷ���*/  
class MaxHeap  
{  
private:  
    int size; //���ѵ�Ԫ����Ŀ  
int * array;  //����������׵�ַָ��  
public:  
    MaxHeap(int array[],int n); //�����������ʼ��һ������   
         void buildHeap();   //��������  
    void siftDown(int index);  //����ɸѡ��  
    void swap(int index1,int index2);  //����λ��Ϊindex1��index2��Ԫ��  
    void removeMax();  //ɾ���Ѷ������ֵ--���������һ��Ԫ�ؽ���λ�ò����¹�������  
    int leftChild(int index);  //�������ӵ�λ��  
    int rightChild(int index);  //�����Һ��ӵ�λ��  
};  