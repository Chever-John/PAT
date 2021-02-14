//
// Created by 硬汉J on 2021/2/14.
//

#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;
const int maxn = 2010;
int G[maxn][maxn] = { 0 }, weight[maxn] = { 0 };//G:邻接矩阵,边的权值；weight：点的权值
map<string, int> stringtoint;//人名->编号
map<int, string> inttostring;//编号->人名
map<string, int> gang;//以XXX为首的团体人数
int numperson=0, n, threshold; //numperson人数，n边数，
bool vis[maxn] = { false }; //标记是否被访问过
/*遍历单个连通块*/
void DFS(int nowVistor,int &head, int& nummember, int& totalvalue) {
    nummember++;
    vis[nowVistor] = true;
    if (weight[nowVistor] > weight[head]) //更新头目
        head = nowVistor;
    for (int i = 0; i < numperson; i++) {
        if (G[nowVistor][i] > 0) {
            totalvalue += G[nowVistor][i];
            G[nowVistor][i] = G[i][nowVistor] = 0; //断开连接防止回头
            if (vis[i] == false)  //如果没有被访问过
                DFS(i, head, nummember, totalvalue); //递归遍历“小弟”
        }
    }
    return;
}

/*遍历所有图，获取每个连接通块的信息*/
void DFStravel() {
    for (int i = 0; i < numperson; i++) {  //枚举所有人
        if (vis[i] == false) { //如果i未被访问
            int head = i, nummember = 0, totalvalue = 0; //头目,帮派人数，总边权
            DFS(i,head, nummember, totalvalue);  //遍历i所在的连通块
            if (nummember > 2 && totalvalue > threshold)
                gang[inttostring[head]] = nummember;
        }
    }
    return;
}
/*将人名对应成不同人出现的编号*/
int change(string s) {   //将人名对应成不同人出现的编号
    if (stringtoint.find(s) != stringtoint.end())
        return stringtoint[s];  //已经出现过，返回编号
    else {
        stringtoint[s] = numperson;
        inttostring[numperson] = s;
        return numperson++;
    }
}

int main() {
    int n,w;
    cin >> n >> threshold;
    string str1, str2;
    for (int i = 0; i < n; i++) {
        cin >> str1 >> str2 >> w;
        int id1 = change(str1);
        int id2 = change(str2);
        G[id1][id2] += w;
        G[id2][id1] += w;
        weight[id1] += w;
        weight[id2] += w;
    }
    DFStravel();
    cout << gang.size() << endl;
    for (auto it = gang.begin(); it != gang.end(); it++) {
        cout << it->first <<" "<< it->second << endl;
    }
    return 0;

}