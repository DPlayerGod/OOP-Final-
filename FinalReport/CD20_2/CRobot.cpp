#include<bits/stdc++.h>
#include "CDurationSpan.h"
#include "CRobot.h"

using namespace std;

void CRobot::SetActive (CDurationSpan a, CDurationSpan b) {
    t1 = a;
    t2 = b;
}

int CRobot::TimeElapsed() {
    return (t2.hour - t1.hour) * 3600 + (t2.minute - t1.minute) * 60 + (t2.second - t1.second);
}
