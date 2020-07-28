class Solution {
public:
    bool divisorGame(int N) {
        vector<bool> dynamic(N+1);
        dynamic[1]=false;
        for(int a=2;a<=N;a++){
            dynamic[a]=false;
            for(int b=a-1;b>=1;b--){
                if(a%b==0 && dynamic[a-b]==false){
                     dynamic[a]=true;
                }
            }
        }