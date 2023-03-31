/*ABSTRACT BASE CLASS--> a class which can't use for making object and have atleast one pure virtual ft
PURE VIRTUAL FT--> when we made pure virtual ft that means we've to make the derived class that is in virtual ft we can use the display ft
of base class when there is no display ft in the derived class but in pure virtual ft we've no make the display ft of derived class
in that case ft of base class will not work*/

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
    virtual void display()=0;//Do nothing ft --> PURE VIRTUAL ft
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