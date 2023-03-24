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