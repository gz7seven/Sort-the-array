///////////////////////////////////////////////////////////////////////////////////////////////////
//1、冒泡排序算法的运作如下：（从后往前）
//2、比较相邻的元素。如果第一个比第二个大，就交换他们两个。
//3、对每一对相邻元素作同样的工作，从开始第一对到结尾的最后一对。在这一点，最后的元素应该会是最大的数。
//4、针对所有的元素重复以上的步骤，除了最后一个。
//5、持续每次对越来越少的元素重复上面的步骤，直到没有任何一对数字需要比较。
////////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>  
using namespace std;  
  
/*交换函数，作用是交换数组中的两个元素的位置*/  
void swap(int array[],int i,int j)  
{  
    int tmp=array[i];  
    array[i]=array[j];  
    array[j]=tmp;  
}  
  
/*冒泡排序*/  
void BubbleSort(int array[],int n)  
{  
    for(int i=0;i<n-1;i++)  
    {  
        for(int j=n-1;j>i;j--)  
        {  
            if(array[j]<array[j-1])  
                swap(array,j,j-1);  
        }  
    }  
}  
  
int main()  
{  
    int array[7]={3,1,2,5,4,7,9};  
    BubbleSort(array,7);  
    for(int i=0;i<7;i++)  
    cout<<array[i]<<"  "<<endl;

	system("pause");
    return 0;  
}  