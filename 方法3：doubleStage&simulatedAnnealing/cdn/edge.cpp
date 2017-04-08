#include"cdn.h"    

/*
@构建路径边的有参构造函数
@入参：v链路起点ID w终点ID bw总带宽大小 cost单位网络租用费
@返回值：无
修改时间：2017-3-21
*/
 Edge::Edge(int a, int b,int bw, int cost)
{
    this->startNode = a;
    this->endNode = b;
    this->bandWidth = bw;
    this->unitPathCost = cost;
    this->rem_f = bw;
    this->cur_cost = cost;
}
