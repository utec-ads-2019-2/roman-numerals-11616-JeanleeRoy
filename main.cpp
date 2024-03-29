#include <iostream>
#include <string>
#include <sstream>
#include<bitset>
#include<string.h>
#include <math.h>

using namespace std;

typedef long long ll;


#define PI acos(-1)
#define E 2.718281828459

void number(int n) {
    string str;
            if(n>=1000) {
                int g=n/1000;
                n=n%1000;
                for(int j=1;j<=g;j++)str=str+"M";
            }
            if(n>=900) {
                n=n%900;
                str=str+"CM";
            }
            if(n>=500) {
                int g=n/500;
                n=n%500;
                str=str+"D";
            }
            if(n>=400) {
                n=n%400;
                str=str+"CD";
            }
            if(n>=100) {
                int g=n/100;
                n=n%100;
                for(int i=1;i<=g;i++)str=str+"C";
            }
            if(n>=90){
                n=n%90;
                str=str+"XC";
            }
            if(n>=50) {
                int g=n/50;
                n=n%50;
                str=str+"L";
            }
            if(n>=40) {
                n=n%40;
                str=str+"XL";
            }
            if(n>=10) {
                int g=n/10;
                n=n%10;
                 for(int i=1;i<=g;i++)str=str+"X";
            }
             if(n==1) {
                str=str+"I";
            }
            if(n==2) {
                str=str+"II";
            }
            if(n==3) {
                str=str+"III";
            }
            if(n==4) {
                str=str+"IV";
            }
            if(n==6) {
                str=str+"VI";
            }
            if(n==7) {
                str=str+"VII";
            }
            if(n==8) {
                str=str+"VIII";
            }
            if(n==9) {
                str=str+"IX";
            }
            if(n==5)str=str+"V";
            cout<<str<<endl;
}

void roman(string str) {
    int pre=0;
    int num=0;
    for(int i=0;i<str.length();i++) {
        int temp;
        if(str[i]=='M')temp=1000;
        if(str[i]=='D')temp=500;
        if(str[i]=='C')temp=100;
        if(str[i]=='L')temp=50;
        if(str[i]=='X')temp=10;
        if(str[i]=='V')temp=5;
        if(str[i]=='I')temp=1;
        if(pre<temp) {
            num-=pre;
            temp-=pre;
            num+=temp;
            pre=temp;
        }
        else {
            num+=temp;
            pre=temp;
        }
    }
    cout<<num<<endl;
    return;
}

int main(int argc, char** argv) {
    string str;
    while(cin>>str) {
        if(str[0]>=48&&str[0]<=57) {
            stringstream t(str);
            int n;
            t>>n;
            number(n);
        }
        else{
            roman(str);
        }
    }
	return 0;
}