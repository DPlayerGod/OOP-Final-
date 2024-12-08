#include<bits/stdc++.h>
#pragma once
using namespace std;

class CDurationSpan {
private:
    int hour, minute, second;
    friend class CRobot;
public:
    CDurationSpan();
    CDurationSpan(int h, int m, int s);

    friend istream& operator >> (istream& is, CDurationSpan& d);

    friend ostream& operator << (ostream& os, const CDurationSpan& d);

    bool operator < (const CDurationSpan& d);
};

