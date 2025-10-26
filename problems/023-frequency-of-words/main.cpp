// You are building a word frequency counter. Given a paragraph of text, 
// you need to count how many times each word appears.
// Note: In display WordCount function write words in ascending order alphabetically.
#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    void countWords(map<string, int>& wordCount, const string& paragraph) {
       vector <string> vec_words;
       string singleword;
       stringstream ss(paragraph);
       while(ss >> singleword)
      {  // cout<<singleword;
           vec_words.push_back(singleword);
       }
       for(auto w:vec_words)
     {
       wordCount[w]++;
     }
     
      
      }
    
    void displayWordCount(const map<string, int>& wordCount) {
        
          for ( auto word : wordCount)
      {
           cout<<word.first<<"-"<<word.second<<"\n";
      }
    }
};

int main (){
    solution sol;
    string paragraph = "this is a test this is only a test";
    map<string, int> wordCount;
    sol.countWords(wordCount, paragraph);
    cout << "Word Frequencies:\n";
    sol.displayWordCount(wordCount);
    return 0;
}