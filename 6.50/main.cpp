#include <iostream>

using namespace std;

int main()
{
    cout << "得出结论：按值传递，不会改变当前调用函数里的实参，按引用传递，会改变调用函数里面的实参。\n按值传递，这种方式，可以保护实参不被修改，但效率比较低。\n按引用传递，本质是传递一个指针指向地址值，实参会发生修改，但效率更高。" << endl;
    return 0;
}
