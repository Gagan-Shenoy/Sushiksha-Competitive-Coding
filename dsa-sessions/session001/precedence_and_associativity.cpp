#include<iostream>

using namespace std;

int main()
{
    int i = 8, j = 5;
    int ans1 = 2*((i / 5) + (4 * (j - 3)) % (i + j - 2));
    cout<<"ans 1 : "<<' '<<ans1<<'\n';
    
    int x = 20, y = 5;
    int ans2 = (x==10 + 15 && y < 10);
    cout<<"ans 2 : "<<' '<<ans2<<'\n';
    
    int ans3 = 7==5+2 ? 4 : 3;
    cout<<"ans 3 : "<<' '<<ans3<<'\n';

    return 0;
}