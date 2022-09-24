#include<iostream>
#include<algorithm>
using namespace std;

struct Student
{
    string name;
    double height;
};
bool cmp(Student a, Student b)
{
    return a.height > b.height;
}

int main()
{
    Student a[10];
    cout << "before sorting : " << endl;
    for(int i=0;i<10;i++)
    {
        a[i].name = 'a'+i;
        a[i].height = i;
        cout << a[i].name << " " << a[i].height << endl;
    }   
    sort(a,a+10,cmp);

    cout << "after sorting in desceding order of heights : " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << a[i].name << " " << a[i].height << endl;
    }
}