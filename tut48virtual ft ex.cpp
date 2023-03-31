#include<iostream>
using namespace std;

class CWH{
    protected:
    string title;
    float rating;
    public:
    CWH (string s, float r){
        title = s;
        rating = r;
    }
    virtual void display(){}//if we did not use virtual ft here so the ft of derived classes will not be able to execute only this empty
    //ft will get execute
};
class CWHVideo : public CWH{
    float videoLength;
    public:
    CWHVideo(string s, float r, float vL): CWH(s, r){
        videoLength = vL;
    }
    void display(){
        cout<<"this is an amazing video with title "<<title<<endl;
        cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
        cout<<"Length of this video is "<<videoLength<<" minutes"<<endl;
    }
};
class CWHText : public CWH{
    int words;
    public:
    CWHText(string s, float r, int wc): CWH(s, r){
        words = wc;
    }
    void display(){
        cout<<"this is an amazing text tutorial with title "<<title<<endl;
        cout<<"Ratings of this tutorial is : "<<rating<<" out of 5 stars"<<endl;
        cout<<"No of words in this text tutorial is "<<words<<" words"<<endl;
    }
};
int main(){
    string title;
    float rating, vLen;
    int words;

    //for CWH Video
    title = "Django tutorial";
    vLen = 4.56;
    rating = 4.89;
    CWHVideo djVideo(title, rating, vLen);

    //for CWH tutorial
    title = "Django tutorial";
    words = 456;
    rating = 4.99;
    CWHVideo djText(title, rating, words);

    CWH* tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();
    return 0;
}

/*Rules for virtual functions
1. They cannot be static
2. They are accessed by object pointers
3. Virtual functions can be a friend of another class
4. A virtual function in base class might not be used
5. If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class as in if there is no display
ft of derived class than in that case display ft of the base class will get executed
*/