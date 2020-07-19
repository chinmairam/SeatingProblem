#include<iostream>
using namespace std;
int main()
{
    int T,N;
    int rem=0;
    cout<<"Enter no.of testcases\n";
    cin>>T;
    while(T--)
    {
        cout<<"Enter a seat number\n";
        cin>>N;
        if(N>10000)
        {
            cout<<"Not in range";
        }
        else
        {
         rem = N%12;
         cout<<"Facing Seat of "<<N<<" is:";
         switch(rem) 
         {
          case 0:
            cout<<(N-11)<<" WS "<<endl;
            break;
          case 1:
            cout<<(N+11)<<" WS "<<endl;
            break;
          case 2:
            cout<<(N+9)<<" MS "<<endl;
            break;
          case 3:
            cout<<(N+7)<<" AS "<<endl;
            break;
          case 4:
            cout<<(N+5)<<" AS "<<endl;
            break;
          case 5:
            cout<<(N+3)<<" MS "<<endl;
            break;
          case 6:
            cout<<(N+1)<<" WS "<<endl;
            break;
          case 7:
            cout<<(N-1)<<" WS "<<endl;
            break;
          case 8:
            cout<<(N-3)<<" MS "<<endl;
            break;
          case 9:
            cout<<(N-5)<<" AS "<<endl;
            break;
          case 10:
            cout<<(N-7)<<" AS "<<endl;
            break;
          case 11:
            cout<<(N-9)<<" MS "<<endl;
            break;
         }
        }
    }
}
