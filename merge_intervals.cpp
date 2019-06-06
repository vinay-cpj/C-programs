void fill(vector<int> &v,int start,int end)
    {
    for(int i=start;i<=end;i++)
    {
        v[i]=1;
    }
    
    }
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        if(intervals.size()==0) return {};
        vector<vector<int>> res;
       
        int m=0,p=INT_MAX;
        
        for(int i=0;i<intervals.size();i++)
        {
         m=max(m,intervals[i][0]);
         m=max(m,intervals[i][1]);  
         p=min(p,intervals[i][0]);
         p=min(p,intervals[i][1]);   
        }
        vector<int> v(m+1,0);
        vector<int> buf;
        
        cout<<p;
        
        for(int i=0;i<intervals.size();i++)
        {
         
         fill(v,intervals[i][0],intervals[i][1]);   
        }
        int start=0,end=0;
        //res.push_back(vector<int>());
        int count=0;
        //cout<<"--";
        buf.push_back(p);
        
        
        for(int i=p;i<m-1;i++)
        {
            if((v[i]==1)&&v[i+1]==0)   buf.push_back(i);
            if((v[i]==0)&&v[i+1]==1)   buf.push_back(i+1);
            
        }
        buf.push_back(m);
        //for(int i=buf.begin();i<=buf.end();i++)
        //cout<<buf[i];
        start=0;
        for(int i=0;i<buf.size()/2;i++)
        {
         res.push_back(vector<int>());
         res[i].push_back(buf[start++]);
         res[i].push_back(buf[start++]);      
        }
        
       return res;
        
    }
};
