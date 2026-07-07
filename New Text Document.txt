Q1 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp (pair<int, int> a, pair<int, int> b) {
    return a.second > b.second;
}

int main()
{
    int N;
    cin >> N;
    vector<pair<int, int>> p;
    for (int i = 0;i < N;i++) {
        int X, Y;
        cin >> X >> Y;
        p.push_back({ X, Y });
    }
    sort(p.begin(), p.end(), comp);
    for (int i = 0;i < N;i++) {
        cout << p[i].first << " " << p[i].second << endl;
    }

} 

 Q2
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
	int t;
	cin >> t;
	queue<int>q;

	while (t--) {
		int id, N;
		cin >> id >> N;
		if (id == 1) {

			q.push(N);
		}
		else if (id == 2) {
			if (q.empty()) {
				cout << "no" << endl;
			}
			else {
				if (q.front() == N) {
					
					cout << "yes" << endl;
				}
				else {
					cout << "no" << endl;
				} 				q.pop();



				
			}
		}
	}




}



Q3
#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main()
{
    int q;
    cin >> q;

    deque<long long> dq;

    while (q--)
    {
        string op;
        cin >> op;

        if (op == "push_back")
        {
            long long x;
            cin >> x;
            dq.push_back(x);
        }
        else if (op == "push_front")
        {
            long long x;
            cin >> x;
            dq.push_front(x);
        }
        else if (op == "pop_front")
        {
            dq.pop_front();
        }
        else if (op == "pop_back")
        {
            dq.pop_back();
        }
        else if (op == "front")
        {
            cout << dq.front() <<endl  ;
        }
        else if (op == "back")
        {
            cout << dq.back() <<endl  ;
        }
        else if (op == "print")
        {
            int x;
            cin >> x;

            cout << dq[x - 1] << endl ;
        }
    }

}


Q4
#include <iostream>
#include <stack>
using namespace std;
 
int main()
{
    string s;
    cin >> s;
 
    stack<char> st;
 
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            st.push('(');
        }
        else
        {
            if (st.empty())
            {
                cout << "No";
                return 0;
            }
 
            st.pop();
        }
    }
 
    if (st.empty())
        cout << "Yes";
    else
        cout << "No";
 
    
}


Q5
#include <iostream>
#include <stack>
    using namespace std;

    int main()
    {
        string s;
        cin >> s;

        stack<char> st;
        int ans = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
            {
                st.push('(');
            }
            else
            {
                if (!st.empty())
                {
                    st.pop();
                    ans += 2;
                }
            }
        }

        cout << ans << endl;

    }


Q7
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    stack<char> st;

    for (int i = 0; i < n; i++)
    {
        if (!st.empty() && st.top() != s[i])
        {
            st.pop();
        }
        else
        {
            st.push(s[i]);
        }
    }

    cout << st.size();

   
}
