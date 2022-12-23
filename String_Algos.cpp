const CHAR = 256;
int LeftMostrepeatingChar(string S)
{
  int count[CHAR] = {0};
  for(int i =0;i<S.length();i++)count[S[i]]++;
  for(int i =0;i<S.length();i++)if(count[S[i]]>1)return i;
  return -1;
  
}
bool checkAnagram(string S,string s)
{
  int count[CHAR] = {0};
  if(s.length() != S.length()) return false;
  for(int i =0;i<s.length();i++)
  {
    count[s[i]]++;
    count[S[i]]--; 
  }
  for(int i=0;i<CHAR;i++){if(count[i]!=0)return false;}
  return true;
}
bool isSub(string S,string sub,int n,int m)
 {
   if(n == 0)return false;
   if(m==0)return true;
   if(S[n] == sub[m])return isSub(S,sub,n-1,m-1);
   else return isSub(S,sub,n-1,m);
 }

bool areIsomorphic(string str1, string str2)
    {
        if(str1.length()!= str2.length())return false;
        int count1[256]={0};
        int count2[256]={0};
        for(int i =0;i<str1.length();i++)
        {
            count1[str1[i]]+=i;
            count2[str2[i]]+=i;   
        }
        for(int i=0;i<str1.length();i++)
        {
            if(count1[str1[i]] != count2[str2[i]])return false;
        }
        return true;
    }

bool areRotations(string s1,string s2)
    {
        if(s1.size()!= s2.size())return false;
        s1 = s1+s1;
        for(int i=0;i<s1.size();i++)
        {
            int j=0;
            int c=i;
            while(s1[i] == s2[j]&&j<s2.length()){i++;j++;}
            if( j==s2.size())return true;
            i=c;
        }
        return false;
    }

int strstr(string s, string x)
{
    for(int i=0;i<s.length();i++)
    {
        int c=i;int j=0;
        while(s[c]==x[j]&&c<s.length()&&j<x.length()){c++;j++;}
        if(j==x.length())return i;
    }
    return -1;
}
