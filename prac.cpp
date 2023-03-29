#include <string>
#include <vector>
#include <unordered_set>
#include <map>



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