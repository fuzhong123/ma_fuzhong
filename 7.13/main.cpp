#include<cstdlib>
#include<iostream>
#include <algorithm>
using namespace std;

void array_uni()
{
    int n;
    int *array;

    array = new int[n];
    cout << "������20����������Ԫ��:"<<endl;
    for (int i = 0; i < 20; i++)
    {
        cin >> array[i];
    }
    sort(array, array + 20);
    int k = 0;
    for (int i = 1; i<20; i++)
    {

        if (array[i] !=array[k])
        {
            array[++k] = array[i];
        }
    }

    cout << "����ȥ�غ������Ԫ��:";
    for (int i = 0; i <n; i++)
    {
        cout << array[i] << " ";
    }

};
int main()
{
    array_uni();
    cout << endl;
    cout << endl;
    return 0;
}
