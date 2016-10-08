//迷宫问题 http://www.nowcoder.com/questionTerminal/6276dbbda7094978b0e9ebb183ba37b9
// 解法：用一个bfs（队列），然后用一个数组存最短距离

// write your code here cpp
#include<iostream>
#include<queue>
#include<utility>
using namespace std;

#define INF 1000000
int dis[10][10];
//起点
int sx,sy;
//终点
int dx,dy;
int fx[4]={-1,0,0,1};
int fy[4]={0,-1,1,0};   
int  bfs(vector<vector<char> > &a)
{
	queue<pair<int,int> > q;
	dx=0;dy=1;
	sx=9,sy=8;
	q.push(make_pair(dx,dy));
	pair<int,int> pos;
	int x,y;
	//初始化dis[][]
	for(int i=0;i<10;i++)
		for(int j=0;j<10;j++)
			dis[i][j]=INF;
	dis[dx][dy]=0;   
	while(!q.empty())
	{
		pos=q.front();
		q.pop();
		if(x==sx && y==sy) break;
		for(int i=0;i<4;i++)
		{
			x=fx[i]+pos.first;
			y=fy[i]+pos.second;
			if(x>=0 && x<10 && y>=0 && y<10 && a[x][y]!='#' && dis[x][y]==INF)
			{
				dis[x][y]=dis[pos.first][pos.second]+1;
				q.push(make_pair(x,y));
			} 
		}
	}
	return dis[sx][sy];
}
int main()
{
	vector<vector<char> > a(10,vector<char>(10,0));
	while(cin>>a[0][0])
	{
		for(int i=0;i<10;i++)
		{
			for(int j=0;j<10;j++)
			{ 
				if(i==0 && j==0 ) continue;
				else
					cin>>a[i][j];
			}
		}
		int p;
		p=bfs(a);
		cout<<p<<endl;
	}
}
