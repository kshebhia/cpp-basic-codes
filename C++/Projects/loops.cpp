#include <iostream>
using namespace std;

int main(){
    int onions;
    char onionShape;
    cout<<"Enter the number of onions: "<<endl;
    cin>>onions;
    cout<<"Enter the shape of the onions: R for round and N for not round"<<endl;
    cin>>onionShape;
    if(onionShape == 'R'){
        
        do{
            cout<<onions<<endl;
            onions--;
        }while(onions!=0);
    }
    else{
        cout<<"Your onions cannot be chooped"<<endl;
    }
}