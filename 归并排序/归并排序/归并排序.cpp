//////////////////////////////////////////////////////////////////////////////////////
//�㷨���裺
//      1������ռ䣬ʹ���СΪ�����Ѿ���������֮�ͣ��ÿռ�������źϲ��������
//      2���趨����ָ�룬���λ�÷ֱ�Ϊ�����Ѿ��������е���ʼλ��
//      3���Ƚ�����ָ����ָ���Ԫ�أ�ѡ�����С��Ԫ�ط��뵽�ϲ��ռ䣬���ƶ�ָ�뵽��һλ��
//      4���ظ�����3ֱ��ĳһָ��ﵽ����β
//      5������һ����ʣ�µ�����Ԫ��ֱ�Ӹ��Ƶ��ϲ�����β
////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>  
using namespace std;  
template <class T>  
void MSort(T a[], int left, int right)  
{  
      if (left < right)  
      {  
            int center = (left + right) / 2;//ȡ���е�  
            //��ԭ�����з�Ϊ����  
            MSort(a, left, center);  
            MSort(a, center+1, right);  
            //�ϲ��ղŷֿ������Σ��õ�ԭ�����е���������  
            Merge(a, left, center, right, right-left+1);  
      }  
}  
  
template <class T>  
void MergeSort(T a[], int n)  
{  
    //���õݹ�鲢������  
      MSort(a, 0, n-1);  
}  
template <class T>  
void Merge(T a[], int left, int center, int right, int n)  
{  
      T *t = new T[n];//��ű������Ԫ��  
      int i = left;  
      int j = center + 1;  
      int k = 0;  
      //�ϲ����飬�ò������������ߴ�Ͳ�����ߵ������ұߵļ������ȴ�������һ����ߵ����Ƚϣ��ұߴ�Ͳ����ұߵ�������ߵļ������ȴ�������һ���ұߵ����Ƚϣ�����ָ�Ĳ����ǲ��뵽������t[]��  
      while (i<=center && j<=right)  
      {  
            if (a[i] <= a[j])  
                  t[k++] = a[i++];  
            else  
                  t[k++] = a[j++];  
      }  
      //����Ĳ�����ִ���������ұ߶��п���ʣ�����ɸ�Ԫ�أ�����һ�ߵ�Ԫ�ؿ϶���ȫ�����Ƶ������飬��ʱ��Ҫ����Դ�ʣ�µ�Ԫ��  
      if (i == center+1)  
      {  
            while (j <= right)  
                  t[k++] = a[j++];  
      }  
      else  
      {  
            while (i <= center)  
                  t[k++] = a[i++];  
      }  
      //��t[]��Ԫ�ظ��ƻ�a[]��left��right��  
      for (i=left,k=0; i<=right; i++,k++)  
            a[i] = t[k];  
      //�ͷ��ڴ�  
      delete []t;  
}  
int main()  
{  
    int intArray[5] = { 5 , 6 , 2 , 5 , 9 };  
    MergeSort(intArray,5);  
    for(int i = 0; i < 5; i++)  
    cout << intArray[i] << endl; 

	system("pause");
	return 0;
}  