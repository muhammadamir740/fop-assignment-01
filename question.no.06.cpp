#include <iostream>
using namespace std;
int main() {
    int n = 4;
    double angleOfAttack;
    double capacity, fuel;
    double stallAngle;
    //for fuel capacity andremaining fuel
    cout << "enter the fuel capacity of aircraft in liters\n";
    cin >> capacity;
    cout << "total fuel stored showing on meter is in liters \n";
    cin >> fuel;
    // the stall angle from the user
    cout << "set a stall angle: \n";
    cin >> stallAngle;
    //the angle of attack from the user
    cout << "Enter the current angle of attack:\n ";
    cin >> angleOfAttack;
    // Check if the aircraft is near the stall point
    if (angleOfAttack >= (stallAngle - 5) && angleOfAttack <= (stallAngle + 5)) {
        cout << "You are near the stall point. Reduce the angle of attack immediately." << endl;
    }
    else {
        cout << "You are not near the stall point. Maintain your current angle of attack." << endl;
    }
    // for remaining fuel and the distance, the aircraft can cover
    if (fuel <= (capacity - capacity * 85 / 100)) {
        cout << "low fuel warning\n";
    }
    else {
        cout << "with this fuel you can fly \n";
        cout << fuel / n << "  " << "kilometers\n";
    }
    return 0;
}

