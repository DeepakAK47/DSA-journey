    // Print the string skipping the character e
    #include<iostream>
    #include<string>
    using namespace std;
    void skip(string str,string &s,int size,int idx){
        if(idx==size) return;
        else if(str[idx]!='e'){
            s.push_back(str[idx]);
            idx++; 
        }
        else {
            idx++;
        }
        skip(str,s,size,idx);
    }
    int main(){
        string str = "eeppeeppeepp";
        string s = "";
        int size = str.size();
        skip(str,s,size,0);
        cout<<s;
    }
// Q.   Why do we pass the s string as pass by reference here?
// ANS. for avoiding to creat multple strings.