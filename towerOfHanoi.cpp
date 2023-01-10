#include<iostream>
#include<cmath>

using namespace std;
int roundCounter=0;
void tower(int n,int start=1,int target=3){
    if(n==1){
        //cin.get();
        roundCounter++;
        cout<<" "<<start<<" to "<<target<<" ,";
    }
    else{
        int buffer=6-(start+target);        //ใช้หาเสาที่ว่าง(buffer)ในรอบลูปนั้น ๆ ex. buffer = 6-(1+3) = 2 เสาที่ว่าง(buffer)คือเสาที่ 2
        tower(n-1,start,buffer);
        //cin.get();
        roundCounter++;
        if(roundCounter%10==0)cout<<endl;
        cout<<" "<<start<<" to "<<target<<" ,";
        tower(n-1,buffer,target);
    }
}


int main(int argc, char const *argv[])
{
    int stack;
    cout<<"Stack : ";
    cin>>stack;
    cout<<"\nTower Of Hanoi "<<stack<<" stack(s) need atleast "<<pow(2,stack)-1<<" move(s) to finish."<<endl;
    cout<<"Solution\n";
    tower(stack);
    return 0;
}
