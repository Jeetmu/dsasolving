string reverseWord(string str){
    
    int n = str.length()-1;
    string ans;
    
    for(int i = 0; i < n; i++){
      swap(str[i], str[n]);
      n--;
  }
  return str;
}