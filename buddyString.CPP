class Solution {
public:
    bool buddyStrings(string a, string b) {
         int arr[26]={0};
        int ans[2],k=0;
        if(a.length()!=b.length())
            return false;
        
        for(int i=0;i<a.length();++i){
            arr[a[i]-'a']++;
            if(a[i]!=b[i] && k<2){
                ans[k]=i;
                k++;
            }
            else if(k==2 && a[i] !=b[i])
                return false;
        } 
        
        if(k==0){
            for(int i=0;i<=25;i++){
                if(arr[i]>=2)
                    return true;
            }
            return false;
        }
        
        else if(a[ans[0  ]]==b[ans[1]] && a[ans[1]]==b[ans[0]])
            return true;
        
        else
            return false;
         }
};
