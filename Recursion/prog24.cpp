    // Print the string skipping the character a
    #include<iostream>
    #include<string>
    using namespace std;
    string skip(string str,string &s,int size,int idx){
        if(idx==size) return s;
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
Q.   Why do we pass the s string as pass by reference here?
ANS. for avoiding to creat multple strings.