#include <iostream>
using namespace std;
//this code chek the enter number is palindrome or not//

int main() {
int n,reverse=0,remainder ;
cin >> n;// enter random number//
int m=n;
while(m!=0){
//reverse  formula//
 remainder= m%10;
reverse=reverse*10+remainder ;
m=m/10;


}



if(reverse==n)
{
    cout << n << "is palindrome number";
    
}
else{
    cout << n << "is not palindrome number";
}
    return 0;
}
