#include<iostream>
#include<string>
#include<conio.h>
#include<stdlib.h>
using namespace std;

class basevar
{
    public:
        int choice;
        int life=0;
};

class easy: public basevar
{
public:
    string easyword1 ="Challenge";
    string easyword2 ="Help";
    string easyword3 ="Result";
    string easyword4 ="Reason";
    string easyword5 ="Answer";
    string easyword6 ="Missing";
    string easyword7 ="Search";
    string easyword8 ="Pattern";
    string easyword9 ="Need";
    string easyword10 ="Long";
    string easyans1;
    string easyans2;
    string easyans3;
    string easyans4;
    string easyans5;
    string easyans6;
    string easyans7;
    string easyans8;
    string easyans9;
    string easyans10;

        void easymode()
        {


        reasy:
            system("cls");


        cout<<"                                          ***Please write the initial in Capital***"<<endl<<endl;
        cout<<"                                               ***Your in the Easy Mode***"<<endl<<endl;
        cout<<"1._hal_eng_"<<endl;
        cout<<"Something new and difficult that forces you to make a lot of effort"<<endl;
        cin>>easyans1;
        if(easyword1==easyans1)
        {
            cout<<"Amazing you got it correct"<<endl;
            life++;
        }
        else{
            cout<<"Ohh! Sorry your guess was wrong"<<endl;
        }
        cout<<"2._e_p"<<endl;
        cout<<"The act of aid and support"<<endl;
        cin>>easyans2;
        if(easyword2==easyans2)
        {
            cout<<"Amazing you got it correct"<<endl;
            life++;
        }
        else{
            cout<<"Ohh! Sorry your guess was wrong"<<endl;
        }
        cout<<"3.R_s__t"<<endl;
        cout<<"A good effect of an action"<<endl;
        cin>>easyans3;
        if(easyword3==easyans3)
        {
            cout<<"Amazing you got it correct"<<endl;
        }
        else{
            cout<<"Ohh! Sorry your guess was wrong"<<endl;
        }
        cout<<"4.__ason"<<endl;
        cout<<"A cause or an explanation for something that has happened"<<endl;
        cin>>easyans4;
        if(easyword4==easyans4)
        {
            cout<<"Amazing you got it correct"<<endl;
            life++;
        }
        else{
            cout<<"Ohh! Sorry your guess was wrong"<<endl;
        }
        cout<<"5._ns_er"<<endl;
        cout<<"To do something as a reply"<<endl;
        cin>>easyans5;
        if(easyword5==easyans5)
        {
            cout<<"Amazing you got it correct"<<endl;
            life++;
        }
        else{
            cout<<"Ohh! Sorry your guess was wrong"<<endl;
        }
        cout<<"6.M__sin_"<<endl;
        cout<<"Lost, or not in the right or usual place"<<endl;
        cin>>easyans6;
        if(easyword6==easyans6)
        {
            cout<<"Amazing you got it correct"<<endl;
            life++;
        }
        else{
            cout<<"Ohh! Sorry your guess was wrong"<<endl;
        }
        cout<<"7._ea__h"<<endl;
        cout<<"An act of trying to find somebody/something"<<endl;
        cin>>easyans7;
        if(easyword7==easyans7)
        {
            cout<<"Amazing you got it correct"<<endl;
            life++;
        }
        else{
            cout<<"Ohh! Sorry your guess was wrong"<<endl;
        }
        cout<<"8._atte__"<<endl;
        cout<<"Something that is regularly repeated arrangement"<<endl;
        cin>>easyans8;
        if(easyword8==easyans8)
        {
            cout<<"Amazing you got it correct"<<endl;
            life++;
        }
        else{
            cout<<"Ohh! Sorry your guess was wrong"<<endl;
        }
        cout<<"9._e_d"<<endl;
        cout<<"A lack of something requisite, desirable, or useful"<<endl;
        cin>>easyans9;
        if(easyword9==easyans9)
        {
            cout<<"Amazing you got it correct"<<endl;
            life++;
        }
        else{
            cout<<"Ohh! Sorry your guess was wrong"<<endl;
        }
        cout<<"10._o_g"<<endl;
        cout<<"Measuring or covering a large amount in distance or time"<<endl;
        cin>>easyans10;
        if(easyword10==easyans10)
        {
            cout<<"Amazing you got it correct"<<endl;
            life++;
        }
        else{
            cout<<"Ohh! Sorry your guess was wrong"<<endl;
        }
        cout<<"Hey!! You got "<<life<<" points."<<endl<<endl;
        if(life>5)
        {
            cout<<"Congratulations you have completed the easiest level."<<endl<<endl;
        }
        else{
            cout<<"Sorry you failed this round"<<endl<<endl;
        }
        label:
        cout<<"1.Do you want try again"<<endl<<"2.Exit"<<endl<<"-->";
        cin>>choice;
        switch(choice)
        {
    case 1:
        goto reasy;
        break;
    case 2:
        abort();
        break;
    default:
        cout<<"Unvalid input"<<endl<<endl;
        goto label;
        }

    }
};

class moderate: public easy
{

    public:
    string word1 ="Creatively";
    string word2 ="Underscores";
    string word3 ="Abbreviation";
    string word4 ="Application";
    string word5 ="Appearance";
    string word6 ="Metaphor";
    string word7 ="Business";
    string word8 ="Companion";
    string word9 ="Copyright";
    string word10 ="Conspirator";
    string moderateans1;
    string moderateans2;
    string moderateans3;
    string moderateans4;
    string moderateans5;
    string moderateans6;
    string moderateans7;
    string moderateans8;
    string moderateans9;
    string moderateans10;

    int moderatemode()
    {
        remod:
            system("cls");
        cout<<"                                          ***Please write the initial in Capital***"<<endl<<endl;
        cout<<"                                               ***Your in the Moderate Mode***"<<endl<<endl;
        life=0;
        cout<<"1.__eati_el_"<<endl;
        cout<<"In a way that involves the use of skill and the imagination to produc something new or a work of art to think/work."<<endl;
        cin>>moderateans1;
        if(word1==moderateans1)
        {
            cout<<"Amazing you got it correct"<<endl;
            life++;
        }
        else{
            cout<<"Ohh! Sorry your guess was wrong"<<endl;
        }
        cout<<"2._nd_rs__res"<<endl;
        cout<<"A line drawn under a word or phrase for emphasis."<<endl;
        cin>>moderateans2;
        if(word2==moderateans2)
        {
            cout<<"Amazing you got it correct"<<endl;
            life++;
        }
        else{
            cout<<"Ohh! Sorry your guess was wrong"<<endl;
        }
        cout<<"3.A__rev__tio_"<<endl;
        cout<<"A formal written request, especially for a job or a place in a school, club, etc."<<endl;
        cin>>moderateans3;
        if(word3==moderateans3)
        {
            cout<<"Amazing you got it correct"<<endl;
            life++;
        }
        else{
            cout<<"Ohh! Sorry your guess was wrong"<<endl;
        }
        cout<<"4.A_pl__ati_n"<<endl;
        cout<<"A formal written request, especially for a job or a place in a school, club, etc."<<endl;
        cin>>moderateans4;
        if(word4==moderateans4)
        {
            cout<<"Amazing you got it correct"<<endl;
            life++;
        }
        else{
            cout<<"Ohh! Sorry your guess was wrong"<<endl;
        }
        cout<<"5.A_pe__anc_"<<endl;
        cout<<"The way that somebody/something looks or seems"<<endl;
        cin>>moderateans5;
        if(word5==moderateans5)
        {
            cout<<"Amazing you got it correct"<<endl;
            life++;
        }
        else{
            cout<<"Ohh! Sorry your guess was wrong"<<endl;
        }
        cout<<"6.__ta_ho_"<<endl;
        cout<<"A word or phrase that is used in an imaginative way to show that somebody"<<endl;
        cin>>moderateans6;
        if(word6==moderateans6)
        {
            cout<<"Amazing you got it correct"<<endl;
            life++;
        }
        else{
            cout<<"Ohh! Sorry your guess was wrong"<<endl;
        }
        cout<<"7._u__nes_"<<endl;
        cout<<"buying and selling as a way of earning money; commerce"<<endl;
        cin>>moderateans7;
        if(word7==moderateans7)
        {
            cout<<"Amazing you got it correct"<<endl;
            life++;
        }
        else{
            cout<<"Ohh! Sorry your guess was wrong"<<endl;
        }
        cout<<"8.Co_pa_io_"<<endl;
        cout<<"A person or animal with whom you spend a lot of time or go somewhere"<<endl;
        cin>>moderateans8;
        if(word8==moderateans8)
        {
            cout<<"Amazing you got it correct"<<endl;
            life++;
        }
        else{
            cout<<"Ohh! Sorry your guess was wrong"<<endl;
        }
        cout<<"9.Co__rig_t"<<endl;
        cout<<"the legal right to be the only person who may print, copy, perform, etc"<<endl;
        cin>>moderateans9;
        if(word9==moderateans9)
        {
            cout<<"Amazing you got it correct"<<endl;
            life++;
        }
        else{
            cout<<"Ohh! Sorry your guess was wrong"<<endl;
        }
        cout<<"10._on__ira_or"<<endl;
        cout<<"A member of a group of people who are planning to do something bad or illegal"<<endl;
        cin>>moderateans10;
        if(word10==moderateans10)
        {
            cout<<"Amazing you got it correct"<<endl;
            life++;
        }
        else{
            cout<<"Ohh! Sorry your guess was wrong"<<endl<<endl;
        }
        cout<<"Hey!!You got "<<life<<" points."<<endl<<endl;
        if(life>5)
        {
            cout<<"Congratulations you have completed the moderate level."<<endl<<endl;
        }
        else{
            cout<<"Sorry you failed this round"<<endl<<endl;
        }
        label:
        cout<<"1.Do you want try again"<<endl<<"2.Exit"<<endl<<"-->";
        cin>>choice;
        switch(choice)
        {
    case 1:
        goto remod;
        break;
    case 2:
        abort();
        break;
    default:
        cout<<"Unvalid input"<<endl<<endl;
        goto label;
        }
    }

};


class hard: public moderate
{
    public:
    string word1 ="Chromosome";
    string word2 ="Lieutenant";
    string word3 ="Anaestheticllo";
    string word4 ="Vanadium";
    string word5 ="Preservationists";
    string word6 ="Luxembourg";
    string word7 ="Prominence";
    string word8 ="Academician";
    string word9 ="Humberside";
    string word10 ="Extraterrestrial";
    string hardans1;
    string hardans2;
    string hardans3;
    string hardans4;
    string hardans5;
    string hardans6;
    string hardans7;
    string hardans8;
    string hardans9;
    string hardans10;

    int hardmode()
    {
        har:
            system("cls");
        cout<<"                                          ***Please write the initial in Capital***"<<endl<<endl;
        cout<<"                                               ***Your in the Hard Mode***"<<endl<<endl;
        cout<<"1.__romo_om_"<<endl;
        cout<<"A member of a group of people who are planning to do something bad or illegal"<<endl;
        cin>>hardans1;
        if(word1==hardans1)
        {
            cout<<"Amazing you got it correct"<<endl;
            life++;
        }
        else{
            cout<<"Ohh! Sorry your guess was wrong"<<endl;
        }
        cout<<"2.L_eu_enan_"<<endl;
        cout<<"An officer at a middle level in the army, navy or air force"<<endl;
        cin>>hardans2;
        if(word2==hardans2)
        {
            cout<<"Amazing you got it correct"<<endl;
            life++;
        }
        else{
            cout<<"Ohh! Sorry your guess was wrong"<<endl;
        }
        cout<<"3.__aestheticllo"<<endl;
        cout<<"A substance that makes you unconscious or makes specific body parts numb"<<endl;
        cin>>hardans3;
        if(word3==hardans3)
        {
            cout<<"Amazing you got it correct"<<endl;
            life++;
        }
        else{
            cout<<"Ohh! Sorry your guess was wrong"<<endl;
        }
        cout<<"4._a__diu_"<<endl;
        cout<<"A toxic silvery-white metallic element"<<endl;
        cin>>hardans4;
        if(word4==hardans4)
        {
            cout<<"Amazing you got it correct"<<endl;
            life++;
        }
        else{
            cout<<"Ohh! Sorry your guess was wrong"<<endl;
        }
        cout<<"5.P__ser_ati_nis_s"<<endl;
        cout<<"A supporter or advocate of the storing/saving something, especially of historic buildings"<<endl;
        cin>>hardans5;
        if(word5==hardans5)
        {
            cout<<"Amazing you got it correct"<<endl;
            life++;
        }
        else{
            cout<<"Ohh! Sorry your guess was wrong"<<endl;
        }
        cout<<"6._u_emb__rg"<<endl;
        cout<<"A grand duchy in W Europe: it formed the Benelux customs union with Belgium and the Netherlands"<<endl;
        cin>>hardans6;
        if(word6==hardans6)
        {
            cout<<"Amazing you got it correct"<<endl;
            life++;
        }
        else{
            cout<<"Ohh! Sorry your guess was wrong"<<endl;
        }
        cout<<"7._ro_ine__e"<<endl;
        cout<<"the quality, state, or fact of being conspicuous."<<endl;
        cin>>hardans7;
        if(word7==hardans7)
        {
            cout<<"Amazing you got it correct"<<endl;
            life++;
        }
        else{
            cout<<"Ohh! Sorry your guess was wrong"<<endl;
        }
        cout<<"8.__ade_i__an"<<endl;
        cout<<"A member of an official group of people who are important in art, science or literature"<<endl;
        cin>>hardans8;
        if(word8==hardans8)
        {
            cout<<"Amazing you got it correct"<<endl;
            life++;
        }
        else{
            cout<<"Ohh! Sorry your guess was wrong"<<endl;
        }
        cout<<"9.H__ber_id_"<<endl;
        cout<<"A former county of N England around the Humber estuary."<<endl;
        cin>>hardans9;
        if(word9==hardans9)
        {
            cout<<"Amazing you got it correct"<<endl;
            life++;
        }
        else{
            cout<<"Ohh! Sorry your guess was wrong"<<endl;
        }
        cout<<"10.E__rat__rest__al"<<endl;
        cout<<"A creature that comes from another planet; a creature that may exist on another planet"<<endl;
        cin>>hardans10;
        if(word10==hardans10)
        {
            cout<<"Amazing you got it correct"<<endl;
            life++;
        }
        else{
            cout<<"Ohh! Sorry your guess was wrong"<<endl<<endl;
        }
        cout<<"Hey!!You got "<<life<<" points."<<endl<<endl;
        if(life>5)
        {
            cout<<"Congratulations you have completed the hardest level."<<endl<<endl;
        }
        else{
            cout<<"Sorry you failed this round"<<endl<<endl;
        }
        label:
        cout<<"1.Want try again"<<endl<<"2.Exit"<<endl<<"-->";
        cin>>choice;
        switch(choice)
        {
    case 1:
        goto har;
        break;
    case 2:
        abort();
        break;
    default:
        cout<<"Unvalid input"<<endl<<endl;
        goto label;
        }
    }

};
int main()
{
    /*
Background:
0 = Black
1 = Blue
2 = Green
3 = Aqua
4 = Red
5 = Purple
6 = Yellow
7 = White



Foreground:
8 = Gray
9 = Light Blue
A = Light Green
B = Light Aqua
C = Light Red
D = Light Purple
E = Light Yellow
F = Bright White

*/
    hard h1;

    system("Color 7C");
    cout<<endl<<endl<<"                                               ***Welcome to the game***"<<endl;
    cout<<"This is a word game you have to complete the missing letters in this game. The defination for that word will be given."<<endl<<endl;
    label1:
    cout<<"Enter a level:"<<endl<<"1.Easy"<<endl<<"2.Moderate"<<endl<<"3.Hard"<<endl<<"4.Exit"<<endl<<"-->";

    cin>>h1.choice;
    switch(h1.choice)
    {
    case 1:
        h1.easymode();
    break;
    case 2:
        h1.moderatemode();
    break;
    case 3:
        h1.hardmode();
    break;
    case 4:
        abort();
    break;

    default:
    cout<<"Unvalid input"<<endl<<endl;
    goto label1;
    }

return 0;
}
