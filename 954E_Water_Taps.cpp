#include <bits/stdc++.h>
using namespace std;
 
struct Tap {
    long double a;
    long long t;
};
 
int main() {
    int n;
    long long T;
    cin >> n >> T;
 
    vector<long long> a(n), t(n);
 
    for (auto &x : a) cin >> x;
    for (auto &x : t) cin >> x;
 
    vector<Tap> cold, hot;
    long double ans = 0;
 
    for (int i = 0; i < n; i++) {
        if (t[i] == T) {
            ans += a[i];
        }
        else if (t[i] < T) {
            cold.push_back({a[i], t[i]});
        }
        else {
            hot.push_back({a[i], t[i]});
        }
    }
 
    sort(cold.begin(), cold.end(), [&](const Tap &x, const Tap &y) {
        return T - x.t < T - y.t;
    });
 
    sort(hot.begin(), hot.end(), [&](const Tap &x, const Tap &y) {
        return x.t - T < y.t - T;
    });
 
    int i = 0, j = 0;
 
    long double coldHeat = 0;
    long double hotHeat = 0;
 
    long double coldWater = 0;
    long double hotWater = 0;
 
    while (i < (int)cold.size() && j < (int)hot.size()) {
 
        long double coldDiff = T - cold[i].t;
        long double hotDiff = hot[j].t - T;
 
        long double needHot = cold[i].a * coldDiff;
        long double availableHot = hot[j].a * hotDiff;
 
        if (needHot < availableHot) {
            coldWater += cold[i].a;
 
 
            long double usedHot = needHot / hotDiff;
            hotWater += usedHot;
 
            hot[j].a -= usedHot;
            i++;
        }
        else if (needHot > availableHot) {
            hotWater += hot[j].a;
 
            long double usedCold = availableHot / coldDiff;
            coldWater += usedCold;
 
            cold[i].a -= usedCold;
 
            j++;
        }
        else {
            coldWater += cold[i].a;
            hotWater += hot[j].a;
 
            i++;
            j++;
        }
    }
 
    cout << fixed << setprecision(10) << ans + coldWater + hotWater << endl;
 
    return 0;
}