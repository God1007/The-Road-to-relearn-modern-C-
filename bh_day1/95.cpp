#include<iostream>
#include<fstream>

//文件操作
/*
通过文件可以将数据持久化
C++中对文件操作需要包含头文件<fstream>

文件类型分为两种：
1、文本文件 -文件以文本的ASCII码形式存储在计算机中
2、二进制文件 -文件以文本的二进制形式存储在计算机中，用户无法直接读懂

操作文件的三大类：
1、ofstream 写操作
2、ifstream 读操作
3、fstream  读写操作
*/

/*
写文件流程
1、包含头文件
2、创建流对象 ofstream ofs
3、打开文件 ofs.open("文件路径",打开方式)
4、写数据 ofs << "写入的数据"
5、关闭文件 ofs.close()
*/

/*
文件打开方式
ios::in 为读文件打开文件
ios::out 为写文件打开文件
ios::binary 二进制方式
ios::ate 初始位置：文件尾
ios::trunc 如果文件存在先删除，在创建

可以配合使用，用 | 就可以了
ios::in | ios::binary
*/

void test(){
    //创建流对象
    std::ofstream ofs;
    ofs.open("test.txt",std::ios::out);
    ofs << "TestContent" << std::endl;
    ofs << "MEME" << std::endl;
    ofs.close();
    std::cout << "文件创建完毕" << std::endl;
}

int main(){
    test();
    return 0;
}