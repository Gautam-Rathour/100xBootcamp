// #include<iostream>
// using namespace std;

// // int main() {
// //     long long n = 10000000000000;
// //     int ans = 0;

// //     while (n != 0) {
// //         ans += n % 10;
// //         n = n/10;
// //     }
// //     cout << ans << endl;
// // }



// int main() {
//     string s;
//     cin >> s;
//     int n = s.size();
//     int sum = 0;

//     for(int i=0; i<n; i++) {
//         sum += s[i] - '0';
//     }
//     cout << sum << endl;

// }


// ==============================================================
// ==============================================================


// #include<iostream>
// using namespace std;


// int main() {
//     string s;
//     cin >> s;

//     int n = s.size();

//     int i = 0;
//     while(i < n) {
//         int j = i;
//         int cnt = 0;

//         while(j < n and s[j] == s[i]) {
//             cnt++;
//             j++;
//         }
//         cout << s[i];

//         if(cnt > 1) {
//             cout << cnt;
//         }

//         i = j;
//     }
// }

// ==============================================================
// ==============================================================

// #include<iostream>
// using namespace std;

// int main() {
//     string s;
//     getline(cin, s);

//     int n = s.size();
//     int i = 0;
//     int ans = 0;

//     while(i < n) {
//         if(s[i] == ' ') {
//             i++;
//             continue;
//         }

//         int j = i;
//         int cnt = 0;
//         while(j < n and s[j] != ' ') {
//             cnt++;
//             j++;
//         }

//         if(cnt > ans) {
//             ans = cnt;
//         }
//         i = j;
//     }
// }

// ==============================================================
// ==============================================================


// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int arr[n][n];
//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < n; j++) {
//             cin >> arr[i][j];
//         }
//         cout << "one line conplete" << endl;
//     }

//     for(int j = 0; j < n; j++) {
//         for(int i = n-1; i >= 0; i--) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// ==============================================================
// ==============================================================

#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;


    cout << "Enter Input" << endl;
    int arr[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
        cout << "First line end" << endl;
    }

    int sr = 0, er = n - 1;
    int sc = 0, ec = m - 1;

    while (sr <= er and sc <= ec) {

        for(int j = sc; j <= ec; j++) {
            cout << arr[sr][j] << " ";
        }
        
        for(int i = sr + 1; i <= er; i++) {
            cout << arr[i][ec] << " ";
        }

        for(int j = ec - 1; j >= sc; j--) {
            cout << arr[er][j] << " ";
        }

        for(int i = er -1; i >= sr + 1; i--) {
            cout << arr[i][sc] << " ";
        }

        sr++;
        er--;

        sc++;
        ec--;
    }
}



1  2  3  4 
5  6  7  8 
9 10 11 12
13 14 15 16
17 18 19 20