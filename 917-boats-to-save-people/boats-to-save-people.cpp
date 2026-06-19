class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
    //    int j=0;
        int n=people.size();
        int c=0;
    //     while(j<=n-1){
    //         if(j+1==n){
    //             c++;
    //             j++;
    //         }
    //         else if(people[j]+people[j+1]<=limit){
    //             c++;
    //             j+=2;
    //         }else{
    //             c++;
    //             j++;
    //         }
    //     }
    //     return c;
    int i=0;
    int j=n-1;
    while(i<=j){
        if(people[i]+people[j]<=limit){
            c++;
            i++;
            j--;
        }else if (people[j]<=limit){
            c++;
            j--;
        }
    }
    return c;

    }
};