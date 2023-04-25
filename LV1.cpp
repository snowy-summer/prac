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

//핸드폰 번호 가리기
string solution(string phone_number) {
    string answer = "";
    for(int i=0;i<phone_number.size();i++)
    {
        if(i<phone_number.size()-4)
        {
            answer+='*';
        }
        else
        {
            answer+=phone_number[i];
        }
        
    }
    return answer;
}

//음양 더하기
int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;
    
    for(int i=0;i<signs.size();i++)
    {
        if(signs[i])
        {
            answer+=absolutes[i];
        }
        else
        {
            answer+= -absolutes[i];
        }
    }
    
    return answer;
}

//제일 작은 수 제거하기
vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int minIndex = min_element(arr.begin(), arr.end()) - arr.begin();
    arr.erase(arr.begin() + minIndex);

    answer=arr;
    if(answer.empty())
    {
        answer.push_back(-1);
    }
    
    
    return answer;
}  

//없는 숫자 더하기
int solution(vector<int> numbers) {
    int answer = 45;
    
    for(int i= 0;i<numbers.size();i++)
    {
        answer -= numbers[i];
    }
    return answer;
}

//가운데 글자 가져오기
string solution(string s) {
    string answer = "";
    int num= s.size()/2;
    
    if(s.size()%2==0)
    {
        answer+=s[num-1];
        answer+=s[num];
    }
    else
    {
        answer+=s[num];
    }
    return answer;
}

//수박수박수박수박수박?
string solution(int n) {
    string answer = "";
    
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            answer+="수";
        }
        else
        {
            answer+="박";
        }
    }
    return answer;
}

//내적
int solution(vector<int> a, vector<int> b) {
    int answer = 0;
    
    for(int i=0;i<a.size();i++)
    {
        answer+=a[i]*b[i];
    }
    return answer;
}

//문자열 내림차순으로 배치하기
string solution(string s) {
    string answer = "";
    
    sort(s.begin(),s.end(),greater<int>());
    
    return s;
}

//약수의 개수와 덧셈
int solution(int left, int right) {
    int answer = 0;
    int count=1;
    for(int i=left;i<=right;i++)
    {
        for(int j=2;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count%2==0)
        {
            answer+=i;
        }
        else
        {
            answer-=i;
        }
        count=-1;
    }
    return answer;
}
#include <cmath>

int solution(int left, int right) {
    int answer = 0;
    for (int i = left; i <= right; i++) {
        int cnt = 0;
        for (int j = 1; j <= sqrt(i); j++) {
            if (i % j == 0) {
                cnt++;
                if (j * j != i) cnt++;
            }
        }
        answer += (cnt % 2 == 0 ? i : -i);
    }
    return answer;
}

//문자열 다루기 기본

bool solution(string s) {
    bool answer = true;
    if(s.size()!=4&&s.size()!=6)
    {
        return false;
    }
    for(char c:s)
    {
        if(!isdigit(c))
        {
            return false;
        }
    }
    return answer;
}

//부족한 금액 계산하기
long long solution(int price, int money, int count)
{
    long long answer = 0;
    long long sum =0;
   
    for(int i=1;i<=count;i++)
    {
        sum+=(price*i);
    }
    answer=abs(money-sum);
    if((money-sum)>=0)
    {
        answer=0;
    }
    return answer;
}

//행렬의 덧셈


vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    int n= arr1.size();
    int m=arr1[0].size();
    answer.resize(n,vector<int>(m));
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            answer[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    return answer;
}

//직사각형 별찍기
int main(void) {
    int a;
    int b;
    cin >> a >> b;
    
    for(int j=0;j<b;j++)
    {
         for(int i=0;i<a;i++)
        {
          cout<< '*';
        }
        cout<<endl;
    }
   
    return 0;
}

//최대공약수 최대 공배수
vector<int> solution(int n, int m) {
    vector<int> answer;
    int min=0;
    int max=0;
    min=__gcd(n,m);
    max=n*m/min;
    answer.push_back(min);
    answer.push_back(max);
    return answer;
}

//같은 숫자는 싫어
vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    answer.push_back(arr[0]);
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]!=answer[answer.size()-1])
        {
             answer.push_back(arr[i]);
        }
        
    }


    return answer;
}

//3진법 뒤집기

int solution(int n) {
    int answer = 0;
    vector<int> ternary;  // 3진법 자릿수를 저장할 벡터
    while (n > 0) 
    {
        ternary.push_back(n % 3);
        n /= 3;
    }
    int size = ternary.size();
    for (int i = 0; i < size; i++) 
    {
        answer += ternary[i] * pow(3, size - i - 1);  // 3진법을       10진법으로 변환
    }
    return answer;
}

//이상한 문자만들기
string solution(string s) {
    string answer = "";
    string word = "";
   
    for (int i = 0; i < s.size(); i++) 
    {
        if (s[i] == ' ') 
        { // 공백이 나오면 이전 단어 처리
            for (int j = 0; j < word.size(); j++) 
            {
                if (j % 2 == 0) 
                { // 짝수 인덱스는 대문자로 변경
                    answer += toupper(word[j]);
                } 
                else 
                { // 홀수 인덱스는 소문자로 변경
                    answer += tolower(word[j]);
                }
            }
            answer += ' '; // 공백 추가
            word = ""; // 다음 단어를 위해 초기화
           
        } 
        else 
        {
            word += s[i]; // 단어 추가
          
        }
    }
    // 마지막 단어 처리
    for (int j = 0; j < word.size(); j++) 
    {
        if (j % 2 == 0) 
        { // 짝수 인덱스는 대문자로 변경
            answer += toupper(word[j]);
        } 
        else 
        { // 홀수 인덱스는 소문자로 변경
            answer += tolower(word[j]);
        }
    }
    return answer;
}

//시저 암호
string solution(string s, int n) {
    string answer = "";
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=' ')
        {
          if(s[i]>=65&&s[i]<=90) //대문자
          {
              if(s[i]+n>90)
              {
                  answer+=(s[i]+n-26);
              }
              else
              {
                  answer+=(s[i]+n);
              }
          }
          else
          {
              if(s[i]+n>122)
              {
                  answer+=(s[i]+n-26);
              }
              else
              {
                  answer+=(s[i]+n);
              }
          }  
       
        }
        else
        {
            answer+=s[i];
        }
    }
    return answer;
}
//예산
int solution(vector<int> d, int budget) {
    int answer = 0;
    
    sort(d.begin(),d.end());
    for(int i=0;i<d.size();i++)
    {
        if(budget>=d[i])
        {
            budget-=d[i];
            answer++;
        }
    }
    
    return answer;
}

//삼총사
int solution(int number[], size_t number_len) {
    int answer = 0;
    
    for(int i= 0;i<number_len;i++)
    {
        for(int k=i+1;k<number_len;k++)
        {
            for(int j=k+1;j<number_len;j++)
            {
                
               if(number[i]+number[k]+number[j]==0)
               {
                   answer++;
               }
            }
        }
        
    }
    return answer;
}

//최소직사각형
int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int height =0;
    int width =0;
    for(int i=0;i<sizes.size();i++)
    {
        if(sizes[i][0]>sizes[i][1])
        {
            height=max(height,sizes[i][0]);
            width=max(width,sizes[i][1]);
        }
        else
        {
            height=max(height,sizes[i][1]);
            width=max(width,sizes[i][0]);
        }

    }
    
    answer=height*width;
    return answer;
}

//비밀지도
vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    string bi="";
    string bi2="";
    string shop="";
    
    for(int i=0;i<arr1.size();i++)
    {
        while(arr1[i]>0)
        {
             
          bi=to_string(arr1[i]%2)+bi;
          arr1[i]/=2;
        }
        while(bi.size()<n)
        {
            bi="0"+bi;
        }//2진법으로 만들기
        
         while(arr2[i]>0)
        {
             
            bi2=to_string(arr2[i]%2)+bi2;
            arr2[i]/=2;
        }
        while(bi2.size()<n)
        {
            bi2="0"+bi2;
        } //2진법만들기
        
            for(int k=0;k<n;k++)
            {
               if(bi[k]=='1' || bi2[k]=='1')
                {
                    shop+="#";
                }
                else
                {
                    shop+=" ";
                }
            }
            
           answer.push_back(shop);
           bi="";
           bi2="";
           shop=""; 
    }
       
    
   
    return answer;
}


//숫자 문자열과 영단어

int solution(string s) {
    vector<string> num_strs = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string num_str = "";
    string answer_str = "";
    
    for(char c : s) {
        if(isdigit(c)) {
            answer_str += c;
        } else {
            num_str += c;
            auto it = find(num_strs.begin(), num_strs.end(), num_str);
            if(it != num_strs.end()) {
                answer_str += to_string(it - num_strs.begin());
                num_str = "";
            }
        }
    }
    
    return stoi(answer_str);
}

//k번째수
vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> num;
    int first=0;
    int end =0;
    int call=0;
    for(int i=0;i<commands.size();i++)
    {
      first = commands[i][0];
      end = commands[i][1];
      call = commands[i][2];
        
        
        for(int k=first-1;k<=end-1;k++)
        {
            num.push_back(array[k]);
        }
        sort(num.begin(),num.end());
        answer.push_back(num[call-1]);
        num.clear();
        
    }
    
    return answer;
}

//크기가 작은 부분문자열

int solution(string t, string p) {
    int answer = 0;
    int plen = p.size();
    int tlen = t.size() - plen + 1;
    for (int i = 0; i < tlen; i++) {
        string temp = t.substr(i, plen);
        if (temp <= p) answer++;
    }
    return answer;
}

//두개 뽑아서 더하기
vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    
    for(int i=0;i<numbers.size();i++)
    {
        for(int k=0;k<numbers.size();k++)
        {
            if(k!=i)
            {
                answer.push_back(numbers[i]+numbers[k]);
            }
        }
    }
    sort(answer.begin(),answer.end());
    auto new_end=unique(answer.begin(),answer.end());
    answer.erase(new_end,answer.end());
    
    
    
    return answer;
}

//콜라문제
int solution(int a, int b, int n) {
    int answer = 0;
    int emptyBottles = 0; // 보유한 빈 병의 개수
    while (n >= a) {
        int currentColas = (n / a) * b; // 현재 빈 병으로 받을 수 있는 콜라의 개수
        answer += currentColas; // 총 받은 콜라의 개수에 더하기
        emptyBottles += currentColas; // 새로운 콜라를 마신 뒤 남은 빈 병의 개수
        n = n % a + emptyBottles; // 나머지 빈 병 개수와 새로운 빈 병 개수를 합쳐서 다음 반복문에 활용
        emptyBottles = 0; // 다음 반복문에서 새로운 빈 병 개수를 계산하기 위해 초기화
    }
    return answer;
}

//푸드 파이트 대회

string solution(vector<int> food) {
    string answer = "";
    string s="";
    
    for(int i=1;i<food.size();i++)
    {int n= food[i]/2;
        while(n>0)
        {
          answer+=to_string(i);
          n--;
        }
       
    }
    s= answer+'0';
    reverse(answer.begin(),answer.end());
    s+=answer;
    return s;
}

//2016년
string solution(int a, int b) {
    string answer = "";
    int daysOfMonth[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string daysOfWeek[7] = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
    int days = 0;
    for (int i = 1; i < a; i++) {
        days += daysOfMonth[i];
    }
    days += b - 1;
    answer = daysOfWeek[days % 7];
    return answer;
}


//폰켓몬

int solution(vector<int> nums)
{
    int answer = 0;
    int pick=nums.size()/2;
    
    set<int> s(nums.begin(), nums.end());
    if (s.size() <= pick) {
        answer = s.size();
    } else {
        answer = pick;
    }
    
    return answer;
}
// 모의고사
vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int pattern1[5] = {1, 2, 3, 4, 5};
    int pattern2[8] = {2, 1, 2, 3, 2, 4, 2, 5};
    int pattern3[10] = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    int score1 = 0, score2 = 0, score3 = 0;
    
    for(int i = 0; i < answers.size(); i++) {
        
        if(answers[i] == pattern1[i % 5]) score1++;
        if(answers[i] == pattern2[i % 8]) score2++;
        if(answers[i] == pattern3[i % 10]) score3++;
    }
    
   
    int max_score = max(score1, max(score2, score3));
    
    
    if(max_score == score1) answer.push_back(1);
    if(max_score == score2) answer.push_back(2);
    if(max_score == score3) answer.push_back(3);
    
    return answer;
}

//소수찾기
int solution(int n) {
    int answer = 0;
    
    for(int i=2;i<=n;i++)
    { bool is_prime= true;
        for(int k=2;k*k<=i;k++) //절반까지만 탐색해도 된다.
        {
            if(i%k==0)
            {
                is_prime=false;
                break;
            }

        }
        if(is_prime)
        {
            answer++;
        }
    }
    return answer;
}
//과일장수
bool cmp(int a, int b) {
    return a > b;
}

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    int n = score.size();

    sort(score.begin(), score.end(), cmp); 

    int box_cnt = n / m; 
    for (int i = 0; i < box_cnt; i++) {
        int min_score = score[i * m + m - 1]; 
        answer += min_score * m; 
    }
    return answer;
}

//실패율 *&**** 내가 못품

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<pair<double, int>> percent; // pair의 첫 번째 원소를 double로 수정
    
    int bot = stages.size(); // 전체 도전자 수
    for(int i=1;i<=N;i++) {
        int count = count_if(stages.begin(), stages.end(), [i](int stage) { return stage == i; });
        // i 스테이지에 머물러 있는 사용자 수 세기
        if(count == 0) { // 실패율 계산 불가능한 경우
            percent.push_back({0, i});
        }
        else {
            percent.push_back({static_cast<double>(count) / bot, i}); // 실패율 계산
        }
        bot -= count; // i 스테이지에 머물러 있는 사용자는 다음 스테이지에서 제외
    }
    
    sort(percent.begin(), percent.end(), [](auto p1, auto p2) { // 실패율 내림차순으로 정렬
        if(p1.first == p2.first) return p1.second < p2.second;
        return p1.first > p2.first;
    });
    
    for (auto p : percent) {
        answer.push_back(p.second);
    }
    
    return answer;
}

//기사단원의 무기
int solution(int number, int limit, int power) {
    int answer = 1;
    
    for(int i=2;i<=number;i++)
    {
     int sqrtI = sqrt(i);
     int count = 0;
     for (int k = 1; k <= sqrtI; k++) 
      {
        if (i % k == 0) {
            count++;
            if (k != i / k) {
                count++;
            }
        }
      }
       
    
        if(count>limit)
        {
            answer+=(power);
        }
        else
        {
            answer+=count;
        }
    }
    
    return answer;
}

//로또의 최고순위와 최저순위
vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int count =0;
    int low=0;
    int high=0;
    
    for(int i=0;i<lottos.size();i++)
    {
        if(lottos[i]==0)
        {
            high++;
        }
        for(int k=0;k<win_nums.size();k++)
        {
            if(lottos[i]==win_nums[k])
            {
                count++;
            }
    
        }
        
    }
    low+=count;
    high+=count;
    
    if(high==6)
        answer.push_back(1);
    else if(high==5)
        answer.push_back(2);
    else if(high==4)
        answer.push_back(3);
    else if(high==3)
        answer.push_back(4);
    else if(high==2)
        answer.push_back(5);
    else 
        answer.push_back(6);
    
    if(low==6)
        answer.push_back(1);
    else if(low==5)
        answer.push_back(2);
    else if(low==4)
        answer.push_back(3);
    else if(low==3)
        answer.push_back(4);
    else if(low==2)
        answer.push_back(5);
    else 
        answer.push_back(6);
    
    return answer;
}

//숫자 짝궁

string solution(string X, string Y) {
    string answer = "";
    unordered_map<char, int> charCount;
    
    // X 문자열의 각 문자 빈도수 저장
    for (char ch : X) {
        charCount[ch]++;
    }

    // Y 문자열의 각 문자를 이용하여 가장 큰 정수 생성
    for (char ch : Y) {
        if (charCount[ch] > 0) {
            answer += ch;
            charCount[ch]--;
        }
    }

    // 만들어진 정수가 없다면 -1 반환
    if (answer.empty()) {
        answer = "-1";
    } else {
        // 문자열을 내림차순으로 정렬하여 가장 큰 정수로 만들기
        sort(answer.rbegin(), answer.rend());
    }
     if (answer[0] == '0') {
            answer = "0";
        }

    return answer;
}

//문자열 내마음대로 정렬하기
int N;
bool cmp(string a, string b){
    if(a[N] == b[N])
    {
        return a < b;
    }
    else
    {
        return a[N] < b[N];
    }
}

vector<string> solution(vector<string> strings, int n) {
    N=n;
    sort(strings.begin(), strings.end(), cmp);
    return strings;
}

//완주하지 못한 선수
string solution(vector<string> participant, vector<string> completion) {

    
    sort(participant.begin(),participant.end());
    sort(completion.begin(),completion.end());
    
    for(int i=0;i<completion.size();i++)
    {
        if(participant[i]!=completion[i])
        {
           return participant[i];

        }
    }
    
    return participant.back();
}

//숫자패드 누르기

string solution(vector<int> numbers,string hand) {
    string answer="";
    int left_hand = 10;
    int right_hand = 11;

    for(int i=0;i<numbers.size();i++)
    {
        int number = numbers[i];

        if(number == 1 || number == 4 || number == 7)
        {
            answer+='L';
            left_hand = number;
        }
        else if(number == 3 || number == 6 || number == 9)
        {
            answer+='R';
            right_hand =number;
        }
        else
        {
            int left_distance = abs(left_hand - number); 
            int right_distance = abs(right_hand - number);
            if (left_distance == right_distance) 
            {
                
                if (hand == "left") {
                    answer += 'L';
                    left_hand = number;
                } else {
                    answer += 'R';
                    right_hand = number;
                }
            }
            else if (left_distance < right_distance) 
            {
                
                answer += 'L';
                left_hand = number;
            } else 
            {
                
                answer += 'R';
                right_hand = number;
            }
        }
}
// 옹알이(2)

int solution(vector<string> babbling)
{
    int answer=0;

    for(string s : babbling)
    {
        int yet=0; 
        bool o=true;
        for(int i=0; i<s.length(); i++)
        {
            if(s.substr(i,3)=="aya" && yet!=1) 
            { yet=1; i+=2; }
            else if(s.substr(i,2)=="ma" && yet!=2) 
            { yet=2; i+=1; }
            else if(s.substr(i,3)=="woo" && yet!=3) 
            { yet=3; i+=2; }
            else if(s.substr(i,2)=="ye" && yet!=4) 
            { yet=4; i+=1; }
            else 
            { o=false; break; }
        }
        if(o==true) answer++;
    }

    return answer;
}

//문자열 나누기
int solution(string s) {
    int answer = 0;
    int count =0;
    int other=0;
    int i=0;
    while(i<s.size())
    {
        if(s[i]==s[0])
        {
            count++;
        }
        else
        {
            other++;
        }
        
        if(count==other)
        {
            s.erase(0,i+1); //0부터 i+1개를 제거한다.
            count=0;
            other=0;
            i=0;
            answer++;
        }
        else
        {
            i++;
        }
        
    }
    if(!s.empty()) // 읽을 글자가 없어질 경우 한 뭉텅이기 때문에 answer++해준다.
    {
        answer++;
    }
    return answer;
}

//둘만의 암호
string solution(string s, string skip, int index) {
    string answer = "";
    char current;
    for(int i=0;i<s.size();i++)
    {
        current=s[i];
        for(int n=1;n<=index;n++)
        {   current+=1;
            if(current>'z') //z 넘어갈 경우 다시 a로
            {
                current = 'a' + (current-'z'-1);
            }
            
         while(skip.find(current)!=string::npos) // 다음 알파벳으로 넘어갔을때 skip에 있을경우 추가적으로 한번더 넘어간다. 
          {
             current+=1;
             if(current>'z') //z 넘어갈 경우 다시 a로
            {
                current = 'a' + (current-'z'-1);
            }

          }
            
        }
        answer+=current;
        
    }
    return answer;
}

//바탕화면 정리

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    
    int first = -1; // 처음으로 #이 존재하는 index
    int front = wallpaper[0].size(); // 원소 중 가장 앞에 있는 #의 위치
    int last = -1; // 마지막으로 #이 존재하는 index
    int back = -1; // 가장 뒤에 있는 #의 위치
    
    for (int i = 0; i < wallpaper.size(); i++) 
    {
        for (int j = 0; j < wallpaper[i].size(); j++) 
        {
            if (wallpaper[i][j] == '#') 
            {
                if (first == -1) 
                {
                    first = i;
                }
                if (front > j) 
                {
                    front = j;
                }
                last = i;
                if (back < j) 
                {
                    back = j;
                }
            }
        }
    }

    answer.push_back(first);
    answer.push_back(front);
    answer.push_back(last + 1);
    answer.push_back(back + 1);
    
    return answer;
}