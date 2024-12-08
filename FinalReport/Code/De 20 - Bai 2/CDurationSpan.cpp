#include<bits/stdc++.h>
#include "CDurationSpan.h"

using namespace std;

CDurationSpan::CDurationSpan() : hour(0), minute(0), second(0) {}
CDurationSpan::CDurationSpan(int h = 0, int m = 0, int s = 0) : hour(h), minute(m), second(s) {}

istream& operator >> (istream& is, CDurationSpan& d) {
    is >> d.hour >> d.minute >> d.second;
    return is;
}

ostream& operator << (ostream& os, const CDurationSpan& d) {
    os << d.hour << " " << d.minute << " " << d.second;
    return os;
}

bool CDurationSpan::operator < (const CDurationSpan& d) {
    if (hour < d.hour) return true;
    if (hour == d.hour && minute < d.minute) return true;
    if (hour == d.hour && minute == d.minute && second < d.second) return true;
    return false;
}
