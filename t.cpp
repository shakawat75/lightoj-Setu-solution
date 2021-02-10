# include<iostream>
using namespace std;

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int T,n,money,extra,i=1;

    string stat;
    cin>>T;

    while(T--){
        money = 0;
        cin>>n;
        cout<<"Case "<<i<<":"<<endl;
        while(n--){
        cin>>stat;
        if(stat=="donate"){
        cin>>extra;
        money+=extra;}
            else
                cout<<money<<endl;

        }
         i++;
    }
    return 0;
}
