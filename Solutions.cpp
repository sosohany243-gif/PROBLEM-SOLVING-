   Q1

#include <iostream>
using namespace std;

int main() {

    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    int freq[200] = {0};

    for (int i = 0; i < n; i++) {
        freq[s[i]]++;
    }

    int erase[200] = {0};

    for (char c = 'a'; c <= 'z'; c++) {

        if (freq[c] <= k) {
            erase[c] = freq[c];
            k -= freq[c];
        }
        else {
            erase[c] = k;
            k = 0;
            break;
        }
    }

    for (int i = 0; i < n; i++) {

        if (erase[s[i]] > 0) {
            erase[s[i]]--;
        }
        else {
            cout << s[i];
        }
    }

    
}
Q2
#include <bits/stdc++.h>

using namespace std;

int main()
{
   string s;
   cin >> s ;
   int n = s.size();
   int prefix[n]={0};

   for ( int i = 1 ; i <n ;i++ ) {
    if (s[i]== s[i-1]) {
        prefix[i]=prefix[i-1]+1;
    } else {
        prefix[i]=prefix[i-1];
    }
   }
   int m;
   cin >> m;
   while (m--){
   int l,r;
   cin >> l >> r ;

 cout << prefix[r-1]-prefix[l-1] << endl; }
}



Q3
#include <bits/stdc++.h>

using namespace std;




int main() {
    int n;
    cin >> n;
      int arr[n];
    int freq[1000005];
int nice_indices[200005];


    long long sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
        freq[arr[i]]++;
    }

    int count = 0;

    for (int i = 0; i < n; i++) {
        long long remaining_sum = sum - arr[i];
        freq[arr[i]]--;

        if (remaining_sum % 2 == 0) {
            long long target = remaining_sum / 2;

            if (target <= 1000000 && freq[target] > 0) {
                nice_indices[count] = i + 1;
                count++;
            }
        }

        freq[arr[i]]++;
    }

    cout << count << endl;

    for (int i = 0; i < count; i++) {
        cout << nice_indices[i] << " ";
    }
    cout << endl;


}
Q4
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int freq[n] = {0};

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        freq[x]++;
    }

    bool found = true;

    while (found) {
        found = false;

        for (int i = 0; i <= n; i++) {
            if (freq[i] > 0) {
                cout << i << " ";
                freq[i]--;
                found = true;
            }
        }

        if (found)  cout << endl ;
    }

   
}  

 Q5
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    int ans = min(arr[n - 1] - arr[1],
                  arr[n - 2] - arr[0]);

    cout << ans;
}

Q6
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;

    getline(cin, s1);
    getline(cin, s2);

    int freq[256] = {0};

    for (int i = 0; i < s1.size(); i++) {
        if (s1[i] != ' ')
            freq[s1[i]]++;
    }

    for (int i = 0; i < s2.size(); i++) {

        if (s2[i] == ' ')
            continue;

        if (freq[s2[i]] == 0) {
            cout << "NO";
            return 0;
        }

        freq[s2[i]]--;
    }

    cout << "YES";
}   


Q7
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int freq[200001] = {0};

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            freq[arr[i] + arr[j]]++;
        }
    }

    int ans = 0;

    for (int i = 0; i <= 200000; i++) {
        ans = max(ans, freq[i]);
    }

    cout << ans;
}


Q8

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int freq[100001] = {0};

    int current = 0;
    int mx = 0;

    for (int i = 0; i < 2 * n; i++) {
        int x;
        cin >> x;

        freq[x]++;

        if (freq[x] == 1) {
            current++;
        } else {
            current--;
        }

        mx = max(mx, current);
    }

    cout << mx;
}