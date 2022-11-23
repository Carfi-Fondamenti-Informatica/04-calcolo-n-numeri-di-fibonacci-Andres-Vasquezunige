#include <iostream>
using namespace std;
int main(){
    int n=0;
    int p=1;
    int s=1;
cin>>n;
if(n>=2){
    cout<<p<<endl<<s<<endl;
    int i=3;
    while(i++,i<=n){
        cout<<p+s<<endl;
        if(p<s){
            p+=s;
        }
        else {
            s+=p;
        }
    }
}
else{
    cout<<"errore"<<endl;
}

    return 0;
}
