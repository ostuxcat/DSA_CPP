#include <vector>
#include <string>
#include <climits>
std::string isPrimeNum(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return "Not A Prime Number.";
    }
    return "Prime Number.";
}
int countPrimes(int n){
    int count=0;
    std::vector<bool> isPrime(n+1, true);
    for(int i=2;i<n;i++){
        if(isPrime[i]){
            count++;
            for(int j=i*2;j<n;j=j+i){
                isPrime[j] = false;
            }
        }
    }
    return count;
}
int countDigits(int n){
    int count = 0;
    while(n>0){
        count++;
        n=n/10;
    }
    return count;
}
int lastDigit(int n){
    return n%10;
}
int cube(int n){
    return n*n*n;
}
bool isArmstrong(int n){
    int sum = 0, m=n;
    while(m>0){
        sum+=cube(lastDigit(m));
        m = m/10;
    }
    if(n==sum) return true;
    return false;
}
int findGCD(int a, int b){
    int gcd = 1;
    for(int i=1;i<=std::min(a, b);i++){
        if(a%i==0 && b%i==0){
            gcd = i;
        }
    }
    return gcd;
}
int euclidGCD(int a, int b){
    int gcd = 1;
    while(a>0 && b>0){
        if(a>b){
            a = a%b;
        }else{
            b = b%a;
        }
    }
    return std::max(a, b);
}
int euclidGCDRec(int a, int b){
    if(b==0) return a;
    return euclidGCDRec(b, a%b);
}
int getlcm(int a, int b){
    return (a*b)/euclidGCDRec(a, b);
}
int reverseNumUsingStrings(int n){
    std::string finalNum = "";
    while(n>0){
        finalNum+=std::to_string(n%10);
        n = n/10;
    }
    return std::stoi(finalNum);
}
int reverseNum(int n){
    int revNum = 0;
    while(n!=0){
        if(revNum<INT_MIN/10 || revNum>INT_MAX/10) return 0;
        revNum=(revNum*10)+(n%10);
        n = n/10;
    }
    return revNum;
}
bool palindromeNum(int n){
    return (n>=0 && n==reverseNum(n));

}
