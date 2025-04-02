#include<iostream>
using namespace std; 



//  **************************************** binary element *****************************************//
int binary(int aee[],int size,int key){
    int s =0;
    int e = size-1;
    int mid = (s+e)/2;
    while(s<=e){
        if(aee[mid] == key){
            return mid;
        }
        if(aee[mid]>key){
            e=mid-1;
        }
        else {
            s=mid+1;
        }
        mid = (s+e)/2;
    }
    return -1;
}

int main(){
    int arr[5]= {1,5,7,23,32};
    // int k = 23;
    int ii = binary(arr,5,15);
    cout<< "index is "<<ii<<endl;
}








// ******************************************** occurance ladt term in array **************************************//
int last(int arr[],int size,int k){
    int s = 0;
    int e =size-1;
    // int mid = s +(e-s)/2;
    int mid = (s+e)/2;
    int ans = -1;
    while(s<=e){
        if (arr[mid]==k){
            ans = mid;
            // cout<<mid<<endl;
            e=mid-1;
        }
        else if(arr[mid]>k){
            e=mid-1;
        }
        else if(arr[mid]<k){
            s=mid+1;
        }
        mid = (s+e)/2;
    }
    return ans;
}
int main(){
    // int arr[7]={1,2,4,4,4,6,8};
    int arr[5]={1,2,2,2,4};
    // for(int i= 0;i<7;i++){
    //     cin>>arr[i];
    // }
    // int key;
    // cin>>key;
    int i = last(arr,5,2);
    cout<< i<<endl;
}





//***************************************  mountain peak concept *******************************//
int search(int arr[],int size){
    int s =0;
    int e = size -1;
    int mid = (s+e)/2;
    // int ans = -1;
    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid = (s+e)/2;
    }return arr[e];
}

int main(){
    int arr[7]={1,2,5,4,3,2,1};
    int i = search(arr,7);
    cout<<i<<endl;
}








// ************************************ FINDIND PIOVT element ******************************//
int piovt(int arr[],int size){
    int s=0;
    int e=size-1;
    int mid = (s+e)/2;

    while (s<e){
        if(arr[mid]>=arr[0]){
            s= mid+1;
        }
        else{
            e=mid;
        }
        mid=(s+e)/2;
    }return s;
}

int main (){
    int arr[5]={6,8,10,3,4};
   int i= piovt(arr,5);
   cout<<i<<endl;
}











//***************************************** finding square root by b search *******************************//
int square(int k){
    int s= 0;
    int e =k;
    int mid = (s+e)/2;

    while(s<=e){
        if(mid*mid==k){
            return mid;
        }
        else if(mid*mid<k){
            s= mid +1;
        }
        else {
            e=mid-1;
        }
        mid = (s+e)/2;
    }
    return mid;
}

int main(){
    int k;
    cin>>k;
    int i = square(k);
    cout<<i<<endl;
}








// **********************************************  book allocation problem *************************************//
bool possible(int arr[],int nos,int nob,int mid){

    int student =1;
    int pagecount =0;
    for(int i =0;i<nob;i++){
        if(pagecount +arr[i]<=mid){
            pagecount= pagecount+arr[i];
        }
        else{
            student++;
            if(student>nos || mid<arr[i]){
                return false;
            }
            pagecount=arr[i];
        }
    }
    return true;
}


int binarys(int arr[],int nob,int nos ){
    int s = 0;
    int sum =0;
    for(int i=0;i<nob;i++){
        sum = sum +arr[i];
    }
    // cout<<sum<<endl;
    int e = sum;
    int mid = (s+e)/2;
    cout<<mid<<endl;
    int ans=-1;

    while(s<=e){
        if (possible(arr,nos,nob,mid)){
            ans = mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=(s+e)/2;
    }return ans;
}
int main(){
    int nos;
    cin>>nos;
    int nob;
    cin>>nob;
    int arr[100];
    for(int i =0;i<nob;i++){
        cin>>arr[i];
    }
    int i = binarys(arr,nob,nos);
    cout<<"The possible ans is "<<i<<endl;
//      int i = binarys(arr,nob,nos);
}





// *************** book allocation problem *********************
//  ************************ MAXIMUM NO OF PAGES TO MINIMUM NNO. OF STUDENT


bool ispossible (int arr[],int n,int m,int mid){
        int stuco = 1;
        int pgno = 0;
        for(int i=0;i<n;i++){
            if(pgno + arr[i] <=mid ){
                pgno=pgno+arr[i];
            }
            else{
                stuco++;
                if(stuco > m || arr[i] > mid){
                        return false;
                }
                pgno = arr[i];
            }
        }
        return true;
}

int binary(int arr[],int n,int m){
        int s =0;
        int max=0;
        for(int i=0;i<n;i++){
                max=max+arr[i];
        }
        int e = max;
        int ans =-1;
        int mid = (s+e)/2;

        while(s<=e){
        if(ispossible(arr,n,m,mid)){
                ans = mid;
                e = mid-1;
        }
        else{
                s=mid+1;
        }
        mid = (s+e)/2;
        }  
        return ans;
}

 int main(){
        int nos;
        cin>>nos;
        int nofp;
        cin>>nofp;
        int arr[nofp];
        for(int i=0;i<nofp;i++){
                cin>>arr[i];
        }
        cout<<endl;
        int final = binary(arr,nofp,nos);
        cout<< final;
 }







// ******************* Agrassive Cows Problem ***********************//

bool ispossi(int arr[],int noc,int mid,int n){

        int cow =1;
        int dis = arr[0];

        for(int i =0;i<n;i++){
                if(arr[i]-dis >=mid){
                        cow++;
                        if(cow<=noc){
                                return true;
                        }
                        // dis = arr[i];
                }
        }
        return false;
}

int cowcare(int arr[],int noc,int n){
        int start =0;
        int maxxi =-1;
        for(int i =0;i<n;i++){
                maxxi = max(maxxi,arr[i]);
        }
        int end = maxxi;
        cout<<"The value of end is"<<end<<endl;
        int ans =-1;
        int mid = (start +end)/2;
        cout<<mid<<endl;
        while(start<=end){
                if(ispossi(arr,noc,mid,n)){
                        ans = mid;
                        start = mid+1;
                }
                else{
                        end = mid-1;
                }
                mid = (start+end)/2;
        }
        return ans;
}

int main(){
        int cow;
        cin>>cow;
        int n;
        cin>>n;
        int arr[n];
        for(int i =0;i<n;i++){
                cin>>arr[i];
        }
        cout<<endl;
        int final = cowcare(arr,cow,n);
        cout<<final;
}
