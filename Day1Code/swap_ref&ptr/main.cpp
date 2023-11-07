#include <iostream>

using namespace std;
void swapInteger(int &x,int &y);
//void swapInteger2(int *x,int *y);
int main()
{
    int x=5,y=6;
    swapInteger(x,y);
  // swapInteger2(&x,&y);
    cout << x << endl<<y;
    return 0;
}
void swapInteger(int &x,int &y){
int temp;
temp=x;
x=y;
y=temp;
}
/*void swapInteger2(int *x,int *y){
int temp;
temp=*x;
*x=*y;
*y=temp;
}*/
