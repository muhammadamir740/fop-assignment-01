#include<iostream>
using namespace std;
int main() {
    int arr[5] = { 1,2,3,4,5 };
    int newsize = 8;
    int addEle[8] = { 6,7,8,};
    for (int i = 0; i < newsize; i++) {
        addEle[i] = i + 1;
    }
    int newArray[8];
    for (int i = 0; i < 5; i++) {
        newArray[i] = arr[i];
    }
    for (int i = 5; i < newsize; i++) {
        newArray[i] = addEle[i];
    }
    cout << "Combined array elements : ";
    for (int i = 0; i < newsize; i++) {
        cout << newArray[i] << " ";
    }
    cout << endl;
    return 0;
}
