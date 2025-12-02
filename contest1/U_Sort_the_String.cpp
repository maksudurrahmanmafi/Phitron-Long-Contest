// // #include <bits/stdc++.h>
// // using namespace std;

// // int main() {
// //     ios::sync_with_stdio(false);
// //     cin.tie(nullptr);

// //     int T;
// //     cin >> T;
// //     while (T--) {
// //         int N;
// //         string S;
// //         cin >> N >> S;

// //         if (is_sorted(S.begin(), S.end())) {
// //             cout << 0 << "\n";
// //             continue;
// //         }

// //         int first1 = S.find('1');
// //         int last0 = S.rfind('0');

// //         if (first1 < last0) {
// //             cout << 1 << "\n"; // only one block of 1s before 0s
// //         } else {
// //             cout << 2 << "\n"; // multiple blocks
// //         }
// //     }
// // }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int T;
//     cin >> T;
//     while (T--) {
//         int N;
//         string S;
//         cin >> N >> S;

//         if (is_sorted(S.begin(), S.end())) {
//             cout << 0 << "\n";
//             continue;
//         }

//         int first1 = S.find('1');      // প্রথম 1
//         int last0 = S.rfind('0');      // শেষ 0

//         if (first1 > last0) {
//             cout << 1 << "\n"; // এক block 1s পরে 0s
//         } else {
//             cout << 2 << "\n"; // multiple blocks
//         }
//     }
// }

