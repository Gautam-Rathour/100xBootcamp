

// #include <iostream>
// #include <array>
// using namespace std;


// int main() {
//     // int n;
//     // cout << "n = " ;
//     // cin >> n;

//     int a[] = {96, 98, 90, 94, 73};




//     // for(int i=0; i<5; i++) {
//     //     cin >> a[i];
//     // }

//     int mex = a[0];
//     for(int i=0; i<5; i++) {
//         if(a[i] > mex) {
//             mex = a[i];
//         } else {

//         }
//     }

//     cout << mex;
// }

// ====================================================================
// ====================================================================

// #include <iostream>
// using namespace std;


// int main() {
    

//     int a[] = {96, 98, 96, 94, 96};



//     int mex = a[0];
//     for(int i=0; i<5; i++) {
//         if(a[i] > mex) {
//             mex = a[i];
//         } else {

//         }
//     }

//     cout << mex;
// }

// // ====================================================================
// // ====================================================================

// #include <iostream>
// using namespace std;


// int main() {
    

//     int a[] = {1, 0, 1, 1, 0};
//     int n = sizeof(a) / sizeof(a[0]);



//     int count0 = 0;
//     int count1 = 0;

//     for(int i=0; i<n; i++) {
//         if(a[i] == 0) {
//             count0++;
//         } else {
//             count1++;
//         }
//     }

//     for(int i=0; i<count0; i++) {
//         cout << "0 " ;
//     }

//     for(int i=0; i<count1; i++) {
//         cout << "1 " ;
//     }
// }


// // ====================================================================
// // ====================================================================

// // IMP : ---

// #include <iostream>
// using namespace std;


// int main() {
    

//     int a[] = {1, 2, 3, 4, 7, 10};
//     int n = sizeof(a) / sizeof(a[0]);

//     int i=0, j=n-1;

//     while(i <= j) {
//         swap(a[i], a[j]);
//         i++;
//         j--;
//     }

//     for(int i=0; i<n; i++) {
//         cout << a[i] << " ";
//     }
// }


// // ====================================================================
// // ====================================================================

// // IMP : --- ( missing Number )

// #include <iostream>
// using namespace std;


// int main() {
    

//     int a[] = {2, 1, 9, 1, 2, 3, 9};
//     int n = sizeof(a) / sizeof(a[0]);

//     int ans;
//     for(int i=0; i<n; i++) {

//         int target = a[i];
//         int count = 0;

//         for(int j=0; j<n; j++) {
//             if(a[j] == target) {
//                 count++;
//             }
//         }

        
//         if(count == 1) {
//             ans = a[i];
//             break;
//         }
//     }
//     cout << ans << endl;
    
// }

// ====================================================================
// ====================================================================

// IMP : --- ( Duplicate Number )

// #include <iostream>
// using namespace std;


// int main() {
    

//     int a[] = {2, 1, 9, 1, 2, 3, 9};
//     int n = sizeof(a) / sizeof(a[0]);

//     int ans;
//     for(int i=0; i<n; i++) {

//         int target = a[i];
//         int count = 0;

//         for(int j=0; j<n; j++) {
//             if(a[j] == target) {
//                 count++;
//             }
//         }

        
//         if(count == 1) {
//             ans = a[i];
//             break;
//         }
//     }
//     cout << ans << endl;
    
// }


// ====================================================================
// ====================================================================
