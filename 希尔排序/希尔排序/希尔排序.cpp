///////////////////////////////////////////////////////////////////////////////////////
//该方法实质上是一种分组插入方法。比较相隔较远距离（称为增量）的数，使得
//数移动时能跨过多个元素，则进行一次比[2]  较就可能消除多个元素交换。
//D.L.shell于1959年在以他名字命名的排序算法中实现了这一思想。算法先将要排序的一
//组数按某个增量d分成若干组，每组中记录的下标相差d.对每组中全部元素进行排序，
//然后再用一个较小的增量对它进行，在每组中再进行排序。当增量减到1时，整个要排
//序的数被分成一组，排序完成。一般的初次取序列的一半为增量，以后每次减半，直到增量为1。
///////////////////////////////////////////////////////////////////////////////////////


#include <iostream>  
using namespace std;  
  
/*交换函数，作用是交换数组中的两个元素的位置*/  
void swap(int array[],int i,int j)  
{  
    int tmp=array[i];  
    array[i]=array[j];  
    array[j]=tmp;  
}  
  
/*希尔排序*/  
void ShellSort(int array[],int n)  
{  
    for(int delta=n/2;delta>0;delta/=2)  
    {  
        for(int i=0;i<delta;i++)  
        {  
            for(int j=i+delta;j<n;j+=delta)  
            {  
                for(int k=j;k>0;k-=delta)  
                {  
                    if(array[k]<array[k-1])  
                        swap(array,k,k-1);  
                }  
            }  
        }  
    }  
}  
  
int main()  
{  
    int array[8]={6,8,7,3,1,2,5,4};  
    ShellSort(array,8);  
    for(int i=0;i<8;i++)  
    cout<<array[i]<<"  "<<endl; 

	system("pause");
    return 0;  
}  