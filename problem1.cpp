


#include <bits/stdc++.h>

using namespace std ;

void printCard(short arr[5][3]) {
    cout << "Is Your Number Appear In This Card? [yes/no]\n";

    for (int r = 0; r < 5; r++) {
        for (int c = 0; c < 3; c++) {
            cout << arr[r][c] << " | ";
        }
        cout << endl;
    }
}

void to_lower(string &ans) {
    for (int i = 0; i < ans.length(); i++) {
        ans[i] = tolower(ans[i]);
    }
}

void updateCounter(int &counter, string ans, int primaryKey) {
    if (ans == "yes") {
        counter += primaryKey;
    }
}

int main() {

    string name;
    int counter = 0;
    string ans;

    short card1[5][3] = {
        {1,3,5},
        {7,9,11},
        {13,15,17},
        {19,21,23},
        {25,27,29}
    };

    short card2[5][3] = {
        {2,3,6},
        {7,10,11},
        {14,15,18},
        {19,22,23},
        {26,27,30}
    };

    short card3[5][3] = {
        {4,5,6},
        {7,12,13},
        {14,15,20},
        {21,22,23},
        {28,29,30}
    };

    short card4[5][3] = {
        {8,9,10},
        {11,12,13},
        {14,15,24},
        {25,26,27},
        {28,29,30}
    };

    short card5[5][3] = {
        {16,17,18},
        {19,20,21},
        {22,23,24},
        {25,26,27},
        {28,29,30}
    };

    cout << "Enter Your Name: " << endl;
    cin >> name;

    cout << "Hello, " << name << endl;
    cout << "To Play Think Of Number From 1 To 30" << endl;

    printCard(card1);
    cin >> ans;
    to_lower(ans);
    updateCounter(counter, ans, card1[0][0]);

    printCard(card2);
    cin >> ans;
    to_lower(ans);
    updateCounter(counter, ans, card2[0][0]);

    printCard(card3);
    cin >> ans;
    to_lower(ans);
    updateCounter(counter, ans, card3[0][0]);

    printCard(card4);
    cin >> ans;
    to_lower(ans);
    updateCounter(counter, ans, card4[0][0]);

    printCard(card5);
    cin >> ans;
    to_lower(ans);
    updateCounter(counter, ans, card5[0][0]);

    cout << "Your Number Is : " << counter << endl;


}
