#include<bits/stdc++.h>
using namespace std;

void fun1()
{
    int arr[] = {1,5,3,2,6};
    int budget = 7;

    sort(arr,arr+5);
    int cnt = 0;
    while(1)
    {
        budget = budget-arr[cnt];
        if (budget > 0)
        {
            cout << budget << " ";
            cnt++;
        }
        else{
            break;
        }
    }
    cout << endl;

    cout << cnt << endl;

}

int main()
{
    fun1();
}