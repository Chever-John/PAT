//
// Created by 硬汉J on 2021/2/6.
//
/**
    例1
    给出一个m*n矩阵，矩阵中的元素是0或1
    称位置(x,y)与其上下左右四个位置是相邻的
    如果矩阵中有若干个1是相邻的，那么称这些1构成了一个块
    请求出给定矩阵中“块”的个数
    矩阵如下：

    0 1 1 1 0 0 1
    0 0 1 0 0 0 0
    0 0 0 0 1 0 0
    0 0 0 1 1 1 0
    1 1 1 0 1 0 0
    1 1 1 1 0 0 0

    例如上面的6*7矩阵中，有四个块
    对这个问题，基本的求解思路是，枚举每个位置的元素，如果是0，跳过
    如果是1，使用BFS查询相邻的四个位置，判读是否为1，如果为1，继续BFS
    为了防止重复访问，我们可以设置一个bool数组来进行记录
    我们可以设两个增量数组来表示四个方向
 */



#include <iostream>
#include <queue>

using namespace std;

struct node{
    int x, y, z;
}temp;

int l, m, n, t;
int brain[1300][130][60];
bool visit[1300][130][60]={false};
int X[6] = {1, 0, 0, -1, 0, 0};
int Y[6] = {0, 1, 0, 0, -1, 0};
int Z[6] = {0, 0, 1, 0, 0, -1};

bool judge(int x, int y, int z);

int BFS(int x, int y, int z);

int main(){
    int ans=0;
    cin >> m >> n >> l >> t;
    for (int k = 0; k < l; ++k) {
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> brain[i][j][k];
            }
        }
    }

    for (int k = 0; k < l; ++k) {
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (brain[i][j][k] == 1 && !visit[i][j][k]) {
                    ans += BFS(i, j, k);
                }
            }
        }
    }

    cout << ans;
    return 0;
}

bool judge(int x, int y, int z){
    if (x < 0 || x >= m || y < 0 || y >= n || z < 0 || z >= l)
        return false;
    if (brain[x][y][z] == 0 || visit[x][y][z])
        return false;
    return true;
}

int BFS(int x, int y, int z){
    int cnt = 0;
    temp.x = x;
    temp.y = y;
    temp.z = z;
    queue<node> q;
    q.push(temp);
    visit[x][y][z] = true;
    while (!q.empty()) {
        node top = q.front();
        q.pop();
        cnt++;
        for (int i = 0; i < 6; ++i) {
            int newX = top.x + X[i];
            int newY = top.y + Y[i];
            int newZ = top.z + Z[i];
            if (judge(newX, newY, newZ)) {
                visit[newX][newY][newZ] = true;
                temp.x = newX;
                temp.y = newY;
                temp.z = newZ;
                q.push(temp);
            }
        }
    }
    if (cnt >= t) {
        return cnt;
    } else {
        return 0;
    }
}