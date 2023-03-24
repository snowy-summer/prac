#include <string>
#include <vector>

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