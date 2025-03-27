#include <iostream>
using namespace std;
#include <math.h>

int power();

int factorial_1(int a) {
    if (a == 0 || a == 1) {
        return 1;       
    }

    int value = 1;

    for (int i = 1; i <= a; i++) {
        value *= i; // Multiply value by i in each iteration
    }

    return value;
}

int factorial_2(int a) {
    if (a == 0 || a == 1) {
        return 1;       
    }
    else{
    for (int i = a-1; i >= 1; i--) {
        a = a * i;
    }
    return a;
    }

}

int nCr(int n, int r){

    int num = factorial_1(n);
    int denom = factorial_1(n-r) * factorial_1(r);
    int answer = num/denom;
    return answer;
}

bool isEven(int a){

    return a&1;

}

void printCounting(int x){

    for(int i=1; i<=x; i++){
        cout<< i <<" ";
    }
}

void isPrime(int a){

    if(a == 1 || a == 2){
        cout<< "number is prime" <<endl;
    }

    for(int i=2; i<=a-1; i++){
        if(a % i == 0 ){
            cout<< "number is not prime" <<endl;
            break;
        }
        else{
            cout<< "number is prime" <<endl;
            break;
        }
    }
}

int ap_term(int a){

    int ans = 3 * a + 7;
    return ans;
}

int setbitsCalculator(int a,int b){

}

int febo_nth(int n){

    int a=0;
    int b=1;
    if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    else{
        for(int i=3; i<=n; i++){
            int swap = b;
            b = b + a;
            a = swap;
        }
        return b;
    }
}

void update_void(int a){
        a = a / 2;
    }

int update_notVoid(int a){
        a -= 5;
        return a;
}

int greaterin2(int n1, int n2){
    if(n1 > n2){
        return n1;
    }
    else{
        return n2;
    }
}

int update_array(int my_arr[]){
    //updating first element of array
    my_arr[0]= 420;
    for(int i=0; i < 3; i++){
        cout<< my_arr[i] <<endl;
    }

}

int main(){

    //question 1
    // int a=2;
    // int b=a+1;

    // if((a=3)==b){
    //     cout<< a;
    //     cout<< b;
    // }
    // else{
    //     cout<< a+1;

    // }


    //question 2
    // int a=24;
    // if(a>20){
    //     cout<< "love";
    // }
    // else if (a==24){
    //     cout<<"lovely";
    // }
    // cout<<a;


    //question 3: if a-z then print lower case, if A-Z then upper, if 0-9 then numeric
    // char a;
    // a=cin.get();

    // int inp=(int)a;
    // if(inp <= 122 && inp >=97){
    //     cout<< "lower case"<< endl;
    // }
    // else if( inp >= 65 && inp <= 90){
    //     cout<< "upper case"<< endl;
    // }
    // else if( inp >= 48 && inp <= 57){
    //     cout<< "numeric"<< endl;
    // }
    // else{
    //     cout<< "its any symbol"<< endl;
    // }


    //question 4: print sum of n integers with each sum printing
    // int n;
    // cin>> n;
    // int i=1;
    // int sum=0;
    // while(i<=n){
    //     sum=sum+i;
    //     cout<< "sum of "<< i << " terms:" << sum << endl;    
    //     i=i+1;
    // }
    

    //question 5: n is prime or not
    // int n;
    // cin>> n;

    // for(int i=2; i<n; i++){
    //     if(n%i==0){
    //         cout<< n << " is not prime number" << endl;
    //         break;
    //     }
    //     else{
    //         cout << "prime factor of: " << i << endl;
    //         continue;
    //     }
    // }

    //question 6:
    // int i=7;
    // cout<< ++i << endl;
    // cout<< i++ << endl;
    // cout<< i-- << endl;
    // cout<< --i << endl;

    //question 7;
    // int a=1;
    // int b=2;

    // if(a-- > 0 && ++b > 2){
    //     cout << "if wala print" << endl;
    // }
    // else{
    //     cout<< " else wala print" << endl;
    // }
    // cout<< a <<" " << b << endl;


    //question 8;
    // int a=1;
    // int b=2;

    // if(a-- > 0 || ++b > 2){
    //     cout << "if wala print" << endl;
    // }
    // else{
    //     cout<< " else wala print" << endl;
    // }
    // cout<< a <<" " << b << endl;


    //question 9: sum of n numbers
    // int sum=0;
    // int n;
    // cin>> n;
    // for(int i=1; i<=n; i++){
    //     sum += i;
    // }
    // cout<< sum <<endl;


    //question 10: febonnaci series
    //METHOD-1

    // int a=0;
    // int b=1;
    // cout<< "enter the no. of terms to be printed:";
    // int term;
    // cin>> term;

    // for(int i=1; i<=term; i++){
    //     cout << a << " ";
    //     int swap = b;
    //     b = b + a;
    //     a = swap;
    // }

    // METHOD-2

    // int a=0;
    // int b=1;
    // int term;
    // cin >> term;
    // cout << "1st term:" << a << endl;
    // cout << "2st term:" << b << endl;
    // for(int i=3; i<=term; i++){
    //     int swap=b;
    //     b=b+a;
    //     a=swap;
    //     cout << i << "th term:" << b <<endl;
    // }

    //question 11:
    // for(int i=1; i<=5; i++){
    //     if(i&0){
    //         cout<< i;
    //     }
    // }


    //question 12:
    // for(int i=1; i<=6; i++){
    //     for(int j=i; j<=6; j++){
    //     if(i+j==10){
    //         break;
    //     }
    //     cout<< i << " " << j << endl;
    // }
    // }


    //LEETCODE QUESTIONS

    //question 13:find diff of sum and product of digits of a number(234)
    
    // Mehtod - 1:
    // int num = 591;
    // int sum = 0;
    // int prod = 1;
    // while(num != 0){
    //     int dig = num % 10;
    //     sum += dig;
    //     prod *= dig;
    //     num /= 10;
    // }
    // cout << "sum: " << sum << " product: " << prod << " difference: " << prod - sum;

    // Method - 2
    // int n=234;

    // int hun=234/100;
    // int tens=234/10-(hun*10);
    // int ones=234-(hun*100)-(tens*10);

    // int sum=hun+tens+ones;
    // int mul=hun*tens*ones;
    // int diff=mul-sum;
    // cout<< sum<< endl << mul<< endl<< "diff of mul and sum:"<< diff;


    //question 14:no of 1 bit in given unsigned integer
    // unsigned a= 1010100101;
    // int count=0;

    // while(a!=0){
    //     if(a&1){
    //         count++;
    //     }
    //     a>>1;
    // }
    // cout<< count;


    //question 15: converting no. into bit
    // int a;
    // cin>> a;

    
    //question 16: how to exit from infinie loop without using break if there is switch inside loop



    //question 17: why cant we use continue statement in switch case
    // int a = 2;

    // switch(a){

    //     case 1: cout<< "First" <<endl;
    //             break;

    //     case 2: cout<< "Second" <<endl;
    //             continue;

    //     case '1': cout<< "It is character" <<endl;
    //             break;

    //     default: cout<< "It is default" <<endl;

    // }


    //question 18: calculator where i/p a,b,operation
    // float a,b;
    // char opr;
    // cin>> a >> opr >> b;

    // switch(opr){

    //     case '+': cout<< a+b;
    //             break;

    //     case '-': cout<< a-b;
    //             break;

    //     case '*': cout<< a*b;
    //             break;

    //     case '/': cout<< a/b;
    //             break;

    //     // case '%': cout<< a%b;  (//% operator does not work on float double etc)
    //     //         break;

    //     default: cout<< "enter a valid operation";

    // }


    //qustion 19:notes problem 
    // int amount;
    // cout<< "amount: ";
    // cin>> amount;
    // int hun = amount/100;
    // int fifty = (amount%100)/50;             //(remainder of 100/50)
    // int twenty = ((amount%100)%50)/20  ;       //(remainder of 50/20)
    // int one = (((amount%100)%50)%20 )/1;

    // cout<< "no. of 100 notes:" << hun <<endl;
    // cout<< "no. of 50 notes:" << fifty <<endl;
    // cout<< "no. of 20 notes:" << twenty <<endl;
    // cout<< "no. of 10 notes:" << one <<endl;


    //question 20:a ki power b calculator
    //m-1
    // int a,b;
    // cin>> a >> b;
    // int ans = pow(a,b);
    // cout<< ans;
    
    //m-2
    // int a,b;
    // cin>> a >> b;
    // int ans=1;
    // for(int i=1 ; i<=b ; i++){
    //     ans = ans * a;
    //     if(ans == 0){
    //         break;
    //     }
    // }
    // cout<< ans;

    //m-3: function method
    // int a,b;
    // cin>> a >> b;

    // int final= power(a,b);   //(defined before main function)

    // cout<< final;
    // return 0;


    //question 21: calculating combination ncr using fucntion:
//     int n,r;
//     cin>> n >> r;

//  factorial of numbers:
//    cout << factorial_1(112) << endl;
//    cout << factorial_2(112) << endl;

//     int ans = nCr(n,r);
//     cout<< ans;


    //question 22: checking even odd using function
        // int a;
        // cin>> a;

        // if(isEven(a)){
        //     cout<< "number is odd" <<endl;
        // }
        // else{
        //     cout<< "number is even" <<endl;
        // }

    
    //question 23: print counting
        // int a;
        // cin>> a;

        // printCounting(a);


    //question 24:check wether number is prime or not
    // int a;
    // cin>> a;

    // isPrime(a);


    //question 25: nth term= 3n+7
    // int a;
    // cin>> a;

    // cout<< "nth term of AP 3n+7 :" << ap_term(a);


    //question 26: total no. of set bits in a and b
    // int a,b;
    // cin>> a >> b;

    // setbitsCalculator


    //question 27: nth term of febonnaci series
    // int n;
    // cin>> n;

    // cout<< n << "th term of febonnaci series is:" << febo_nth(n);


    //question 28:
    // int a = 10;
    // update_void(a);
    // cout<< a;


    //question 29;
    // int a = 15;
    // update_notVoid(a);
    // cout<< a;
    



}
