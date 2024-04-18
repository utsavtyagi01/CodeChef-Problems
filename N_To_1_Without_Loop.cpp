void func(int x, vector<int> &result){
    if(x==1){
        result.push_back(1);
        return;
    }
    result.push_back(x);
    func(x-1,result);
}
vector<int> printNos(int x) {
    // Write Your Code Here
    vector<int> result;
    func(x,result);
    return result;
}
