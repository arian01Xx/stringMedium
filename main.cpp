#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool canChange(string start, string target) {
        const int n=start.size();
        for(int i=0, j=0; i<n || j<n; i++, j++){
            while(i<n && s[i]=='_') i++; //ignorar
            while(j<n && t[j]=='_') j++; //ignorar

            char c=s[i];
            if(c!=t[j]) return 0;
            if(c=='L' && i<j) return 0;
            if(c=='R' && i>j) return 0;
        }
        return 1;
    }
};

int main(){
    return 0;
}