#include <iostream>
#include "Astar.hpp"
using namespace std;

int main()
{
    //初始化地图，用二维矩阵代表地图，1表示障碍物，0表示可通
    vector<vector<int>> maze={
        {1,1,1,1,1,1,1,1,1,1,1,1},
        {1,0,0,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,1,0,0,0,0,1},
        {1,0,0,0,0,0,1,0,0,0,0,1},
        {1,0,0,0,0,0,1,0,0,0,0,1},
        {1,0,0,0,0,0,1,0,0,0,0,1},
        {1,0,0,0,0,0,1,0,0,0,0,1},
        {1,1,1,1,1,1,1,1,1,1,1,1}
    };
    Astar astar;
    astar.InitAstar(maze);
    
    //设置起始和结束点
    Point start(3,4);
    Point end(6,8);
    //A*算法找寻路径
    list<Point *> path=astar.GetPath(start,end,false);
    //打印
    for(auto &p:path)
        cout<<'('<<p->x<<','<<p->y<<')'<<endl;
    
    system("pause");
    return 0;
}
