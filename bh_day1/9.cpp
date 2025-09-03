#include<iostream>
using namespace std;

int main()
{
    //数据类型：基本数据类型
    /*
    默认情况下，小数会显示出六位有效数字
    整型int 4B
    字符型char 1B
    浮点型float 4B
    双精度double 8B
    */
   float f = 3.14f;//加个f让他定义为f，它默认是double
   double d = 3.14;
   cout << "float的数据内存占用：" << sizeof(f) << endl;
   cout << "double的数据内存占用：" << sizeof(d) << endl;
   cout << "f=" << f << endl;
   cout << "d=" << d << endl;

   //科学计数法
   float f2 = 3.1113e-2f; //3.1113*10的-2次方
   cout << "f2=" << f2 << endl;


   system("pause");
   return 0;
}