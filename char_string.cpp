#include<iostream>
// #include<string>
using namespace std;
#include<vector>
#include <climits>
#include <string>

// int cha(char chh[]){
//     int i =0;
//     int count =0;
//     // for(int i =0;chh[i]!='\0';i++){
//     //     // cout << "yoo" << endl;
//     //     count++;
//     // }
//     while(chh[i]!='\0'){
//         count++;
//         i++;
//     }
//     return count;
// }

// int main(){
    // char ch[20];
    // cout<<"Enter your name"<<" ";
    // cin>>ch;
    // cout<<"Your name is "<<ch<<endl;;
    // cout<<"length "<<cha(ch)<<endl;
//     return 0;

    

//     //*********************************  BASIC of Diamic array **********************************//
//     // int arr[2];
//     // arr[0]=1;
//     // arr[1]=2; 
//     // arr[2]=3;
//     // arr[23] = 34;
//     // // int * p = arr;
//     // cout << *(arr+23) << endl;

// }    





//*********************************  reverseing an array ************************************
int rev(char chh[],int size){
    int s =0;
    int e =size-1;
    
    while(s<e){
        swap(chh[s],chh[e]);
        s++;
        e--;
    }
} 
int cha(char chhh[]){
    int i =0;
    int count =0;
    while(chhh[i]!='\0'){
        count++;
        i++;
    }
    return count;
}
int main(){
    
    char ch [100];
    cin>> ch;
    cout<<"Your entered string is "<<ch<<endl;
    int aa = cha(ch);

    rev(ch,aa);
    cout<<"your reverse string is "<<ch<<endl;
    return 0;
}





//************************************* Checking palindrome of a number ****************************
int palin(char ch[],int size){
    int s=0;
    int e =size-1;
    while(s<=e){
        if(ch[s]!=ch[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}
int chaar(char cho[]){
    int i =0;
    int count=0;
    while(cho[i]!='\0'){
        count++;
        i++;
    }
    return count;
}


int main(){
    char ch[100];
    cin>>ch;

    int aa = chaar(ch);
    cout<<"the length of a string "<<aa<<endl;
    // int aa = 5;
    // palin(ch,aa);
    cout<<"palindrome or not :"<<palin(ch,aa)<<endl;
}




// ***************if we need to convert upper case to lower case excluding special cha nd palin *****************

bool check(char c){
    string s ="!@#$%^&*()";
    for(int i =0;i<10;i++){
        if(c==s[i]){
            return true;
        }
    }
    return false;
}

char tolowercas(char str){
    if(str >='a' && str<='z' || str>='0' && str<='9'){
        return str;
    }
    else{
        char tem = str - 'A'+'a';
        return tem;
    }
}
bool palin(char ch[],int size){
    int s=0;
    int e =size-1;
    while(s<=e){
        while(check(ch[s])){
        // cout << "hello" << endl;
        s++;
        }
        while(check(ch[e])){
            e--;
        }
        if(tolowercas(ch[s])!=tolowercas(ch[e])){
            return 0;
        }
        else {
            s++;
            e--;
        }
    }
    return 1;
}
int len(char cho[]){
    int i =0;
    int count =0;
    while(cho[i]!='\0'){
        count++;
        i++;
    }
    return count ;
}

int main(){
    
    char ch[100];
    cin>>ch;
    cout<<"Entered string is "<<ch<<endl;
    int a = len(ch);
    cout<<a<<endl;
    cout<<"it is palindrome or not "<<palin(ch,a);
    // char cc = '!';
    // cout << check(cc);
    // cout << a ;

}



int main(){
    int a;
    cin>>a;
    char ch [10];
    for(int i =0;i<a;i++){
        cin>>ch[i];
    }
    cout<<ch<<" "<<endl;






// **************************  checking an array **************************************//

bool check(char ch){
    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z' || ch>='0' && ch>='9'){
        return 1;
    }
    return 0;
}
char tolower (char str){
        if(str >='a' && str<='z' || str>='0' && str<='9'){
        return str;
    }
    else{
        char tem = str - 'A'+'a';
        return tem;
    }
}
bool palin(string ss ){
    int s =0;
    int e = ss.length()-1;
    while(s<=e){
        if(ss[s]!=ss[e]){
            return false;
        }
        else{
            s++;
            e--;
        }
    }
    return true;
}

bool valid(string s){
    string temp = "";
    for(int i =0;i<s.length();i++){
        if(check(s[i])){
            temp.push_back(s[i]);
        }
        else{
            return false;
        }
    }
    // cout << temp << endl;
    for(int i=0;i<s.length();i++){
        temp[i]= tolower(temp[i]);
    }
    if(palin(temp)){
        return true;
    }return false;

}


int main(){
    string str = {"{oo}"};
    cout<<str.length() << endl;
    // cout<<str[4];
    cout << valid(str);
    // cout << palin("lovevol") << endl;
    
}



//***************************************  reversing the word in string  ********************

void check(string &s){
    int count = 0;
    for(int i =0;i<=s.length();i++){
        if(s[i] != ' ' && s[i]!='\0'){
            count++;
        }
        if(s[i]==' ' || s[i]=='\0'){
            int st =i-count;
            int end = i-1;
            while(st<=end){
                swap(s[st],s[end]);
                st++;
                end--;
            }
            count=0;
        }
        // count=0;
    }
}

int main(){
    string str = "Hey My Name is Love";
    // cout<<str.length()<<endl;
    check(str);
    cout<<str<<endl;
}





// **********************************   bubble sort ******************************//    
int bubble(vector <int> &vec){
    int size =vec.size();
    for(int i =1;i<size;i++){
        // bool swapped = false;
        for(int j =0;j<size-i;j++){
            if(vec[j]>vec[j+1]){
                swap(vec[j],vec[j+1]);
                // swapped = true;
            }
        }
        // if(swapped == false){
        //     break;
        // }
    } 
}
int main(){
    int a ;
    cin>>a;
    int b;
    vector <int> vec ;
    for(int i =0;i<a;i++){
        cin>>b;
        vec.push_back(b);
    }
    bubble(vec);
    cout<<endl;
    for(int i : vec){
        cout<<i<<" ";
    }
}






//***********************************  Counting the letters hoe much times it comes in array ********************
int letter(string str){    
    int s = str.length();
    int arr[100];
    for(int i=0;i<s;i++){
        int count =0;
        char element = str[i];
        for(int j =0;j<s;j++){
            if(str[i]==str[j]){
                count++;
            }
        }
        int c = count;
        // cout<<count<<" "<<endl;
        arr[i]=c;
        // cout<<element<<" comes "<<count<<" times in array "<<endl;
    }
    int max=INT_MIN;
    for(int i =0;i<s;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=0;i<s;i++){
        if(max==arr[i]){
            cout<<str[i]<<" "<<max;
            cout<<endl;
            break;
        }
    }
}

int main(){
    string st = "BENNETT";
    // cout<<st.length();
    int a = letter(st);
    cout<<a;
    // cout<<st.length()<<endl;
    
}





//*****************************  get max occured character in string ***************************
int count(char letter ,string str){
        int coount = 0;
    for(int i =0;i<str.size();i++){
        if(letter==str[i]){
            coount++;
        }
    }
    return coount;
}
int main(){
    string s;
    cin>> s;
    int size = s.size();
    char arr[100];
    for(int i =0;i<size;i++){
        int c =count(s[i],s);
        arr[i]=c;
    }
    int max = INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    for(int i=0;i<size;i++){
        if(max==arr[i]){
            cout<<s[i]<<"this comes "<<max<<" Times";
            break;
        }
    }
}


string str = "prathammm";
    int arr[26] = {0};
    for(int i = 0 ; i < str.length() ; i++){
        arr[str[i]-97]++;
    }
    int maxx = 0;
    for(int i = 0 ; i < 26 ;i++){
        maxx = max(maxx , arr[i]);
        // cout << arr[i] << endl;
    }
    for(int i = 0 ; i< 26 ; i++){
        if(maxx == arr[i]){
            char c = 97+i;
            cout << c << endl;
            break;
        }
    }






// *********************************** (O)N apporach in privious question ****************************//
int main(){
    string atr ="looveee";
    int arr[26]={0};
    for(int i =0;i<atr.size();i++){
        arr[atr[i]-97]++;
    }
    int max = INT_MIN;
    for(int i=0;i<26;i++){
        if(arr[i]>max){
            max= arr[i];
        }
    }
    for(int i =0;i<26;i++){
        if(max==arr[i]){
            char ch = 97+i;
            cout<<ch<<endl;
        }
    }
}






// ******************************  Replacing the spaces with '@40'  *********************************
string check(string &str){
    // string temp= "";
    int n = str.size();
    for(int i =0;i<n;i++){
        if(str[i]==' '){
            // temp.push_back('@');
            // temp.push_back('4');
            // temp.push_back('0');
            str[i] = '@';
            str.insert(i + 1, "40");
            n += 2; // Increase the size of the string due to insertion of two characters
            i += 2;
        }
        // else{
        //     // temp.push_back(str[i]);
        //     str.push_back(str[i]);
        // }
    }
    return str;
    cout<<endl;
}

int main(){
    string str = "hey my name is love";
    string s = check(str);
    cout<<s;
}




//************************************* finding  letters in string *****************************//
string occ(string str,string part){
    while(str.length()!=0 && str.find(part)<str.size()){
        str.erase(str.find(part),part.length());
        cout<<str<<endl;
    }
    cout<<str;
    // return str;
}

int main(){
    string strr ="daabcbaabcbc";
    string parrt = "abc";

occ(strr,parrt);
cout<<occ;


    
}




//************************************ Removing the duplicacy of the number *************************
string check(string str){
    int i =0;
    while(i<str.length()){    
        if(str[i]==str[i+1]){
            str.erase(i,2);
            // cout<<str;
            if(i > 0){ 
                i--;
            }
        }
        else{
                i++;
            }
    }
    // return str;
    cout<<str;
}

int main(){
    string str = "azxxzy";
    check(str);
    cout<<check;
}






//************************************  ROMAN TO INTEGER ********************************************
int rti(string s){
    int result =0;
    for(int i =0;i<s.length();i++){
        // cout<<"hello";
        if(s[i]=='I'){
            // cout<<"hello";
            if(s[i+1]=='V' || s[i+1]=='X'){
                result -=1;
            }
            else{
                result += 1;
            }
        }
        else if(s[i]=='V'){
            result+=5;
        }
        else if(s[i]=='X'){
            cout<<"hello";
            if(s[i+1]=='L' || s[i+1]=='C'){
                result -=10;
            }
            else{
                result +=10;
            }
        }
        else if(s[i]=='L'){
            result +=50;
        }
        else if(s[i]=='C'){
            if(s[i+1]=='D' || s[i+1]=='M'){
                result -=100;
            }
            else{
                result +=100;
            }
        }
        else if (s[i]=='D'){
            result +=500;
        }
        else if (s[i]=='M'){
            result +=1000;
        }
    }
    return result;
}



int main(){
    string s ="XL";
    // cout<<"Enter the size of string"<<endl;
    // int size;
    // cin>>size;
    // for(int i =0;i<size;i++){
    //     cin>>s[i];
    // }
    // cout<<"Entered string is"<<endl;
    // for(int i = 0;i<size;i++){
    //     cout<<s[i];
    // }
    cout<<endl;
    int result = rti(s);
    cout<<"Integer representation of " << s << " is " << result <<endl;

    return 0;
}



// ----------------- Finding the longest possible common string --------------


 int main(){
    vector<string>  strs  = {"flower","flow","flieght"};; 
    // strs = {"flower","flow","flight"};
    string word = strs[1];
    // char wor = word[5];
            sort(strs.begin(),strs.end());

//   cout<<wor<<endl;
    cout<<word<<endl;
cout<<strs.size()<<endl;
cout<<strs[2]<<endl;
 }

