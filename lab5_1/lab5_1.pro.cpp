#include <iostream>
using namespace std;
int main()
{
    int n=10;
   int s = 0;
   int array[10];
        for(int i = 0; i < n; i++) {
                cout<<"enter "<<i + 1<<" number "<<endl;
                cin>>array[i];
            }
            for(int i = 0; i < n; i++) {
              s += array[i];

            }
            cout<<"the average value of the array"<<s/n<<endl;
            return 0;
        }

