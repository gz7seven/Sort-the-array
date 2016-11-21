////////////////////////////////////////////////////////////////////////////////////
//所谓插入排序法，就是检查第i个数字，如果在它的左边的数字比它大，进行交换，这个动作
//一直继续下去，直到这个数字的左边数字比它还要小，就可以停止了。插入排序法主要的回圈
//有两个变数：i和j，每一次执行这个回圈，就会将第i个数字放到左边恰当的位置去。
/////////////////////////////////////////////////////////////////////////////////////

#include <iostream>  
using namespace std;  
  
/*交换函数，作用是交换数组中的两个元素的位置*/  
void swap(int array[],int i,int j)  
{  
    int tmp=array[i];  
    array[i]=array[j];  
    array[j]=tmp;  
}  
  
/*插入排序*/  
void InsertSort(int array[],int n)  
{  
    for(int i=1;i<n;i++)  
    {  
        for(int j=i;j>0;j--)  
        {  
            if(array[j]>array[j-1])  
                swap(array,j,j-1);  
            else  
                break;  
        }  
    }  
}  
  
int main()  
{  
    int array[7]={3,1,2,5,4,7,9};  
    InsertSort(array,7);  
    for(int i=0;i<7;i++)  
    cout<<array[i]<<"  "<<endl;

	system("pause");
    return 0;  
}  