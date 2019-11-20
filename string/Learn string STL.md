
# string STL类库学习

---

STL string类提供了强大的功能，使得许多相对复杂的编程内容用简单的语句就可以实现了。并且，它相对于char来说，减少了好几种错误

- 数据越界
- 使用未初始化或者被赋予错误值的指针访问数组元素
- 释放char原先的申请空间后，还保留有没有处理的“悬挂指针”

基于以上的一些特点，特意去了解一下STL string里面常用的几种函数

---

sting 类存储再头文件``#include<string>``里面，并且属于std命名空间里面的内容。我们来了解他的构造函数

构造函数有：

|函数|作用|
|-|-|
|string(const char * s)|用字符串s去初始化|
|string(int n,char c)|用n个字符去初始化|

多个string之间的链接有：

|函数|作用|
|-|-|
|string &operator+=(const string &s)|把字符串s连接到当前字符串的结尾|
|string &append(const char * s)|把c类型字符串s连接到当前字符串结尾|
|string &append(const char * s,int n)|把c类型字符串s的前n个字符连接到当前字符串结尾|
|string &append(const string &s)|把字符串s连接到当前字符串的结尾|
|string &append(const string &s,int pos,int n)|把字符串s中从pos开始的n个字符连接到当前字符串的结尾|
|string &append(int n,char c)|在当前字符串结尾添加n个字符c|
|string &append(const_iterator first,const_iterator last)|把迭代器first和last之间的部分连接到当前字符串的结尾|

还有string的特征函数（反映大小，长度，判空之类的）：

|函数|作用|
|-|-|
|int size()const|返回当前字符串的大小|
|int length()const|返回当前字符串的长度|
|bool empty()const|当前字符串是否为空|
|void resize(int len,char c)|把字符串当前大小置为len，并用字符c填充不足的部分(可以与vector中的resize比较一下...)|
|const_iterator begin()const|返回字符串的首位置|
|const_iterator end()const|返回字符串的最后一个位置|

还有我认为最强大的find函数，它有多个重载形式:

|函数|作用|
|-|-|
|int find(char c) const|默认从0开始，找字符串中是否有c，找到返回当前位置|
|int find(const char * s) const|默认从0开始查找字符串s在当前串中的位置|
|int find(char c,int pos) const|从pos开始找是否有字符c|
|int find(const char * s, int pos) const|从pos开始找是否有字符串c|

还有取代，replace函数:

|函数|作用|
|-|-|
|string &replace(int p0, int n0,const char * s)|删除从p0开始的n0个字符，然后在p0处插入串s|
|string &replace(int p0, int n0,const char * s, int n)|删除p0开始的n0个字符，然后在p0处插入字符串s的前n个字符|

---

然后基本上也就用到了这些.....

---

参考文档:《C++STL基础及应用》

参考网站:[--------->网站<---------](https://www.cnblogs.com/xFreedom/archive/2011/05/16/2048037.html)


