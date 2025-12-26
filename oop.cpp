#include<iostream>

using namespace std;

class dogs
{
private:
    int age;
    string size;
    string colour;
public:
 // 构造函数
    dogs(int a, std::string s, std::string c) {
        age = a;
        size = s;
        colour = c;
    }

    // 设置年龄
    void setAge(int a) {
        age = a;
    }

    // 获取年龄
    int getAge() {
        return age;
    }

    // 设置体型
    void setSize(std::string s) {
        size = s;
    }

    // 获取体型
    std::string getSize() {
        return size;
    }

    // 设置颜色
    void setColour(std::string c) {
        colour = c;
    }

    // 获取颜色
    std::string getColour() {
        return colour;
    }

    // 打印狗的信息
    void printInfo() {
        std::cout << "Dog Information:" << std::endl;
        std::cout << "Age: " << age << " years" << std::endl;
        std::cout << "Size: " << size << std::endl;
        std::cout << "Colour: " << colour << std::endl;
    }
};

int main() {
    
    return 0;
}