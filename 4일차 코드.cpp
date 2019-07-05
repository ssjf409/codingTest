#include <string>
#include <vector>

using namespace std;

long long solution(int n, vector<int> times) {
    long long answer = 0;
    long long now_time = 0;
    long long sum = 0;
    
    while(n > sum) {
        sum = 0;
        for(int i = 0; i < times.size(); i++) {
            sum += now_time / times[i];
        }
        now_time++;
        
    }
    answer = now_time-1;
    return answer;
}
