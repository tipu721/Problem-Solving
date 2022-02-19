#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb   push_back;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n, box_width, w;
        cin>> n >> box_width;
        vector<int> counts(20);
        for(int i=0; i<n; i++)
        {
            cin >> w;
            counts[log2(w)]++;
        }
        int height = 1,space_left = box_width;
        for(int iter = 0; iter < n; iter++)
        {
            int largest = -1;
            for( int size = 19; size>=0; size--)
            {
                if(counts[size] and (1 << size) <= space_left)
                {
                    largest = size;
                    break;
                }
            }
            if(largest == -1)
            {
                space_left = box_width;
                height++;
                for(int size = 19; size>=0; size--)
                {
                    if(counts[size] and (1 << size) <= space_left)
                    {
                        largest = size;
                        break;
                    }
                }
            }
            counts[largest] -= 1;
            space_left -= 1 << largest;
        }
        cout<< height << endl;

    }



}
