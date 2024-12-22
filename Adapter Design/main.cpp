#include<iostream>
using namespace std;


class XmlData{
    string xmldata;
    public:
    XmlData(string pxmldata){
        xmldata = pxmldata;
    }

    string getxmldata(){
        return xmldata;
    }
};


class DataAnalyticsTool{
    string jsondata;
    public:
    DataAnalyticsTool(string pjsondata){
       jsondata = pjsondata;
    }

    void analysedata(){
        cout<<"Analysing Data"<< jsondata <<endl;
    }

};

class Adapter: public DataAnalyticsTool {
  XmlData* xmldata;
public:
    Adapter(XmlData* pxmldata) 
        : DataAnalyticsTool("") { // Still need to call base class constructor explicitly
        xmldata = pxmldata; // Initialize member variable in the constructor body
    }

    void analysedata() {
        // Simulating conversion of XML to JSON
        string convertedData = "Converted JSON from XML: " + xmldata->getxmldata();
        cout << "Converting XML data: " << xmldata->getxmldata() << endl;
        cout << "Analysing the converted data: " << convertedData << endl;
    }


};

class Client{
    public:
    void processdata(DataAnalyticsTool* tool){
        tool->analysedata();
    }
};


int main(){
    XmlData* xmldata =  new XmlData("Hi sup");
    DataAnalyticsTool* tool = new Adapter(xmldata);

    Client* client = new Client();
    client->processdata(tool);
    return 0 ;
}