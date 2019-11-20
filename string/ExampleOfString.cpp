#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1 = "How are you?";
	string s2(s1);
	string s3 = s1;

	cout << "s1:" << s1 << endl << "s2:" << s2 << endl << "s3:" << s3 << endl;
	string s4 = s1 + s2;
	cout << "s4:" << s4 << endl;
	cout << "输出s4字符串的长度:" << s4.length() << endl;
	cout << "找\"you\"字符，并且返回下标" << s4.find("you") <<" 输出位置"<<s4[s4.find("you")]<< endl;
	cout << "找\"how\" 找不到返回npos: " << s4.find("how") << endl;
	s4.erase(s4.begin(), s4.begin() + 3);
	cout << "删除字符串，从第一个位置到偏移三个位置" << s4 << endl;
	cout << "更改s1字符串的5到8的位置，改成is" << endl<<"改之前: "<<s1;
	s1.replace(4,3, "is");//4是定位位置，3是更改后面的几个位置
	cout << " 改后:" << s1 << endl;


	return 0;
}
