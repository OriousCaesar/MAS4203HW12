#include <iostream>

using namespace std;

int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a % b);
}
int gcd(int a, int b, int c){
    return gcd(gcd(a,b),c);
}

int main(){
    int m,n;
    int x,y,z;
    for(n = 0; n < 1000; n++){
    for(m = n; m < 1000; m++){
        if(gcd(m,n) != 1) continue;
        x = m*m-n*n;
        y = 2*m*n;
        z = m*m + n*n;
        if(z > 50) continue;
        if(gcd(x,y,z) != 1) continue;
        cout << x << "^2 + " << y << "^2 = " << z << "^2" << endl;
    }
    }
}