#include <iostream>
#include <iomanip>
using namespace std;
int search (char str[],int n, char number);
int main()
{
  char z;
  char str[100];
  cout<<"enter 100 symbol"<<endl;
  cin.get(str,100);
  cout<<"enter search symbol"<<endl;
  cin>>z;
  int end = search(str,100,z);
  cout<<end<<endl;
    return 0;
}
int search (char str[] ,int n, char number) {
    int y = 0;

    for (int i = 0; i < n; i++) {
        if (str[i] == number) {
            y++;
        }
    }
            return y;
}
