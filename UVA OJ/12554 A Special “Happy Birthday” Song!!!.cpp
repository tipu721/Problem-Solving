#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1[105],s2[20];
    int n;
    cin>>n;
    getchar();
    for(int i=0; i<n; i++)
        cin>>s1[i];
    s2[0]="Happy";
    s2[1]="birthday";
    s2[2]="to";
    s2[3]="you";
    s2[4]="Happy";
    s2[5]="birthday";
    s2[6]="to";
    s2[7]="you";
    s2[8]="Happy";
    s2[9]="birthday";
    s2[10]="to";
    s2[11]="Rujia";
    s2[12]="Happy";
    s2[13]="birthday";
    s2[14]="to";
    s2[15]="you";

    int i=0,j=0,k=1,l=1;
    for(;; i++,j++,k++,l++)
    {
        cout<<s1[i]<<": "<<s2[j]<<endl;
        if(i==n-1)
            i=-1;
        if(j==15)
            j=-1;
        if(k>=n&&(l%16)==0)
            break;
    }
    return 0;
}
