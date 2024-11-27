#include<bits/stdc++.h>
#include "CDurationSpan.h"
#include "CRobot.h"

using namespace std;

int main() {
    CDurationSpan t1;
    CDurationSpan t2(23, 55, 15);
    CRobot r;

    cin >> t1;
    cin >> t2;

    if (t1 < t2) {
        r.SetActive(t1, t2); 
        cout << "Thoi gian Robot hoat dong la: " << r.TimeElapsed();
    }
    else 
    {
        cout << "Thiet lap thoi gian khong hop le!";
    }
}