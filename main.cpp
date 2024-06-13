// #include <iostream>
// #include <cmath>
// using namespace std;

// int decimaltobinarymethod1(int n){
//     //division method
//     int binaryno = 0;
//     int i = 0;
//     while (n>0){
//         int bit = n%2;
//         binaryno = bit*pow(10,i++) +binaryno;
//         n= n/2;
//     }
//     return binaryno;
// }
// int main(){
//     int n;
//     cin >>n;
//     int binary = decimaltobinarymethod1(n);
//     cout<<binary<<endl;
// }

#include <iostream>
#include <cmath>
using namespace std;

int decimaltobinarymethod1(int n){
     //bitwise method 
    int binaryno = 0;
    int i = 0;
    while (n>0){
        int bit = (n & 1);
        binaryno = bit*pow(10,i++) +binaryno;
        n= n/2;
    }
    return binaryno;
}
 int main(){
    int n;
    cin >>n;
    int binary = decimaltobinarymethod1(n);
    cout<<binary<<endl;
}

#include <iostream>
#include <cmath>
using namespace std;

int binarytodecimal(int n){
     //bitwise method 
    int decimal = 0;
    int i = 0;
    while (n){
        int bit = (n % 10);
        decimal = decimal+bit* pow(2,i++);
        n= n/=10;
    }
    return decimal;
}
 int main(){
    int binaryno;
    cin>>binaryno;
    cout<<binarytodecimal(binaryno);
}
