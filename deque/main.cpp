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
