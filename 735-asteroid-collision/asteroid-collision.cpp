class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> stack;

        for(int asteroid : asteroids){
            bool alive = true;
            while(!stack.empty() && alive && stack.top() > 0 && asteroid < 0){
                if(stack.top() < abs(asteroid)){
                    stack.pop();
                }else if(stack.top() == abs(asteroid)){
                    stack.pop();
                    alive = false;
                }else{
                    alive = false;
                }
            }

            if(alive){
                stack.push(asteroid);
            }
            


            
        }

        vector<int> ans;
        while(!stack.empty()){
            ans.push_back(stack.top());
            stack.pop();
        }
         reverse(ans.begin(), ans.end());
        return ans;
    }
};