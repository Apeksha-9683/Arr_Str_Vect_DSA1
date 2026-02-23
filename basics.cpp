#include <iostream>
using namespace std;    
int main(){
    int marks[50];
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[34]<<endl;
    return 0;
}

// int main(){
//     int arr[50]={1,3,5,6,8}
//     marks(arr)
// }
//Very good 👏 this is a classic beginner array mistake.

// Let’s look at your code:

// ```cpp
// #include <iostream>
// using namespace std;    

// int main(){
//     int marks[50];

//     cout<<marks[0]<<endl;
//     cout<<marks[1]<<endl;
//     cout<<marks[34]<<endl;

//     return 0;
// }
// ```

// ---

// # 🔴 What Is Wrong?

// ### ❌ You declared the array…

// But you NEVER initialized it.

// ```cpp
// int marks[50];
// ```

// This creates 50 integer boxes in memory.

// BUT they contain **garbage values**.

// ---

// # 🧠 What Is Garbage Value?

// When you declare a local array inside `main()`:

// ```cpp
// int marks[50];
// ```

// The memory is allocated,
// but C++ does NOT automatically fill it with 0.

// So:

// ```
// marks[0] → random value
// marks[1] → random value
// marks[34] → random value
// ```

// These values are whatever was already sitting in RAM.

// ---

// # 🔎 Example Output Could Be:

// ```
// -858993460
// 32767
// 0
// ```

// Every time you run, it may change.

// ---

// # 🟢 Why Does This Happen?

// Because local variables are stored in **stack memory**.

// Stack memory is not automatically cleaned.

// So it contains leftover data.

// ---

// # ✅ How To Fix It

// ## ✔ Option 1: Initialize During Declaration

// ```cpp
// int marks[50] = {0};
// ```

// Now all 50 elements become 0.

// ---

// ## ✔ Option 2: Use Loop to Initialize

// ```cpp
// for(int i=0;i<50;i++){
//     marks[i] = 0;
// }
// ```

// ---

// ## ✔ Option 3: Take Input

// ```cpp
// for(int i=0;i<50;i++){
//     cin>>marks[i];
// }
// ```

// ---

// # 🔥 Important Concept

// This works differently:

// ### Global Array (Outside main)

// ```cpp
// int marks[50];
// ```

// If declared globally → it automatically becomes 0.

// But inside `main()` → garbage values.

// ---

// # 🎯 So What’s the Real Problem?

// Nothing is "syntactically wrong".

// But **logically wrong** because:

// 👉 You are printing uninitialized memory.

// ---

// # 🏆 Final Fixed Version

// ```cpp
// #include <iostream>
// using namespace std;    

// int main(){
//     int marks[50] = {0};

//     cout<<marks[0]<<endl;
//     cout<<marks[1]<<endl;
//     cout<<marks[34]<<endl;

//     return 0;
// }
// ```

// Now output will be:

// ```
// 0
// 0
// 0
// ```

// ---

// # 🚀 What You Just Learned

// * Arrays must be initialized
// * Local variables contain garbage
// * Stack memory vs global memory difference

// ---

// If you want next:

// * 🔥 Explain memory diagram visually
// * 🔥 Why accessing marks[100] crashes program
// * 🔥 Difference between static and dynamic array
// * 🔥 Tricky array interview questions

// Tell me 😎
