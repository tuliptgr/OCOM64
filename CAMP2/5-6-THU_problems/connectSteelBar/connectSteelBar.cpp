#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, sum = 0;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    //*
    for(int i = 0; i < n; i++)
        cout << arr[i] << ' ';
    cout << endl;
    //*/
    for(int i = 1; i < n; i++){
        arr[i] += arr[i-1];
        cout << arr[i] << ' ' ;
        sum += arr[i];
    }
    cout << sum;
    return 0;
}
