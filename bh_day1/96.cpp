#include<iostream>
#include<fstream>
#include<string>
//读文件流程
/*
1、包含头文件
2、创建流对象 ifstream ifs
3、打开文件并判断是否打开 ifs.open("文件路径",打开方式)
4、四种方式读取
5、关闭文件 ifs.close()
*/

void test(){
    std::ifstream ifs;
    ifs.open("test.txt",std::ios::in);
    if (!ifs.is_open()){
        std::cout << "文件打开失败" << std::endl;
        return;
    }
    //第一种读取
    char buf[1024] = {0};
    while(ifs >> buf){
        std::cout << buf << std::endl;
    }
    //第二种，因为指针已经在文件末尾，所以getline()立即失败，不会进入循环，可以close掉重新打开
    //或者使用ifs.clear();// 清除流状态标志（特别是eof标志）和ifs.seekg(0);// 将指针移动到文件开头
    ifs.clear();
    ifs.seekg(0);
    char buf2[1024] = {0};
    while(ifs.getline(buf2, sizeof(buf2))){
        std::cout << buf2 << std::endl;
    }
    ifs.clear();
    ifs.seekg(0);
    //第三种
    std::string buf3;
    while(getline(ifs,buf3)){
        std::cout << buf3 << std::endl;
    }
    ifs.clear();
    ifs.seekg(0);
    //第四种
    char c;
    while((c = ifs.get())!=EOF){//没到文件尾
        std::cout << c;
    }

    ifs.close();

}

int main(){
    test();
    return 0;
}