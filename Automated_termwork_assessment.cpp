#include<iostream>
#define max 78
using namespace std;
class baseinfo{
public:
static int tdsaLEC,tseLEC,tmisLEC,tstatsLEC,tiotLEC;
static int tdsaASSIGN,tseASSIGN,tmisASSIGN,tstatsASSIGN,tiotASSIGN;
static int tdsaUT,tseUT,tmisUT,tstatsUT,tiotUT;
static int tdsaMOCK,tiotMOCK;
static int tdsaPM,tsePM,tmisPM,tstatsPM,tiotPM;

void getbaseinfo_dsa(){
cout<<"Enter total number of dsa lectures ";
cin>>tdsaLEC;
cout<<"Enter total number of dsa assignments ";
cin>>tdsaASSIGN;
cout<<"Enter total number of dsa unit test held ";
cin>>tdsaUT;
}
void getbaseinfo_iot(){
cout<<"Enter total number of iot lectures ";
cin>>tiotLEC;
cout<<"Enter total number of iot assignments ";
cin>>tiotASSIGN;
cout<<"Enter total number of iot unit test held ";
cin>>tiotUT;
}
void getbaseinfo_se(){
cout<<"Enter total number of SE lectures ";
cin>>tseLEC;
cout<<"Enter total number of SE assignments ";
cin>>tseASSIGN;
cout<<"Enter total number of SE unit test held ";
cin>>tseUT;
}
void getbaseinfo_mis(){
cout<<"Enter total number of MIS lectures ";
cin>>tmisLEC;
cout<<"Enter total number of MIS assignments ";
cin>>tmisASSIGN;
cout<<"Enter total number of MIS unit test held ";
cin>>tmisUT;
}
void getbaseinfo_stats(){
cout<<"Enter total number of Statistics lectures ";
cin>>tstatsLEC;
cout<<"Enter total number of Statistics assignments ";
cin>>tstatsASSIGN;
cout<<"Enter total number of Statistics unit test held ";
cin>>tstatsUT;
}
};
int baseinfo::tdsaLEC=0;
int baseinfo::tseLEC=0;
int baseinfo::tmisLEC=0;
int baseinfo::tstatsLEC=0;
int baseinfo::tiotLEC=0;

int baseinfo::tdsaASSIGN=0;
int baseinfo::tseASSIGN=0;
int baseinfo::tmisASSIGN=0;
int baseinfo::tstatsASSIGN=0;
int baseinfo::tiotASSIGN=0;

int baseinfo::tdsaUT=0;
int baseinfo::tseUT=0;
int baseinfo::tmisUT=0;
int baseinfo::tstatsUT=0;
int baseinfo::tiotUT=0;

int baseinfo::tdsaMOCK=50;
int baseinfo::tiotMOCK=50;

int baseinfo::tdsaPM=70;
int baseinfo::tsePM=70;
int baseinfo::tmisPM=70;
int baseinfo::tstatsPM=70;
int baseinfo::tiotPM=70;


class dsa:public baseinfo{
public:
int dsalecattended,dsassignment,dsaunitmarks;
float dsamock,dsaprelim,dsaTW;

float termworkcalc_dsa(float a,float b,float c,float d,float e){
    float markavg=(a+b+c+d+e)/5;
    float markconv=(markavg*25)/100;
    return markconv;
}

void getstudentinfo_dsa(){
    float sum=0;
    cout<<"Enter number of lectures attended by student (should not be greater than "<<baseinfo::tdsaLEC<<" ): ";
    cin>>dsalecattended;
    float attenper_dsa=(dsalecattended*100)/baseinfo::tdsaLEC;
    cout<<"Enter number of assignments submitted by student in time ";
    cin>>dsassignment;
    float assigperc_dsa=(dsassignment*100)/baseinfo::tdsaASSIGN;
    for(int i=1;i<=baseinfo::tdsaUT;i++){
        cout<<"Enter marks scored in unit test "<<i<<" out of 20 ";
        cin>>dsaunitmarks;
        sum=sum+dsaunitmarks;
    }
    float unitperc_dsa=(sum*100)/((baseinfo::tdsaUT)*20);
    cout<<"Enter marks scored in DSA Mock practical ";
    cin>>dsamock;
    float mockperc_dsa=(dsamock*100)/baseinfo::tdsaMOCK;
    cout<<"Enter marks scored in DSA prelims ";
    cin>>dsaprelim;
    float prelimperc_dsa=(dsaprelim*100)/baseinfo::tdsaPM;
    dsaTW=termworkcalc_dsa(attenper_dsa,assigperc_dsa,unitperc_dsa,mockperc_dsa,prelimperc_dsa);
    
}
};

class iot:public baseinfo{
public:
int iotlecattended,iotssignment,iotunitmarks;
float iotmock,iotprelim,iotTW;

float termworkcalc_iot(float a,float b,float c,float d,float e){
    float markavg=(a+b+c+d+e)/5;
    float markconv=(markavg*25)/100;
    return markconv;
}

void getstudentinfo_iot(){
    float sum=0;
    cout<<"Enter number of lectures attended by student (should not be greater than "<<baseinfo::tiotLEC<<" ): ";
    cin>>iotlecattended;
    float attenper_iot=(iotlecattended*100)/baseinfo::tiotLEC;
    cout<<"Enter number of assignments submitted by student in time ";
    cin>>iotssignment;
    float assigperc_iot=(iotssignment*100)/baseinfo::tiotASSIGN;
    for(int i=1;i<=baseinfo::tiotUT;i++){
        cout<<"Enter marks scored in unit test "<<i<<" out of 20 ";
        cin>>iotunitmarks;
        sum=sum+iotunitmarks;
    }
    float unitperc_iot=(sum*100)/((baseinfo::tiotUT)*20);
    cout<<"Enter marks scored in IoT Mock practical ";
    cin>>iotmock;
    float mockperc_iot=(iotmock*100)/baseinfo::tiotMOCK;
    cout<<"Enter marks scored in IoT prelims ";
    cin>>iotprelim;
    float prelimperc_iot=(iotprelim*100)/baseinfo::tiotPM;
    iotTW=termworkcalc_iot(attenper_iot,assigperc_iot,unitperc_iot,mockperc_iot,prelimperc_iot);
}
};

class se:public baseinfo{
public:
int selecattended,sessignment,seunitmarks;
float semock,seprelim,seTW;

float termworkcalc_se(float a,float b,float c,float d){
    float markavg=(a+b+c+d)/4;
    float markconv=(markavg*25)/100;
    return markconv;
}

void getstudentinfo_se(){
    float sum=0;
    cout<<"Enter number of lectures attended by student (should not be greater than "<<baseinfo::tseLEC<<" ): ";
    cin>>selecattended;
    float attenper_se=(selecattended*100)/baseinfo::tseLEC;
    cout<<"Enter number of assignments submitted by student in time ";
    cin>>sessignment;
    float assigperc_se=(sessignment*100)/baseinfo::tseASSIGN;
    for(int i=1;i<=baseinfo::tseUT;i++){
        cout<<"Enter marks scored in unit test "<<i<<" out of 20 ";
        cin>>seunitmarks;
        sum=sum+seunitmarks;
    }
    float unitperc_se=(sum*100)/((baseinfo::tseUT)*20);
    cout<<"Enter marks scored in se prelims ";
    cin>>seprelim;
    float prelimperc_se=(seprelim*100)/baseinfo::tsePM;
    seTW=termworkcalc_se(attenper_se,assigperc_se,unitperc_se,prelimperc_se);
}
};
class mis:public baseinfo{
public:
int mislecattended,misssignment,misunitmarks;
float mismock,misprelim,misTW;

float termworkcalc_mis(float a,float b,float c,float e){
    float markavg=(a+b+c+e)/4;
    float markconv=(markavg*25)/100;
    return markconv;
}

void getstudentinfo_mis(){
    float sum=0;
    cout<<"Enter number of lectures attended by student (should not be greater than "<<baseinfo::tmisLEC<<" ): ";
    cin>>mislecattended;
    float attenper_mis=(mislecattended*100)/baseinfo::tmisLEC;
    cout<<"Enter number of assignments submitted by student in time ";
    cin>>misssignment;
    float assigperc_mis=(misssignment*100)/baseinfo::tmisASSIGN;
    for(int i=1;i<=baseinfo::tmisUT;i++){
        cout<<"Enter marks scored in unit test "<<i<<" out of 20 ";
        cin>>misunitmarks;
        sum=sum+misunitmarks;
    }
    float unitperc_mis=(sum*100)/((baseinfo::tmisUT)*20);
    cout<<"Enter marks scored in mis prelims ";
    cin>>misprelim;
    float prelimperc_mis=(misprelim*100)/baseinfo::tmisPM;
    misTW=termworkcalc_mis(attenper_mis,assigperc_mis,unitperc_mis,prelimperc_mis);

}
};

class stats:public baseinfo{
public:
int statslecattended,statsssignment,statsunitmarks;
float statsmock,statsprelim,statsTW;

float termworkcalc_stats(float a,float b,float c,float e){
    float markavg=(a+b+c+e)/4;
    float markconv=(markavg*25)/100;
    return markconv;
}

void getstudentinfo_stats(){
    float sum=0;
    cout<<"Enter number of lectures attended by student (should not be greater than "<<baseinfo::tstatsLEC<<" ): ";
    cin>>statslecattended;
    float attenper_stats=(statslecattended*100)/baseinfo::tstatsLEC;
    cout<<"Enter number of assignments submitted by student in time ";
    cin>>statsssignment;
    float assigperc_stats=(statsssignment*100)/baseinfo::tstatsASSIGN;
    for(int i=1;i<=baseinfo::tstatsUT;i++){
        cout<<"Enter marks scored in unit test "<<i<<" out of 20 ";
        cin>>statsunitmarks;
        sum=sum+statsunitmarks;
    }
    float unitperc_stats=(sum*100)/((baseinfo::tstatsUT)*20);
    cout<<"Enter marks scored in stats prelims ";
    cin>>statsprelim;
    float prelimperc_stats=(statsprelim*100)/baseinfo::tstatsPM;
    statsTW=termworkcalc_stats(attenper_stats,assigperc_stats,unitperc_stats,prelimperc_stats);
}
};
class node{
public:
int rollnumber;
string name;
float dsa_TW;
float se_TW;
float mis_TW;
float iot_TW;
float stats_TW;
};
class hashmap:public dsa,iot,se,mis,stats{
public:
node* hashtable[max];
void initialization(){
    for(int i=1;i<=max;i++){
        hashtable[i]=NULL;
    }
}
void storestudentinfo(int rollnum,string name,dsa &d1,se &s1,mis &m1,iot &i1,stats &q1){
    node* newnode=new node;
    newnode->name=name;
    newnode->rollnumber=rollnum;
    newnode->dsa_TW=d1.dsaTW;
    newnode->se_TW=s1.seTW;
    newnode->iot_TW=i1.iotTW;
    newnode->mis_TW=m1.misTW;
    newnode->stats_TW=q1.statsTW;
    int index=rollnum;
    if(hashtable[index]==NULL){
    hashtable[index]=newnode;
    }
    else{
        cout<<"\nThis Rollnumber data already exists "<<endl;
    }
}
void display(int roll){
    cout<<"-------------------------------------------"<<endl;
    cout<<"Name of the student is "<<hashtable[roll]->name<<endl;
    cout<<"Roll number "<<hashtable[roll]->rollnumber<<endl;
    cout<<"Term work in DSA is "<<hashtable[roll]->dsa_TW<<endl;
    cout<<"Term work in SE is "<<hashtable[roll]->se_TW<<endl;
    cout<<"Term work in mis is "<<hashtable[roll]->mis_TW<<endl;
    cout<<"Term work in iot is "<<hashtable[roll]->iot_TW<<endl;
    cout<<"Term work in stats is "<<hashtable[roll]->stats_TW<<endl;
    cout<<"-------------------------------------------"<<endl;

}
void deletedata(int roll){
    if(hashtable[roll]!=NULL){
    hashtable[roll]=NULL;
    cout<<"******** RECORD DELETED ******** "<<endl;
    }
}
void displayalltadata(){
    for(int i=1;i<=max;i++){
        if(hashtable[i]!=NULL){
            cout<<"-------------------------------------------"<<endl;
            cout<<"Name of the student is "<<hashtable[i]->name<<endl;
            cout<<"Roll number "<<hashtable[i]->rollnumber<<endl;
            cout<<"Term work in DSA is "<<hashtable[i]->dsa_TW<<endl;
            cout<<"Term work in SE is "<<hashtable[i]->se_TW<<endl;
            cout<<"Term work in mis is "<<hashtable[i]->mis_TW<<endl;
            cout<<"Term work in iot is "<<hashtable[i]->iot_TW<<endl;
            cout<<"Term work in stats is "<<hashtable[i]->stats_TW<<endl;
            cout<<"-------------------------------------------"<<endl;
        }
        else{
            cout<<i<<".) No data available."<<endl;
        }
    }
}
};
int main(){
    baseinfo b1;
    hashmap h1;
    dsa d1;
    se s1;
    mis m1;
    iot i1;
    stats st1;
    int rollnumber,findroll,deleteroll;
    string name;
    h1.initialization();
    int choice;
    cout<<"-----------------------------------------------------------"<<endl;
    cout<<"Enter the base information of all subjects "<<endl;
    cout<<"-----------------------------------------------------------"<<endl;
    cout<<"\t***DSA***"<<endl;
    b1.getbaseinfo_dsa();
    cout<<"\t***IoT***"<<endl;
    b1.getbaseinfo_iot();
    cout<<"\t***SE***"<<endl;
    b1.getbaseinfo_se();
    cout<<"\t***MIS***"<<endl;
    b1.getbaseinfo_mis();
    cout<<"\t***STATISTICS***"<<endl;
    b1.getbaseinfo_stats();
    cout<<"-----------------------------------------------------------"<<endl;
    do{
    cout<<"Select the operation to be performed \n1.Insert student data\n2.Display student data\n3.Delete student data\n4.Display all data\n5.Exit\n";
    cin>>choice;
    switch(choice){
        
        case 1: cout<<"Enter student name ";
                cin>>name;
                cout<<"Enter Rollnumber of the student ";
                cin>>rollnumber;
                cout<<"***** DSA DETAILS *****"<<endl;
                d1.getstudentinfo_dsa();
                cout<<"-------------------------"<<endl;
                cout<<"***** SE DETAILS *****"<<endl;
                s1.getstudentinfo_se();
                cout<<"-------------------------"<<endl;
                cout<<"***** MIS DETAILS *****"<<endl;
                m1.getstudentinfo_mis();
                cout<<"-------------------------"<<endl;
                cout<<"***** IoT DETAILS *****"<<endl;
                i1.getstudentinfo_iot();
                cout<<"-------------------------"<<endl;
                cout<<"***** STATISTICS DETAILS *****"<<endl;
                st1.getstudentinfo_stats();
                h1.storestudentinfo(rollnumber,name,d1,s1,m1,i1,st1);
                cout<<"----> DATA ENTERED <----"<<endl;
                break;
        case 2:cout<<"Enter Roll number of the student whose data is to be displayed ";
                cin>>findroll;
                h1.display(findroll);
                break;
        case 3:cout<<"Enter Roll number of the student whose data is to be displayed ";
                cin>>deleteroll;
                h1.deletedata(deleteroll);
                break;
        case 4:h1.displayalltadata();
                break;
    }
    }while (choice!=5);
    return 0;
}
