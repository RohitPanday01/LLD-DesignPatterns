#include<iostream>
#include<string>
using namespace std;


class Ibutton{
    public:
    virtual void press() = 0;

};

class MacButton:public Ibutton{
    public:
     void press(){
        cout<<"Mac Button Pressed"<<endl;
     }

};

class WinButton :public Ibutton{
    public:
     void press(){
        cout<<"Win Button pressed"<<endl;
     }

};

class ITextbox{
    public:
    virtual void textbox() =0;

};

class MacTextbox :public ITextbox{
    public:
    void textbox(){
        cout<<"MacTextbox";
    }

};
class WinTextbox :public ITextbox{
    public:
    void textbox(){
        cout<<"WinTextbox";
    }

};

class Ifactory {
    public:
     virtual Ibutton* createButton() = 0;
     virtual ITextbox* createTextBox() = 0;

};

class Macfactory:public Ifactory{
    public:
     Ibutton* createButton(){
        return new MacButton();
     }

     ITextbox* createTextBox(){
        return new MacTextbox;
     }

};
class Winfactory:public Ifactory{
    public:
     Ibutton* createButton(){
        return new WinButton();
     }

     ITextbox* createTextBox(){
        return new WinTextbox;
     }

};


class GuiAbstractfactory{

    public:
        static Ifactory* createfactory(string osType){
            if(osType == "windows"){
                return new Winfactory();
            }else if(osType == "Mac"){
                return new Macfactory();
            }

        }
} ;

int main(){
    cout<<"Enter Your OS Type "<<endl;
    string osType;
    cin>>osType;

   Ifactory* fact = GuiAbstractfactory::createfactory(osType);

   Ibutton* button = fact->createButton();
   ITextbox* text = fact->createTextBox();

  return 0;
}