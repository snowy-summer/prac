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