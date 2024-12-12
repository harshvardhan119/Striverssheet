//Mathematics Basic
 

// Example 1:

// Input: x = 123
// Output: 321
// Example 2:

// Input: x = -123
// Output: -321
// Example 3:

// Input: x = 120
// Output: 21

class Solution {
public:
    int reverse(int x) {
        int a=0;
        for(int i =0; x!=0;i++){
            a=10*a+x%10;
            x=x/10;
        }
        return a;
    }
};

//Palindrome
// Input: x = 121
// Output: true
// Explanation: 121 reads as 121 from left to right and from right to left.


class Solution {
public:
    bool isPalindrome(int x) {
         int a=0;
         int b=x;
        for(int i =0; x!=0;i++){
            a=10*a+x%10;
            x=x/10;
        }
        
        if(a==b&& b>=0){
            return true;
        }
        else{ return false;}
    }
};

//HCF,LCM
//HCF(m,n) × LCM (m,n) =m× n.
// for HCF equitoreal rule hcf(m,n)=hcf(m%n,)if m>n if a==0 than b is hcf;

class Solution {
  public:
    vector<int> lcmAndGcd(int a, int b) {
    
        int gcdValue = gcd(a, b);
        
      
        int lcmValue = (a / gcdValue) * b;
        
        return {lcmValue, gcdValue};
    }
    
  private:
  
    int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
   

   //Amstrong Number
   class Solution {
  public:
    bool armstrongNumber(int n) {
        int originalNumber = n; 
        int sum = 0;
        int count = 0;
        
       
        int temp = n;
        while (temp != 0) {
            temp /= 10;
            count++;
        }
        
       
        temp = n;
        while (temp != 0) {
            int digit = temp % 10;
            sum += pow(digit, count); 
            temp /= 10;
        }
        
        
        return sum == originalNumber;
    }
};

//Recursion
class Solution {
    
  public:
    void printGfg(int N) {
        
       cout<<"GFG"<<" ";
       if(N>1){
           printGfg(N-1);
       }}
       
};