#include<bits/stdc++.h>
#include "CDurationSpan.h"
#pragma once

using namespace std;

class CRobot {
private:
    CDurationSpan t1; // Thoi gian bat dau
    CDurationSpan t2; // Thoi gian ket thuc
public:
    void SetActive (CDurationSpan a, CDurationSpan b);

    int TimeElapsed();
};
