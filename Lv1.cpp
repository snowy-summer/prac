#include <iostream>
#include <sstream>
#include <vector>
#include <unordered_set>
#include <map>
#include <algorithm>

// 자릿수 구하기
using namespace std;
int solution(int n)
{
    int answer = 0;
    
    while(n!=0)
    {
        answer+= n%10;
        n/=10;
    }

    return answer;
}

//평균 구하기
double solution(vector<int> arr) {
    double answer = 0;
    double sum=0;
    for(int i=0;i<arr.size();i++)
    {
        sum+=arr[i];
    }
    answer= sum/arr.size();
    return answer;
}

//홀수 짝수
string solution(int num) {
    string answer = "";
    
    if(num%2==0)
    {
        answer+="Even";
    }
    else
    {
        answer+="Odd";
    }
    return answer;
}
//약수의 합
int solution(int n) {
    int answer = 0;
    for(int i=1;i<n+1;i++)
    {
        if(n%i==0)
        {
            answer+=i;
        }
    }
    return answer;
}

//x만큼 간격이있는 n개의 숫자
vector<long long> solution(int x, int n) {
    vector<long long> answer;
    int i=1;
    while(i<=n)
    {
        answer.push_back(x*i);
        i++;
    }
    return answer;
}

//나머지가 1이 되는 수 찾기
int solution(int n) {
    int answer = 0;
    
    for(int i=1;i<n;i++)
    {
        if(n%i==1)
        {
            answer=i;
            break;
        }
    }
    return answer;
}

//문자열 내의 y와 p의 개수
bool solution(string s)
{
    bool answer = true;
    int xcount=0;
    int ycount=0;
    
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='p'||s[i]=='P')
        {
            xcount++;
        }
        else if(s[i]=='y'||s[i]=='Y')
        {
            ycount++;
        }
    }
    if( xcount != ycount)
    {
        answer= false;
    }
    return answer;
}

//정수 제곱근 판별
long long solution(long long n) {
    long long answer = 0;
    double num=0;
    num=sqrt(n);
    if(num==(int)num)
    {
        answer=(num+1)*(num+1);
    }
    else
    {
        answer=-1;
    }
    return answer;
}

// 자연수 뒤집어 배열만들기
vector<int> solution(long long n) {
    vector<int> answer;
    
    while(n!=0)
    {
        answer.push_back(n%10);
        n/=10;
    }
    
    return answer;
}

//정수 내림차순으로 배치하기
long long solution(long long n) {
    long long answer = 0;
    vector<int> num;
    int count=0;
   
    while(n!=0)
    {
        num.push_back(n%10);
        n/=10;
        count++;
    }
    sort(num.begin(),num.end());
    
    for(int i=count-1;i>=0;i--)
    {
        answer+=num[i];
       if(i>0) answer*=10;
    }
    return answer;
}

//문자열을 정수로 바꾸기
int solution(string s) {
    int answer = 0;
    answer=stoi(s);
    return answer;
}

//하샤드 수
bool solution(int x) {
    bool answer = true;
    int sum=0;
    int xcopy=x;
    while(x!=0)
    { 
        sum+=x%10;
        x/=10;
    }
    
    if(xcopy%sum!=0)
    {
        answer=false;
    }
    return answer;
}

//두 정수 사이의 합
long long solution(int a, int b) {
    long long answer = 0;
    if(a<=b)
    {
        for(a;a<=b;a++)
        {
        answer+=a;
        }
    }
    else
    {
       for(b;b<=a;b++)
        {
        answer+=b;
        } 
    }
    
    return answer;
}

int solution(int num2) {
   long long num =num2;
    int count =0;
    while(num!=1)
    {
        if(num%2==0)
         {
            num/=2;
         }
        else
        {
            num=num*3+1;
        }
         
        count++;
        if(count==500)
         {
            count= -1;
            break;
         }
    }
    return count;
}

//서울에서 김서방 찾기
string solution(vector<string> seoul) {
   
    int x =0;
    for(int i =0;i<seoul.size();i++)
    {
        if(seoul[i]=="Kim")
        {
            x=i;
            break;
        }
    }
    
    
    return "김서방은 "+ to_string(x) + "에 있다";
}

//나누어 떨어지는 숫자 배열
vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]%divisor==0)
        {
            answer.push_back(arr[i]);
        }
    }
    if(answer.empty())
    {
        answer.push_back(-1);
    }
    sort(answer.begin(),answer.end());
    return answer;
}