#include <iostream>
#include <cmath>
using namespace std;

// calculate the time needed for the snowball to reach each part's specified target_size. 
// returns the time it takes
int calculateTime(int target_size) {
    int unit = 2 * (target_size - 1);
    int time = ceil((-1.0 + sqrt(1 + 4.0 * unit)) / 2.0);
    return time;

}

int main() {
    int head, midBody, lowerBody, headTime, midTime, lowerTime;

    cout << "Enter head size:" << endl;
    cin >> head;
    while (head <= 0) {
        cout << "Please enter a positive integer for head size:" << endl;
        cin >> head;
    }
    cout << "Enter mid-body size:" << endl;
    cin >> midBody;
    while (midBody <= 0) {
        cout << "Please enter a positive integer for mid-body size:" << endl;
        cin >> midBody;
    }
    cout << "Enter lower-body size:" << endl;
    cin >> lowerBody;
    while (lowerBody <= 0) {
        cout << "Please enter a positive integer for lower-body size:" << endl;
        cin >> lowerBody;
    }
    
    headTime = calculateTime(head);
    midTime = calculateTime(midBody);
    lowerTime = calculateTime(lowerBody);
    int totalTime = headTime + midTime + lowerTime;
    cout << "Time to reach head size: " << headTime << " seconds" << endl;
    cout << "Time to reach mid-body size: " << midTime << " seconds" << endl;
    cout << "Time to reach lower-body size: " << lowerTime << " seconds" << endl;
    cout << "Total time to create the snowman: " << totalTime << " seconds" << endl;
}