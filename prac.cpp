#include <string>
#include <vector>
#include <unordered_set>
#include <map>
#include <sstream>



using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    int temp;
    
    if(direction == "right")
    {
       
        temp= numbers[numbers.size()-1];
        for(int i =numbers.size()-1;i>0;i--)
        { 
            numbers[i] = numbers[i-1];
        }
        numbers[0]= temp;
    }
    else
    {
        
        temp = numbers[0];
        for(int i =0;i<numbers.size()-1;i++)
        { 
            numbers[i] = numbers[i+1];
        }
        numbers[numbers.size()-1]= temp;
    }
    return numbers;
}

vector<int> solution(vector<int> array) 
{
    int max_num = array[0];
    int max_idx = 0;

    for(int i = 1; i < array.size(); i++) 
    {
        if(array[i] > max_num) 
        {
            max_num = array[i];
            max_idx = i;
        }
    }

    return {max_num, max_idx};
}

string solution(int age) {
    string answer = "";

   
    int quotient = age / 10;
    int remainder = age % 10;

   
    while (quotient > 0) {
        answer = char(quotient % 10 + 'a') + answer;
        quotient /= 10;
    }


    answer += char(remainder + 'a');

    return answer;
}

int solution(int n) {
    int answer = 0;
    while(true)
    {answer++;
        if((6*answer)%n ==0)
        {
            break;
        }
        
    }
   
    return answer;
}
int solution(int order) {
    int answer = 0;
    while(order>0)
    {
        if(order % 10 == 3 || order % 10 == 6 || order % 10 == 9)
        {answer+=1;
        }
        order/=10;
    }
    return answer;
}

//약수구하기
vector<int> solution(int n) {
    vector<int> answer;
    
    for(int i=1;i<=n;++i)
    {
        if(n%i==0)
        {
         answer.push_back(i);   
        }
    }
    sort(answer.begin(),answer.end());
    
    return answer;
}

//소문자 변환후 알파벳 순서대로 정렬
string solution(string my_string) {
    string answer = "";
    
    for(char c :my_string)
    {
        answer+=tolower(c);
    }
    sort(answer.begin(),answer.end());
    return answer;
}

int solution(int n) {
    int answer = 0;
    
    for(int i= 2;i<=n;i++)
    {
        for(int k= 2;k<i;k++)
        {
              if(i%k==0)
             {
               answer++;
                  break;
             }
        }
        
    }
    
    return answer;
}


//중복된 문자 제거
string solution(string my_string) {
    unordered_set<char> seen;
    string result = "";

    for (char c : my_string) {
        if (seen.find(c) == seen.end()) 
        {  
            seen.insert(c);
            result += c;
        }
    }

    return result;
}

//모스부호
string solution(string letter) {
    
 map<string,string> morse =  { {".-","a"},{"-...","b"},{"-.-.","c"},{"-..","d"},{".","e"},{"..-.","f"},
{"--.","g"},{"....","h"},{"..","i"},{".---","j"},{"-.-","k"},{".-..","l"},
{"--","m"},{"-.","n"},{"---","o"},{".--.","p"},{"--.-","q"},{".-.","r"},
{"...","s"},{"-","t"},{"..-","u"},{"...-","v"},{".--","w"},{"-..-","x"},
{"-.--","y"},{"--..","z"}
};
    string answer = "";
    string current="";
    
    for(char c: letter)
    {
        if(c ==' ')
        {
            answer +=morse[current];
            current="";
        }
        else
        {
            current +=c;
        }
    }
    
    answer +=morse[current];
   
    
    
    
    return answer;
}

//A로 B만들기
int solution(string before, string after) {
    
    
    sort(before.begin(),before.end());
    sort(after.begin(),after.end());
    
    if(before==after)
        return 1;
    else
        return 0;

}


//팩토리얼!
int solution(int n) {
    int a=1;
    
    for(int i =1;i<=10;i++)
    { a*=i;
        if(n==a)
        {
            return i;
        }
        else if(n<a)
        {
            return i-1;
        }
    }
}


//1차원 배열을 입력받아 2차원으로 만들기 예) [1,2,3,4,5,6] ->[[1,2],[3,4],[5,6]]
vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer;
    vector<int> row;
    int index=0;
    
    for(int num:num_list)
    {
        row.push_back(num);
        index++;
        
        if(index==n)
        {
            answer.push_back(row);
            row.clear();
            index = 0;
        }
    }
    return answer;
}

int solution(int i, int j, int k) {
    int answer = 0;
    
   for(int n= i;n<=j;n++)
   {
       string str = to_string(n);
       for(int m= 0;m<str.length();m++)
       {
           if((int)(str[m]-'0')==k) //아스키 코드 변환
               answer++;
       }
   }
 
    return answer;
}

int solution(vector<int> array, int n) {
    int answer = array[0];  // 첫번째 숫자가 가장 가까운 경우
    int num =abs(array[0]-n);
    int num2=0;
    for(int i=1;i<array.size();i++)
    {
        if(num>abs(array[i]-n))
        {
            num=abs(array[i]-n);
            num2=i;
            answer= array[i];
        }
        else if(num==abs(array[i]-n))
        {
            if(array[num2]<array[i])
            {
                answer=array[num2];
            }
            else if(array[num2]>array[i])
            {
                answer = array[i];
            }
        }
    }
    
    return answer;
}

vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    int num=emergency.size();
    
    for(int i = 0; i< emergency.size(); i++)
    {
        for(int j =0;j<emergency.size();j++)
        {
            if(emergency[i]>emergency[j])
            {
                num--;
            }
         
        }
       answer.push_back(num);
        num=emergency.size();
    }
    
    
    return answer;
}

//딱 한번만 등장하는 문자 세기
string solution(string s) {
    string answer = "";
    int count =0;
    for(int i=0;i<s.size();i++)
    {
        for(int n=0;n<s.size();n++)
        {
            if(s[i]==s[n])
            {
                count++;
            }
        }
        if(count ==1)
            {
                answer+=s[i]; 
            }
            count =0;
    }
    sort(answer.begin(),answer.end());
    return answer;
}


//이진수 덧셈 잘모르겠음
string solution(string bin1, string bin2) 
{
    string result;
    int carry = 0;
    int i = bin1.length() - 1;
    int j = bin2.length() - 1;
    
    while (i >= 0 || j >= 0 || carry > 0) 
    {
        int sum = carry;
        
        if (i >= 0) 
        {
            sum += bin1[i] - '0';
            i--;
        }
        
        if (j >= 0) 
        {
            sum += bin2[j] - '0';
            j--;
        }
        
        carry = sum / 2;
        sum = sum % 2;
        result = to_string(sum) + result;
    }
return result; 
}

int solution(string my_string) {
    int sum =0;
    int num = 0;
    
    for (char c:my_string)
    {
        if(isdigit(c))
        {
            num=num*10+(c-'0'); 
//예를 들어, "123" 문자열에서 처음에는 num = 0이고,
// "1" 문자를 만나면 num = 1이 되고, "2" 문자를 만나면 num = 12가 됩니다. 
//다음 문자가 숫자가 아니라면, 현재까지 찾은 숫자 num을 sum에 더하고
// num을 다시 0으로 초기화합니다. 마지막으로 sum에 num을 더한 값을 반환합니다.
        }
        else
        {
            sum+=num;
            num =0;
        }

    }
    sum +=num;
    
    return sum;
}

vector<int> solution(int n) {
    vector<int> answer;
    int i =0;
    int num = 2;
   while(n>1)
   {
       if( n%num==0)
       {
           if(answer.empty()||answer[i]!=num)
           {answer.push_back(num);
            if(answer[i]!=num)
            {i++;
            }
           }
           n/=num;
       }
       else
       {
           num++;
       }
        
   }
    sort(answer.begin(),answer.end());
    return answer;
}

int solution(vector<int> array) {
    int answer = 0;
    
    for(int num :array)
    {
        while(num>0)
        {
            if(num%10==7)
            {
                answer++; 
            }
            num/=10;
                
        }
    }
    
    
    return answer;
}

int solution(vector<int> numbers, int k) {
    int answer = 0;
    int count=0;
    
    for(int i = 0;i<numbers.size();i++)
    {
        answer =numbers[i];
        ++count;
        if(count ==k)
        { break;
        }
        
        ++i;
        if(i==(numbers.size()-1))
        {
            i= -1;
        }
        else if(i==numbers.size())
        {
            i=0;
        }
    }
    return answer;
}

int solution(string s) {
    vector<int> nums;  
    int result = 0;    

    
    stringstream ss(s);
    string token;
    while (getline(ss, token, ' ')) {
        if (token == "Z") {
            result -= nums.back();
            nums.pop_back();
        } else {
            int num = stoi(token);
            nums.push_back(num);
            result += num;
        }
    }

    return result;
}

long long solution(string numbers) {
    long long answer = 0;
    map<string,int> num ={{"zero",0},{"one",1},{"two",2},{"three",3},{"four",4},{"five",5},{"six",6},{"seven",7},{"eight",8},{"nine",9}};
    
    string num_str = "";
    
    for (char c : numbers) 
    {
        
            num_str += c;
            if (num.find(num_str) != num.end()) 
            {
                answer = answer * 10 + num[num_str];
                num_str = "";
            }
        
    }
    
    return answer;
}

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    
    for (int i = 0; i < my_str.size(); i += n) 
    {
        answer.push_back(my_str.substr(i, n));
    }
   
    return answer;
}

int solution(string my_string) {
    stringstream ss(my_string);  // 입력 문자열을 stringstream에 저장
    int result = 0;
    char op;  // 연산자를 저장할 변수
    ss >> result;  // 첫번째 숫자를 result에 저장
    
    // 연산자와 숫자를 번갈아가면서 처리
    while (ss >> op) {
        int num;
        ss >> num;
        if (op == '+') {
            result += num;
        } else if (op == '-') {
            result -= num;
        }
    }
    return result;
}


int solution(vector<int> sides) {
    int answer = 0;
    int sum=0;
    sort(sides.begin(),sides.end());

     
     answer=sides[0]+sides[0]-1;
    
    return answer;
}

int solution(vector<string> spell, vector<string> dic) 
{
  
    sort(spell.begin(),spell.end());
    do{
        string word;
        for(string c: spell)
        {
            word+=c;
        }
        if(find(dic.begin(),dic.end(),word)!=dic.end())
        {
            return 1;
        }
    } while(next_permutation(spell.begin(),spell.end()));
    
    return 2;
}

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer;
    answer.push_back(0);
    answer.push_back(0);
    for(int i = 0; i<keyinput.size();i++)
    {
        if(keyinput[i]=="left")
        {answer[0]-=1;}
        else if(keyinput[i]=="right")
        {answer[0]+=1;}
        else if(keyinput[i]=="down")
        {answer[1]-=1;}
        else if(keyinput[i]=="up")
        {answer[1]+=1;}
        
         if(answer[0]>(board[0]/2))
        {
            answer[0]=board[0]/2;
        }
        else if(answer[0]< -(board[0]/2))
        {
            answer[0]= -(board[0]/2);
        }
    
        if(answer[1]>(board[1]/2))
        {
            answer[1]=board[1]/2;
        }
        else if(answer[1]< -(board[1]/2))
        {
            answer[1]= -(board[1]/2);
        }
    }
       
    
    return answer;
}

int solution(vector<vector<int>> dots) {
   
    int x_min = min({dots[0][0], dots[1][0], dots[2][0], dots[3][0]});
    int x_max = max({dots[0][0], dots[1][0], dots[2][0], dots[3][0]});
    int y_min = min({dots[0][1], dots[1][1], dots[2][1], dots[3][1]});
    int y_max = max({dots[0][1], dots[1][1], dots[2][1], dots[3][1]});
    
    
    int width = abs(x_max - x_min);
    int height = abs(y_max - y_min);
    int area = width * height;
    
    return area;
}

int solution(int M, int N) {
    int answer = 0;
    answer=M-1+(N-1)*M;
    return answer;
}

string solution(vector<string> id_pw, vector<vector<string>> db) {
    string answer = "";
    string ans="";
    for(int i =0;i<db.size();i++)
    {
      if(id_pw[0]==db[i][0]&&id_pw[1]==db[i][1])
    {
        answer+="login";
          ans=answer;
          answer="";
          break;
        
    }
    else if(id_pw[0]==db[i][0]&&id_pw[1]!=db[i][1])
    {
        answer+="wrong pw";
        ans=answer;
        answer="";
    }
    else if(id_pw[0]!=db[i][0]&&id_pw[1]!=db[i][1])
    {
        answer+="fail";
        ans=answer;
        answer="";
    }  
    }
    
    return ans;
}

int solution(int chicken) {
    int coupons = chicken; 
    int service_chicken = 0; 

    while (coupons >= 10) { 
        service_chicken++; 
        coupons -= 10;
        coupons++;
    }

    return service_chicken;
}

//최대공약수 이용
int solution(int a, int b) {
    int answer = 0;
    int g= __gcd(a, b);
    b/=g;
    while (b % 2 == 0) b /= 2;
    while (b % 5 == 0) b /= 5;
    if(b!=1) return 2;
    else return 1;
    
    return answer;
}

int solution(int n) {
    int answer=0;
    int cnt=1, m=1;
    
    while(1)
    {
        bool check=false;
        string s=to_string(m);
        if(m%3==0)
        {
            m+=1;
            continue;
        }
    
        else{
            for(int i=0; i<s.size(); i++)
            {
                if(s[i]=='3')
                {
                    m+=1;
                    check=true;
                    break;
                }
            }
        }
        if(check) continue;
        if(cnt==n) break;
        
        cnt++;
        m++;
    }
    
    return m;
}

//이해가 잘 안간다.
bool cmp(int a, int b, int n) {
    int da = abs(n - a);
    int db = abs(n - b);
    if (da == db) return a > b;
    return da < db;
}

vector<int> solution(vector<int> numlist, int n) {
    sort(numlist.begin(), numlist.end(), [&](int a, int b) {
        return cmp(a, b, n);
    });
    return numlist;
}


int solution(std::string A, std::string B) 
{
    int n = A.size();
    for (int i = 0; i < n; i++) 
    {
        if (A == B) 
        {
            return i;
        }
        std::rotate(A.rbegin(), A.rbegin() + 1, A.rend());// 오른쪽 방향으로 회전
    }

    return -1;
}

string solution(string polynomial) {
    string answer = "";
    istringstream iss(polynomial);
    vector<string> tokens;
    string token;
    
    int xnum=0;
    int num=0;
    while(iss>>token) //빈칸을 기준으로 분리하기
    {
        tokens.push_back(token);
    }
    for(string findx: tokens)
    {
        if(findx.find('x')!=string::npos) // x가 포함된 항일 경우
        {
            int x_index=findx.find('x'); //x의 위치 찾기
            if(x_index==0)//x가 첫번째 위치하면 x앞에 아무것도 없기 때문에
            {
               xnum+=1; 
            }
            else
            {
                string num_str = findx.substr(0,x_index); //x앞 추출
                if(num_str.empty()) //x앞이 비어있는 경우 계수가 1
                {
                    xnum+=1;
                }
                else
                {
                    xnum+=stoi(num_str);
                }
            }
            
        }
        else
        {
            if(findx.find('+')==string::npos) //나머지 숫자와 '+'중에 '+'가 아닐 경우
            {
                num+=stoi(findx);
            }
        }
    }
   if(xnum!=0&&xnum!=1)
    { 
     answer+=to_string(xnum) + "x";
    }
    
    if(xnum==1)
    {
        answer+="x";
    }
  
    if(num!=0)
    {
        if(xnum!=0)
        {
            answer+=" + ";
        }
        answer+=to_string(num);
    }
    return answer;
}

int solution(vector<int> array) {
    map<int, int> freqMap; // 각 원소가 나타난 빈도수를 저장할 map
    int maxFreq = 0; // 최빈값의 빈도수를 저장할 변수
    int mode = -1; // 최빈값을 저장할 변수

    // 각 원소의 빈도수를 map에 저장
    for (int i = 0; i < array.size(); i++) {
        freqMap[array[i]]++;
        maxFreq = max(maxFreq, freqMap[array[i]]);
    }

    // 최빈값이 여러 개인지 확인하고, mode 변수에 값을 저장
    for (auto it = freqMap.begin(); it != freqMap.end(); it++) {
        if (it->second == maxFreq) {
            if (mode == -1) { // 최빈값이 처음 나타난 경우
                mode = it->first;
            } else { // 최빈값이 여러 개인 경우
                return -1;
            }
        }
    }

    return mode;
}

int evaluate_expression(const string& expression) {
    istringstream iss(expression);
    int left_operand, right_operand;
    char op;
    iss >> left_operand >> op >> right_operand; // 6 + 7 같은 경우에는 6은 left +는op에 7은 right에 저장된다. 공백 문자 기준

    if (op == '+') {
        return left_operand + right_operand;
    }
    else if (op == '-') {
        return left_operand - right_operand;
    }
    
}

vector<string> solution(vector<string> quiz) {
    vector<string> results;
    for (const string& expression : quiz) {
        try {
            int expected_result = stoi(expression.substr(expression.find('=') + 1));
            if (evaluate_expression(expression.substr(0, expression.length() - 2)) == expected_result) {
                results.push_back("O");
            }
            else {
                results.push_back("X");
            }
        }
        catch (...) {
            results.push_back("X");
        }
    }
    return results;
}

//등비 등차 수열의 마지막 다음에 오는 수
int solution(vector<int> common) {
    int answer = 0;
    int ddnum=0;
    int dbnum =0;
    
    if(common[1]-common[0] == common[2]-common[1])
    {
        ddnum=common[1]-common[0];
        answer=(common.back()+ddnum);
    }
    else
    {
       dbnum=common[2]/common[1]; 
        answer=(common.back()*dbnum);
    }
    return answer;
}

vector<int> solution(int num, int total) {
    vector<int> answer;
    int m;
    if(total%num==0)
    {
        if(num%2!=0) //홀수일 경우
        {for(int i=1; i<=((num-1)/2);i++)
            {
                answer.push_back(total/num + i);
                answer.push_back(total/num - i);
            }
         answer.push_back(total/num);
        }
       
       
    }
    else
    {
        m=total%num;
        for(int i=1;i<m;i++)
        {
            answer.push_back(total/num+i);
            answer.push_back(total/num-i);
        }
        answer.push_back(total/num);
        answer.push_back(total/num+m);
    }
     sort(answer.begin(),answer.end());
    return answer;
}

int solution(vector<vector<int>> board) {
    int answer = 0;
    int n = board.size();
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<board[i].size();j++)
        {
            if(board[i][j]==1||((board[i][j]%2 != 0) && board[i][j]!=0)) //(board[i][j]%2 != 0)  곂쳐서 위험지역으로 4 이렇게 나오는 부분때문에 홀수가 나와야한다.
            {
                if(i-1>=0 && j-1>=0) board[i-1][j-1]+=2;
                if(i-1>=0)           board[i-1][j]+=2;
                if(i-1>=0 && j+1<n)  board[i-1][j+1]+=2;
                if(j-1>=0)           board[i][j-1]+=2;
                if(j+1<n)            board[i][j+1]+=2;
                if(i+1<n && j-1>=0)  board[i+1][j-1]+=2;
                if(i+1<n)            board[i+1][j]+=2;
                if(i+1<n && j+1<n)   board[i+1][j+1]+=2; 
            }
        }
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(board[i][j]==0)
                answer++;
        }
    }
        
    return answer;
}

//곂치는 선분의 길이 구하기
int solution(vector<vector<int>> lines) {
    int answer = 0;
    vector<int> points;
    for (const auto& line : lines) {
        points.push_back(line[0]);
        points.push_back(line[1]);
    }
    sort(points.begin(), points.end());

    for (int i = 0; i < points.size() - 1; i++) {
        int start = points[i], end = points[i+1];
        int count = 0;
        for (const auto& line : lines) {
            if (start >= line[0] && end <= line[1]) {
                count++;
            }
        }
        if (count >= 2) {
            answer += end - start;
        }
    }

    return answer;
}

int solution(vector<vector<int>> dots) {
    int answer = 0;

    // 첫 번째 점과 두 번째 점을 이은 직선과 세 번째 점과 네 번째 점을 이은 직선이 평행인지 판단
    if ((dots[0][0]-dots[1][0])*(dots[2][1]-dots[3][1]) == (dots[0][1]-dots[1][1])*(dots[2][0]-dots[3][0]))
        answer = 1;

    // 첫 번째 점과 세 번째 점을 이은 직선과 두 번째 점과 네 번째 점을 이은 직선이 평행인지 판단
    if ((dots[0][0]-dots[2][0])*(dots[1][1]-dots[3][1]) == (dots[0][1]-dots[2][1])*(dots[1][0]-dots[3][0]))
        answer = 1;

    // 첫 번째 점과 네 번째 점을 이은 직선과 두 번째 점과 세 번째 점을 이은 직선이 평행인지 판단
    if ((dots[0][0]-dots[3][0])*(dots[1][1]-dots[2][1]) == (dots[0][1]-dots[3][1])*(dots[1][0]-dots[2][0]))
        answer = 1;

    return answer;
}

bool cmp(const pair<int, int>& a, const pair<int, int>& b) {
    if (a.first == b.first) {
        return a.second < b.second;
    }
    return a.first > b.first;
}

vector<int> solution(vector<vector<int>> scores) {
    vector<pair<int, int>> avg_scores;
    for (int i = 0; i < scores.size(); i++) {
        int avg = (scores[i].front() + scores[i].back());
        avg_scores.push_back({ avg, i + 1 });
    }
    sort(avg_scores.begin(), avg_scores.end(), cmp);
    vector<int> answer(scores.size());
    int rank = 1;
    answer[avg_scores[0].second - 1] = rank;
    for (int i = 1; i < avg_scores.size(); i++) {
        if (avg_scores[i].first == avg_scores[i - 1].first) {
            answer[avg_scores[i].second - 1] = rank;
        }
        else {
            rank = i + 1;
            answer[avg_scores[i].second - 1] = rank;
        }
    }
    return answer;
}


int solution(vector<string> babbling) {
    int answer=0;
    for (int i = 0; i < babbling.size(); ++i) 
 {
    // 1. 문자열에 들어갈 수 없는 것들이 있다면 건너뛰기
    if (babbling[i].find("ayaaya") != string::npos)
    {
        continue;
    }

    else if (babbling[i].find("yeye") != string::npos)
    {
        continue;
    }

    else if (babbling[i].find("woowoo") != string::npos)
    {
        continue;
    }

    else if (babbling[i].find("mama") != string::npos)
    {
        continue;
    }

    else 
    {
        // 2. babbling[i]에서 aya, ye, woo, ma를 찾았을 경우
        //    그 크기만큼 count에 더해줌
        int count = 0;
        if (babbling[i].find("aya") != -1)
        {
            count += 3;
        }

        if (babbling[i].find("ye") != -1)
        {
            count += 2;
        }

        if (babbling[i].find("woo") != -1)
        {
            count += 3;
        }

        if (babbling[i].find("ma") != -1)
        {
            count += 2;
        }

        // 3. count와 babbling[i]의 길이를 비교해서 같다면
        // answer에 + 1
        if (count == babbling[i].length())
        {
            ++answer;
        }
        // --> 
        // 같지 않다면 babbling[i]에 aya, ye, woo, ma를 제외한
        // 머쓱이가 발음할 수 없는 문자가 들어있었다는 뜻

    }
 }
return answer;
}