//
// Created by 硬汉J on 2021/2/14.
//

#include <iostream>
#include <string>
#include <map>
using namespace std;

const int maxN = 2010;
int G[maxN][maxN] = {0};//邻接矩阵，边的权值
int weight[maxN] = {0};//点的权值
map<string, int> NameToId;
map<int, string> IdToName;
map<string, int> gang;//the gang which has the head named "string"
int numOfPerson = 0;
int threshold;
bool visit[maxN] = { false };

void DFS(int nowVistor, int &head, int &numOfMember, int &totalValue);

int change(const string& s);

void DSFTravel();

int main(){
    int n, w;
    cin >> n >> threshold;
    string string1, string2;
    for (int i = 0; i < n; ++i) {
        cin >> string1 >> string2 >> w;
        int id1 = change(string1);
        int id2 = change(string2);
        G[id1][id2] += w;
        G[id2][id1] += w;
        weight[id1] += w;
        weight[id2] += w;
    }
    DSFTravel();
    cout << gang.size() << endl;
    for (auto & it : gang) {
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}

void DSFTravel() {
    for (int i = 0; i < numOfPerson; ++i) {
        if (!visit[i]) {
            int head = i;
            int numOfMember = 0;
            int totalValue = 0;
            DFS(i, head, numOfMember, totalValue);
            if (numOfMember > 2 && totalValue > threshold) {
                gang[IdToName[head]] = numOfMember;
            }
        }
    }
}

int change(const string& s) {
    if (NameToId.find(s) != NameToId.end()) {
        return NameToId[s];
    } else {
        NameToId[s] = numOfPerson;
        IdToName[numOfPerson] = s;
        return numOfPerson++;
    }
}

void DFS(int nowVistor, int &head, int &numOfMember, int &totalValue) {
    numOfMember++;
    visit[nowVistor] = true;
    if (weight[nowVistor] > weight[head]) {
        head = nowVistor;
    }
    for (int i = 0; i < numOfPerson; ++i) {
        if (G[nowVistor][i] > 0) {
            totalValue += G[nowVistor][i];
            G[nowVistor][i] = G[i][nowVistor] = 0;
            if (!visit[i]) {
                DFS(i, head, numOfMember, totalValue);
            }
        }
    }
}
