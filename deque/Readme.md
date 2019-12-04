
# deque容器

---

简介：deque容器是一个能对特定类型的元素进行线性处理，类似于向量。与`vector`的区别是`deque`能够高效地插入和删除容器的尾部元素和头部元素，`deque`也称作双端队列

常用的函数有：

- 构造函数

|函数|功能|
|-|-|
|deque()|创建一个空的容器|
|deque(int nSize)|创建一个容易，大小为nSize|
|deque(int nSize, const T& t)|创建一个容器，容器的元素元素个数为nSize, 值均为t|
|deque(const deque& )|复制构造函数|

- 增加函数

|函数|功能|
|-|-|
|void push_front(const T& x)|从队列的头部插入一个元素x|
|void push_back(const T& x)|从队列的尾部插入一个元素x|
|iterator insert(iterator it, const T& x)|在某一个元素前增加一个元素x|
|void insert(iterator it, int n, const T&x)|在某一个元素前增加n个相同的元素x|
|void insert(iterator it, const_iterator first, const_iterator last)|在容器中的某一个元素前插入另一个元素类型相同的 (first,last)(包含first)间的数据|

- 删除函数

|函数|功能|
|-|-|
|iterator erase(iterator it)|删除容器中的某一个元素|
|iterator erase(iterator first, iterator last)|删除容器中从first到last的元素|
|void pop_front()|删除容器的前面一个元素|
|void pop_back()|删除容器的后面一个元素|
|void clear()|删除容器中所有的元素|

- 遍历函数

|函数|功能|
|-|-|
|reference at(int pos)|返回pos位置的元素|
|reference front()|返回首元素的引用|
|reference back()|返回尾元素的引用|
|iterator begin()|返回指针，指向第一个元素|
|iterator end()|返回指针，指向最后一个元素|

- 判断函数

|函数|功能|
|-|-|
|bool empty()const|判断容器是否为空，true时，容器中无元素|

- 大小函数

|函数|功能|
|-|-|
|int size()const|返回容器中的元素个数|
|int max_size()const|返回最大可允许的元素数量值|

---

下面是利用改STL来完成队列的操作

要点：

- 队列中应该能够出队入队
- 队列中的出队是从头部出去，入队应该从尾部进入
- 队列能够判空
- 队列能够获得队列的大小
- 队列能够知道头和尾元素，并能够返回操作指针

基于以上特点，我们写一个类似的一个小程序

#### main.cpp

```c++
#include"QueueOfMy.h"

int main()
{
	int ans = 100;
	QueueOfMy<int> q1;
	cout << "判空" << endl;
	cout<<q1.empty() << endl;
	while (ans--)
		q1.push(ans);
	cout << "初始化队列" << endl;
	q1.display();
	cout << "判空" << endl;
	cout << q1.empty() << endl;
	cout << "出队之后" << endl;
	q1.pop();
	q1.display();

	cout << "队头元素" << endl;
	cout<<q1.front()<<endl;
	cout << "队尾元素" << endl;
	cout<<q1.last()<<endl;

	cout << "清空" << endl;
	q1.clear();
	cout << q1.empty() << endl;

	return 0;
}

```

QueueOfMy.h

```c++
#pragma once
#ifndef _QUEUEOFMY_H_
#define _QUEUEOFMY_H_
#include<iostream>
#include<deque>
using namespace std;

template<typename T>
class QueueOfMy
{
private:
	deque<T>d;
public:
	void push(const T& data);//入队
	void pop();//出队
	int size();//大小
	bool empty();//判空
	T& front();//队头
	T& last();//队尾
	void clear();//清空
	void display();//显示
};


#endif // !_QUEUEMY_H_

template<typename T>
inline void QueueOfMy<T>::push(const T& data)
{
	d.push_back(data);
}

template<typename T>
inline void QueueOfMy<T>::pop()
{
	d.pop_front();
}

template<typename T>
inline int QueueOfMy<T>::size()
{
	return d.size();
}

template<typename T>
inline bool QueueOfMy<T>::empty()
{
	return d.empty();
}

template<typename T>
inline T& QueueOfMy<T>::front()
{
	return *d.begin();
}

template<typename T>
inline T& QueueOfMy<T>::last()
{
	return *--d.end();
}

template<typename T>
inline void QueueOfMy<T>::clear()
{
	d.clear();
}

template<typename T>
inline void QueueOfMy<T>::display()
{
	for (int i = 0; i < d.size(); i++)
		cout << d[i] << " ";
	cout << endl;
}


```
