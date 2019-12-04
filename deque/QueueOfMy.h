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
