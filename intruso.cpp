#include "intruso.hpp"
using namespace std;
#include <iostream>


 void Intruso::set_senha_vazada(std::string vazou){
   string recebe;
    for(int i=0;i<vazou.size();i+=2){
         recebe+=vazou.at(i);     
     }
     //std::cout<<recebe<<std::endl;
     dado1.push_back(recebe);

     
 }

 std::string Intruso::crack_senha(){
    
    if(dado1.at(0)==dado1.at(1)){
        dado1.erase(dado1.begin()+1);
    }
    else if(dado1.size()==3){
        dado1.erase(dado1.begin()+2);
    }

    string x;
    string y;
    x=dado1.at(0).at(0);
    y=dado1.at(0).at(1);

    string z;
    string i;
    z=dado1.at(0).at(2);
    i=dado1.at(0).at(3);

    string l;
    string m;
    l=dado1.at(0).at(4);
    m=dado1.at(0).at(5);

    string k;
    string j;
    k=dado1.at(0).at(6);
    j=dado1.at(0).at(7);

    string w;
    string e;
    w=dado1.at(0).at(8);
    e=dado1.at(0).at(9);

    entrada1["A"]={x+y};
    entrada1["B"]={z+i};
    entrada1["C"]={l+m};
    entrada1["D"]={k+j};
    entrada1["E"]={w+e};
    




    string ab;
    string cd;
    ab=dado1.at(1).at(0);
    cd=dado1.at(1).at(1);

    string ef;
    string gh;
    ef=dado1.at(1).at(2);
    gh=dado1.at(1).at(3);

    string ij;
    string kl;
    ij=dado1.at(1).at(4);
    kl=dado1.at(1).at(5);

    string mn;
    string op;
    mn=dado1.at(1).at(6);
    op=dado1.at(1).at(7);

    string qr;
    string st;
    qr=dado1.at(1).at(8);
    st=dado1.at(1).at(9);

    entrada2["A"]={ab+cd};
    entrada2["B"]={ef+gh};
    entrada2["C"]={ij+kl};
    entrada2["D"]={mn+op};
    entrada2["E"]={qr+st};
    //cout<<entrada2["A"]<<entrada2["B"]<<entrada2["C"]<<endl;

    string res1;
    string res2;

    string id1;
    string id2;
    string id3;
    string id4;
    string id5;
    string id6;
    id1=dado1.at(0).at(10);
    id2=dado1.at(0).at(11);
    id3=dado1.at(0).at(12);
    id4=dado1.at(0).at(13);
    id5=dado1.at(0).at(14);
    id6=dado1.at(0).at(15);
    
    res1=entrada1[id1]+entrada1[id2]+entrada1[id3]+entrada1[id4]+entrada1[id5]+entrada1[id6];
   

   
    string i1;
    string i2;
    string i3;
    string i4;
    string i5;
    string i6;
    i1=dado1.at(1).at(10);
    i2=dado1.at(1).at(11);
    i3=dado1.at(1).at(12);
    i4=dado1.at(1).at(13);
    i5=dado1.at(1).at(14);
    i6=dado1.at(1).at(15);
    
    res2=entrada2[i1]+entrada2[i2]+entrada2[i3]+entrada2[i4]+entrada2[i5]+entrada2[i6];
    
//ja tenho minhas duas strings para comparar , res1 e res 2
string senhadescoberta;
string mm,nn,bb,cc,dd,kk;

if(res1[0]==res2[0]||res1[0]==res2[1]){
    mm=res1[0];}

 else{mm=res1[1];

    }
if(res1[2]==res2[2]||res1[2]==res2[3]){
    nn=res1[2];}

 else{nn=res1[3];

    }
if(res1[4]==res2[4]||res1[4]==res2[5]){
    bb=res1[4];}

 else{bb=res1[5];

    }
if(res1[6]==res2[6]||res1[6]==res2[7]){
    cc=res1[6];}

 else{cc=res1[7];

    }
if(res1[8]==res2[8]||res1[8]==res2[9]){
    dd=res1[8];}

 else{dd=res1[9];

    }
if(res1[10]==res2[10]||res1[10]==res2[11]){
    kk=res1[10];}

 else{kk=res1[11];

    }

string espaco=" ";
senhadescoberta=mm+espaco+nn+espaco+bb+espaco+cc+espaco+dd+espaco+kk;
return senhadescoberta;
    



    
 }