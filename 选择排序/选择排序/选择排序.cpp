//////////////////////////////////////////////////////////////////
//ѡ�������˼��ǳ�ֱ�ӣ�����Ҫ����ô���Ǻã��Ҿʹ�����������
//���ҵ���С�ģ�Ȼ��ŵ���һ��λ�á�֮���ٿ�ʣ��Ԫ������С�ģ�
//�ŵ��ڶ���λ�á����Դ����ƣ��Ϳ�������������������ˡ�
//////////////////////////////////////////////////////////////////
#include <iostream>  
using namespace std;  
  
/*���������������ǽ��������е�����Ԫ�ص�λ��*/  
void swap(int array[],int i,int j)  
{  
    int tmp=array[i];  
    array[i]=array[j];  
    array[j]=tmp;  
}  
  
/*ѡ������*/  
void SelectionSort(int array[],int n)  
{  
    for(int i=0;i<n-1;i++)  
    {  
        int smallest=i;  
        for(int j=i+1;j<n;j++)  
        {  
            if(array[smallest]>array[j])  
                smallest=j;  
        }  
        swap(array,i,smallest);  
    }  
}  
  
int main()  
{  
    int array[7]={3,1,2,5,4,6,7};  
    SelectionSort(array,7);  
    for(int i=0;i<7;i++)  
    cout<<array[i]<<"  "<<endl; 

	system("pause");
    return 0;  
}  