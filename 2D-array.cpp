#include<iostream>
#include<vector>
using namespace std;


// *********************************   PRINTING A 2-D ARRRAY WITHOUT USING 2D-ARRAY *************************
int main(){
    int arr[100];
    for(int i =0;i<9;i++){
        cin>>arr[i];
    }
    int c =3;
    for(int j =0;j<3;j++){
        for(int k=0;k<3;k++){
            int cc = c*j+k;
            cout<<arr[cc]<<" ";
        }
        cout<<endl;
    }
}   


// **********************************  forming 2d-array ********************************** 
int main(){
    int arr [4][3];  // formation of 2d-array
    for(int i =0;i<3;i++){
        for(int j =0;j<4;j++){
            cin>>arr[j][i];
        }
    }
    for(int j =0;j<4;j++){                          // mtlb jiss side 4 ussi k acc. array set hojayega 
        for(int i =0;i<3;i++){                        //     ki kha pe value rkhni h
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    for(int i =0;i<4;i++){
        for(int j =0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}




// ***********************************  finding target value in 2d-array ****************************
bool target(int arr[][4],int n,int m,int key){
    for(int i=0;i<n;i++){
        for(int j =0;j<m;j++){
            if(arr[i][j]==key){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int arr[3][4];
    for(int i =0;i<3;i++){
        for(int j =0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    //printt
    for(int i=0;i<4;i++){
        for(int j =0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int tar;
    cin>>tar;
    if(target(arr,3,4,tar)){
        cout<<"yes "<< tar<< " is present ";
    }
    else{
        cout<<"not present";
    }
}




// *********************************************  finding sum of the rows **********************************
vector<int> vec;
void find(int arr[][3],int n,int m){
    for(int i =0;i<m;i++){
        int sum =0;
        for(int j =0;j<n;j++){
            sum = sum + arr[i][j];
        }
        vec.push_back(sum);
        // cout<<sum;
        cout<<endl;
    }
}
void prr(int arr[][3],int n,int m){
for(int i=0;i<3;i++){
        for(int j =0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"->"<<vec[i];
        cout<<endl;
    }
}

int main(){
    int arr[3][3];
    for(int i =0;i<3;i++){
        for(int j =0;j<3;j++){
            cin>>arr[i][j];
        }
    }
find(arr,3,3);
prr(arr,3,3);
}





// ********************** Finding the largest row sum with it's number *****************************

int val(int arr[][3],int n, int m){
    int maxxx = INT16_MIN;
    int num = -1;
    for(int i =0;i<m;i++){
        int sum =0;
        for(int j =0;j<n;j++){
            sum = sum + arr[i][j];
        }
        if(sum>maxxx){
            maxxx=sum;
            num =i;
        }
    }    
    cout<<" the maximum sum is "<<maxxx<<endl;
    return num;
}




int main(){
    int arr[3][3];
    for(int i =0;i<3;i++){
        for(int j =0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    int ans = val(arr,3,3);
    cout<<"the max row by sum is "<<ans<<endl;
}




// ****************************************  printing the wave form pattern *******************************//
void anns(int arr[][3],int n,int m){
    vector<int> vec;
    for(int i=0;i<3;i++){
        if(i%2!=0){
            for(int j =2;j>=0;j--){
                // cout<<arr[i][j]<<" ";
                vec.push_back(arr[j][i]);
            }
        }
        else{
            for(int j =0;j<=2;j++){
                // cout<<arr[i][j]<<" ";
                vec.push_back(arr[j][i]);
            }
        }
    }
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    // return vec;
}
int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j =0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    // vector<int> vec;
    anns(arr,3,3);
}






//********************************* spiral printing of no. in matrix **********************************
vector <int>  prr(vector<vector<int>> vec, int n, int m){
    vector<int> ans;
    int r =n;
    int c =m;
    int startr=0;
    int startc=0;
    int endr=r-1;
    int endc=c-1;

    int count = 0;
    int total = n*m;

    while(count<total){
        // stc to enc
        for(int inx=startc ;count<total && inx<=endc;inx++){
            ans.push_back(vec[startc][inx]);
            count++;
        }
        startr++;
        // str to enr
        for(int inx=startr ;count<total && inx<=endr;inx++){
            ans.push_back(vec[inx][endc]);
            count++;
        }
        endc--;
        // enc to stc
        for(int inx=endc ;count<total && inx>=startc;inx--){
            ans.push_back(vec[endr][inx]);
            count++;
        }
        endr--;
        // enr to stc
        for(int inx=endr ;count<total && inx>=startr;inx--){
            ans.push_back(vec[inx][startc]);
            count++;
        }
        startc++;
    }
    return ans;
}

int main(){
    // int arr[3][3];
    vector<vector<int>> vec(3, vector<int> (3));
    for(int i=0;i<vec.size();i++){
        for(int j =0;j<vec.size();j++){
            // cin>>arr[i][j];
            cin>>vec[i][j];
        }
    }
    vector <int> a = prr(vec,3,3);
    for(int i : a){
        cout<<i<<" ";
    }
}




// ********************************* Rotating the matrix by 90 deg.**********************************
void veec(vector<vector<int>>& vec ){
    // vector <vector<int>> ans;
    int n = vec.size();
    for(int i =0;i<n;i++){
        for(int j =i;j<n;j++){
            swap(vec[i][j],vec[j][i]);
        }
    }
    for(int i =0;i<n/2;i++){
        for(int j =0;j<n;j++){
            swap(vec[j][i],vec[j][n-i-1]);
        }
    }
}
int main(){
    vector<vector<int>> vec(3 , vector<int>(3));
    for(int i =0;i<vec.size();i++){
        for(int j =0;j<vec.size();j++){
            cin>>vec[i][j];
        }
    }
    cout<< "Original Array : "<<endl;
    for (const auto& row : vec) {
        for (int elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }
    veec(vec);
    cout<< "Rotated array : "<<endl;
    for (const auto& rr : vec) {
        for (int elemm : rr) {
            cout << elemm << " ";
        }
        cout << endl;
    }
}








// *************************   Findind the max row sum ********************

bool target(int arr[][3],int n,int m,int tarr){
    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==tarr){
                // cout<<"yes the value is present"<<endl;
                return 1;
            }

        }
    }
    return 0;
}


int main(){
    int arr[3][3];
    for(int i =0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    
    int maxx =0;
    int sum =0;
    for(int i =0;i<3;i++){
        // int sum =0;
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";    
            sum = sum + arr[i][j];
        }    
        cout<<" = "<<sum<<endl;;
        if(maxx<sum){
            // cout<<" "<<sum<<endl;
            maxx = sum;
            // cout<<maxx<<endl;
        }
        sum =0;
    }
    cout<<maxx<<endl;
    int tar;
    cout<<"Enter the target value to find"<<endl;
    cin>>tar;
    if(target(arr,3,3,tar)){
        cout<<"yes present"<<endl;
    }
    else {
        cout<<"not present"<<endl;
    }
}





// ***************** PRINTING THE WA=VE FORM IN MATRIX ****************

vector<int> fun (int col ,int row ,vector<vector<int>> arr){
    vector <int> vec;
    for(int i =0;i<col;i++){

        if (i&1){
            for(int rr = row-1;rr>=0;rr--){
                vec.push_back(arr[rr][i]);
            }
        }
        else{
            for(int rr = 0;rr<row;rr++){
                vec.push_back(arr[rr][i]);
            }
        }
    }
    return vec;
}


int main(){
    int row ;
    cin>>row;
    int col ;
    cin>>col;
    int arr [row][col];
    int val;
    for(int i =0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    for (int i = 0; i < row; i++)  
    { 
        for (int j = 0; j < col; j++) 
        { 
            cout << arr[i][j] << " "; 
        }     
        cout << endl; 
    }
    vector<int> v;
    for(int i =0;i<col;i++){

        if (i&1){
            for(int rr = row-1;rr>=0;rr--){
                v.push_back(arr[rr][i]);
            }
        }
        else{
            for(int rr = 0;rr<row;rr++){
                v.push_back(arr[rr][i]);
            }
        }
    }
    
    // ***** printing that vector in a line
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << " ";
    }


    // *** printing that vector in 2d-form ******
    // for (int i = 0; i < row; i++) {
    //     for (int j = 0; j < col; j++) {
    //         std::cout << v[i * col + j] << " ";
    //     }
    //     std::cout << std::endl;
    // }

    return 0;
}





// *************************  SPRIAL METHOD printing **********************
int main(){
    int row ;
    cin>>row;
    int col ;
    cin>>col;
    int arr [row][col];
    for(int i =0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    for (int i = 0; i < row; i++)  
    { 
        for (int j = 0; j < col; j++) 
        { 
            cout << arr[i][j] << " "; 
        }     
        cout << endl; 
    }

    vector<int> vec;
    int count =0 ;
    int mat = row*col;

    int st_row= 0;
    int st_col=0;
    int end_row=row-1;
    int end_col=col-1;

    while(count<mat){
        // print row 
        for(int indx = st_col ; count<mat && indx <=end_col; indx++){
            vec.push_back(arr[st_row][indx]);
            count++;
        }
        st_row++;
        for(int indx = st_row; count<mat && indx<=end_row ; indx++){
            vec.push_back(arr[indx][end_col]);
            count++;
        }
        end_col--;
        for(int indx= end_col; count<mat && indx>=st_col; indx--){
            vec.push_back(arr[end_row][indx]);
            count++;
        }
        end_row--;
        for(int indx = end_row; count<mat && indx>=st_row; indx--){
            vec.push_back(arr[indx][st_col]);
            count++;
        }
        st_col++;
    }
    for (int i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << " ";
    }
}





// **************************  binary search in 2d array *******************


bool search(int arr[][4] ,int target ,int rr,int cc){
    int r = rr;
    int c =cc;

    int start = 0;
    int end = r*c-1;

    int mid = start + (end-start)/2;

    while (start<=end){
        int ele = arr[mid/c][mid%c];

        if(ele = target){
            return 1;
        }
        if (ele < target){
            start = mid+1;
        }
        else {
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return 0;
}

int main(){
    int tar;
    cin>>tar;
    int row ;
    cin>>row;
    int col ;
    cin>>col;
    int arr [row][4];
    for(int i =0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    for (int i = 0; i < row; i++)  
    { 
        for (int j = 0; j < col; j++) 
        { 
            cout << arr[i][j] << " "; 
        }     
        cout << endl; 
    }

    bool found = search(arr, tar, row, col);

    if (found) {
        cout << "Element found!" << endl;
    } else {
        cout << "Element not found!" << endl;
    }

    return 0;
}




 //***************************** previous Solution in vector format ****************/
bool binary(vector<vector<int>> vec , int tar){
    int r = vec.size();
    int c = vec[0].size();

    int start = 0;
    int end = r*c-1;
    int mid = (start+end)/2;

    while(start <=end){
        int element = vec[mid/c][mid%c];
        if(element == tar){
            return true;
        }
        if (element < tar){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = (start+end)/2;
    }
    return false;

}                                          
int main(){
    int row ;
    cin>>row;
    int col;
    cin>>col;
    vector<vector<int>> vec(row , vector<int>(col));
    int ele;

    for(int i =0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>ele;
            vec[i][j]=ele;
        }
    }

    // print entered element
    for(int i =0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<vec[i][j]<< " ";
        }
        cout<<endl;
    }
    int target;
    cout<<"Enter the target element";
    cin>>target;

    if(binary(vec,target)){
        cout<<"Element found !!"<<endl;
    }
    else{
        cout<<"element not found!!"<<endl;
    }
    return 0;
}








//***************** rotate the matrix 90 degree clockwise  **********


// #define n 3
void rotation90(int arr[n][n]){
    cout<<"rotated array will be"<<endl;
    for(int j=0;j<n;j++){
        for(int i=n-1;i>=0;i--){
            
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main(){
    int row;
    cin>>row;
    int col;
    cin>>col;
    int arr[n][n];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    //printing the same array
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    rotation90(arr);
    return 0;
}







//************************ search element in 2d matrix 

// IMPO. POINT 
/* => NO. SHULD WE IN INC. ORDER FROM LEFT TO WRITE 
   => NO. SHOULD WE IN INC. ORDER FROM TOP TO BOTTOM */
// #define n 3

bool fun(int arr[n][n],int target){

    int row =3;
    int col =3;

    int rowst = 0;
    int colst = n-1;

    while(rowst< row && colst >=0){
        int element = arr[rowst][colst];
        if(element == target){
            return true;
        }
        if(element < target){
            rowst++;
        }
        else{
            colst--;
        }

    }
    return false;
}
int main(){
    int row;
    cin>>row;
    int col;
    cin>>col;
    int arr[n][n];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    //printing the same array
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int target;
    cout<<"Enter the target element";
    cin>>target;

    if(fun(arr,target)){
        cout<<"Element found !!"<<endl;
    }
    else{
        cout<<"element not found!!"<<endl;
    }
    return 0;
}    