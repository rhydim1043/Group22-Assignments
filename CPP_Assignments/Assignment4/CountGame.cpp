#include <iostream>
using namespace std;

int main() {
    int num,k;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    cin>>k;
    int count=0;
    for(int i=0;i<num;i++){
        if(arr[i]%k == 0){
            count+=arr[i]/k;
        }else{
            count+=(arr[i]/k)+1;
        }
    }
    cout<<count<<endl;
}