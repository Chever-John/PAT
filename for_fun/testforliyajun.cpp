//
// Created by 硬汉J on 2021/2/22.
//

#include<iostream>
#include<string>
using namespace std;
class badguy {
public:
    void text();
};
class build {
    friend void badguy::text();
    public:
        build();
        string sitting_room;
    private:
        string bedroom;
};

build::build(){
    this->bedroom = "卧室";
    this->sitting_room = "客厅";
}

void badguy::text() {
    build p;
    p.sitting_room;
    p.bedroom;
}