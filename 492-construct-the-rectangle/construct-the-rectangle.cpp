class Solution {
public:
    vector<int> constructRectangle(int area) {
         int w= (int)sqrt(area);  
    while (area % w!= 0) { 
        w--;
    }
    int len = area / w;
    return {len, w};   
        
    }
};