#include <bits/stdc++.h>
using namespace std;
int main(int argc, char *argv[]) {
  string time;
  while (cin >> time) {
    int hours = stoi(time.substr(0, 1));
    int minutes = stoi(time.substr(2, 2));
    minutes += 60;
    if (minutes >= 60) {
      minutes  -= 60;
      hours +=1;
      
    }
    int delay = (hours * 60 + minutes) - (8*60);
    cout << "Atraso maximo: " << max(delay, 0) << endl;
  }
  return 0;
}
