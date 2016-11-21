//////////////////////////////////////////////////////////////////
//选择排序的思想非常直接，不是要排序么？那好，我就从所有序列中
//先找到最小的，然后放到第一个位置。之后再看剩余元素中最小的，
//放到第二个位置……以此类推，就可以完成整个的排序工作了。
//////////////////////////////////////////////////////////////////
#include <iostream>  
using namespace std;  
  
/*交换函数，作用是交换数组中的两个元素的位置*/  
void swap(int array[],int i,int j)  
{  
    int tmp=array[i];  
    array[i]=array[j];  
    array[j]=tmp;  
}  
  
/*选择排序*/  
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