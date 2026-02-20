
// #include<iostream>
// using namespace std;

// int main() {
//     int a, b, c;

//     cout << "Enter your three number = " ;
//     cin >> a >> b >> c ;

//     if(a > b and a > c) {
//         cout << "A is largest number" << endl;
//     } else if (b > a and b > c) {
//         cout << "B is largest number" << endl;
//     } else {
//         cout << "C is largest number" << endl;
//     }
// }

// ============================================================
// ============================================================


// #include<iostream>
// using namespace std;

// int main() {
//     // cout << "Hello World" << endl;

//     // for(int i=1; i<=100; i++) {
//     //     cout << i << endl;
//     // }


//     int n;
//     cin >> n;

//     int i = 1;
//     while(i <= 10) {
            
//         cout << n << " x " << i << " = " << i*n << endl;
//         i++;
//     }
// }

// ============================================================
// ============================================================


// #include<iostream>
// using namespace std;

// int main() {


//     int n = 345;

//     int i = 1;
//     int ans = 0;

//     while(n != 0) {
//         int num = n % 10;
        
//         ans = ans * 10 + num; 
//         n = n/10;
//     }
//     cout << ans << endl;
// }



// // ============================================================
// // ============================================================


// #include<iostream>
// using namespace std;

// int main() {

//     int n = 7;
//     int m = 6;

//     for(int i=1; i<=n; i++) {
//         for(int j=1; j<=i; j++) {
//             if(i==1 or i==n or j==1 or j==m) {
//                 cout << "* ";
//             } else {
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }
// }


// ============================================================
// ============================================================


// #include<iostream>
// using namespace std;

// int main() {


//     int positive = 0;
//     int negative = 0;
//     int even = 0;
//     int odd = 0;

//     for(int i=1; i<=5; i++) {
        
//         int x;
//         cin >> x;

//         if(x > 0) {
//             positive++;
//         } else if(x < 0) {
//             negative++;
//         } 
        
//         if(x % 2 == 0) {
//             even++;
//         } else {
//             odd++;
//         }
//     }

//     cout << positive << endl;
//     cout << negative << endl;
//     cout << even << endl;
//     cout << odd << endl;
// }


// ============================================================
// ============================================================

// Find the Functions : ---

#include<iostream>
using namespace std;

int findFact(int num) {
        int nFact = 1;
        for(int i=1; i<=num; i++) {
            nFact *= i;
        }
        return nFact;
    }

int main () {
    int n = 7;
    int r = 2;

    

    int ansN = findFact(n);
    int ansR = findFact(r);
    int ansNR = findFact(n-r);

    cout << ansN << " " << ansR << " " << ansNR << endl;

    int ans = ansN / (ansR * ansNR);
    cout << ans;

}

// ============================================================
// ============================================================

// #include <iostream>
// using namespace std;

// int main () {
//     int n = 5;
    
//     for(int i=1; i<=n; i++) {

//         for(int j=1; j<=i-1; j++) {
//             cout << "  ";
//         }

//         for(int j=1; j<=i; j++) {
//             if(i == 1 or j == 1 or j == i) {
//                 cout << "> ";
//             } else {
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }


//     for(int i=n-1; i>=1; i--) {

//         for(int j=1; j<=i-1; j++) {
//             cout << "  ";
//         }

//         for(int j=1; j<=i; j++) {
//             if(i == 1 or j == 1 or j == i) {
//                 cout << "> ";
//             } else {
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }
// }

// ============================================================
// ============================================================









