#include "std_lib_facilities.h"
int main()
{
cout<<"Enter the name of the person you want to write to:\n";          //1.részben kiíratomm a kérdéseket és bekérem az
string first_name;                                                     //adatokat
cin>>first_name;
cout<<"Ener the name of an another friend.\n";
string friend_name;
cin>>friend_name;
cout<<"Enter an 'm' if the friend is male or enter an 'f' if the friend is female.\n";
char friend_sex;
cin>>friend_sex;
cout<<"Enter the age of the recipient:\n";
int age;
cin>>age;

if(age>0&&age<110)                               // ha a beírt kor megfelel a kritériumnak akkor a program kiírja a levelet

{
cout<<"\nDear "<<first_name<<",\n\nHow are you?I am fine.I miss You.\nHave you seen "<<friend_name<<" lately?\n";
if(friend_sex=='m')
cout<<"If you see "<<friend_name<<" please ask him to call me.\n";
if(friend_sex=='f')
cout<<"If you see "<<friend_name<<" please ask her to call me.\n";
cout<<"I hear you just had a birthday and you are "<<age<<" years old.\n";
if(age<12)
cout<<"Next year you will be "<<age+1<<".\n";
if(age==17)
cout<<"Next year you will be able to vote.\n";
if(age>70)
cout<<"I hope you are enjoying retirement\n";
cout<<"Yours sincerely,\n\n\n";

}

else                                      //ha nem akkor ezt az üzenetet írja ki
{
cout<<"error(you're kidding)\n";

}
}
