#include<cstdlib>
#include<iostream>
#include <algorithm>

using namespace std;
void vector_uni()
{


    int n;

    vector<int>line;
    for(int i=0,i<19,i++)
    {
        cin >> vector[i];
        line.push_back(x)
    }
    int k=0;
    for (int i = 1; i<19; i++)
    {

        if (vector[i] !=vector[k])
        {
            vector[++k] = vector[i];
        }
    }
    cout << endl;
    cout << "**********ȥ�غ�ʣ��" << n << "��Ԫ��***********" ;
    cout << endl;
    cout << endl;
    cout << "����ȥ�غ������Ԫ��:";
    for (int i = 0; i <n; i++)
    {
        cout << vector[i] << " ";
    }
};
int main()
{
    vector_uni();

    return 0;
}







