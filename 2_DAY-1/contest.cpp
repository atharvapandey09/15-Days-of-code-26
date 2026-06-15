

//Q1
bool canWin(int a, int b, int w) {
    if((a+b)>=w) return true;
    else return false;
    
}

// Q2
bool canReduce(int N, vector<int>& arr) {
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size()-1;i++){
        if(arr[i+1]== arr[i] || arr[i+1]==(arr[i]+1)){
            continue;
        }
        else{
            return  false;
        }
    }
    return true;
}

// Q3
string stoneAbbys(int N){
    if(N==0) return "Bob";
    else return "Alice";
}
