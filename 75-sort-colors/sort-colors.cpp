class Solution {
public:
    void sortColors(vector<int>& a) {
        int l=0,h=a.size()-1,m=0;
        while(m<=h){
            if(a[m]==0){
                swap(a[m],a[l]);
                m++;
                l++;
            }
            else if(a[m]==1){
                m++;
            }
            else{
              swap(a[m],a[h]);  
              h--;
            }
        }
        
    }
};