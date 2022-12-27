// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void Clear(){
    system("clear");
}


void Triangle(int n = 10){
    
    // loop triangle
    for(int i = 1; i <= n; i++){
        for(int j=1; j <= i; j++){
            cout << "# ";
        }
        cout << endl;
    }
}

void Triangle_Pattern_2(int n = 10){
    
    // Loop second triangle
    for(int i = n; i>= 1; i--){
        for(int j = i; j>0; j--){
            cout << "# ";
        }
        cout << endl;
    }
}


// void Triangle_Pattern_3(){
//     // Declare Variable
//     int n = 10;
    
//     for(int i = 1; i<=n; i++){
//         for(int j = n-i; j > 0; i--)
//             cout << " ";
//         for(int k=1; k<=i; k++){
//             cout << "#";
//         }
//         cout << endl;
//     }
// }

int main() {
    // Write C++ code here
    Clear();
    
    // Declare variable
    int n = 5;
    int l = 5;
    int num;
    
    // Call function triangle

    cout << "Enter your input to create half triangle: ";
    cin >> num;
    Triangle(num);

    // Triangle_Pattern_2();
    
    // First triangle
    
    // for(int i = 1; i <= n; i++){
    //     for(int j=1; j <= i; j++){
    //         cout << "# ";
    //     }
    //     cout << endl;
    // }
    
    // Second triangle
    
    // for(int a = l; a>= 1; a--){
    //     for(int m = a; m>0; m--){
    //         cout << "# ";
    //     }
    //     cout << endl;
    // }
    
    // Triangle_Pattern_3();
    
    
    return 0;
}
