#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;

//函数声明
void _Arry(vector<vector<int>>& arry, int line, int column);

int main()
{
	int column, line;
	cin >> line >> column;
    
     //在此地方，声明了以为数组arry，有line个
	vector< vector < int > > arry(line);

     //此地方，用申请来的arry数组，再次申请空间，申请column个，resize分配空间，创建对象
	for (int i = 0; i < line; i++)
		arry[i].resize(column);

	_Arry(arry, line, column);
	
     //清理申请来的空间，如何申请便如何清理
	for (int i = 0; i < line; i++)
		arry[i].clear();
	arry.clear();

	return 0;
}

//调用函数调用申请的二维数组
void _Arry(vector<vector<int>>&arry,int line,int column)
{
	for (int i = 0; i < line; i++)
		for (int j = 0; j < column; j++)
			arry[i][j] = 8;

	for (int i = 0; i < line; i++)
	{
		for (int j = 0; j < column; j++)
			cout << arry[i][j] << " ";
		cout << endl;
	}
}
