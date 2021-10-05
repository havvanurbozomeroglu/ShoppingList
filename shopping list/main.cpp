///////////////////////////////////////////////////
////////////////HAVVANUR BOZÖMEROÐLU///////////////
///////////////1306180022//////////////////////////
//////////////////////////////////////////////////


#include <iostream>
#include <vector>
using namespace std;
int count=0;

class Shopping{

public:
 vector <string> name;
 vector <int> sizes;
 vector <string> item;
 vector <int> quantity;
string listname;

void CreateNewList(){
 string k;
 cout<< "   Enter the name of the new list: ";
 cin>> k;
 name.push_back(k);
 cout<< "   Enter how many product write? ";
 int s;
 cin>> s;
 sizes.push_back(s);
 for(int i=1; i<=s; i++){
    cout<< "   Enter item: ";
    string m;
    cin>> m;
    item.push_back(m);
    cout<< "   Enter quantity: ";
    int n;
    cin>> n;
    quantity.push_back(n);

 }
  cout<< endl << endl;
  }

void ShowLists(){

for(int i=0; i<=count-1; i++){
     cout<< "   " << name[i] << endl;

    int snum=0;
        for(int t=0; t<i; t++){
        snum=snum+sizes[t];
        }
    for(int y=snum; y<sizes[i]+snum; y++){
    cout<< item[y] << "  " << quantity[y]<< endl;
 }
 cout << endl << endl;
 }
 cout<< "    Enter the name of the list you want to process: ";

 cin>>listname;
 for(int i=0; i<=count-1; i++){
 if(listname==name[i]){
        int snum=0;
        for(int t=0; t<i; t++){
        snum=snum+sizes[t];
        }
    cout<<"   " <<  name[i] << endl;
    for(int y=snum; y<sizes[i]+snum; y++){
    cout<< item[y] << "  " << quantity[y]<< endl;
 }
 cout << endl << endl;
 }

}}

void AddItem(){
cout<< "  Do you want to add the item ? ";
for(int i=0; i<=count-1; i++){


 if(listname==name[i]){
        int snum=0;
        for(int t=0; t<i; t++){
        snum=snum+sizes[t];
        }
   for(int h=item.size(); h<=snum; h--){
       item[h+1]=item[h];
       quantity[h+1]=quantity[h];
   }
          for(int g=0; g<=sizes.size(); g++){
            sizes[g]=sizes[g]+1;
          }
    string d;
    int f;
    cin>> d;
    item.insert(item.begin()+snum,d);
    cout<< endl ;
    cout<< " Quantity: ";
    cin>> f;
    quantity.insert(quantity.begin()+snum,f);
    cout<< endl << endl;
    }

}
}
void EditItem(){
    cout<< " Do you want to edit the item from which? ";
   string delitem;
   cin>>delitem;
   for(int i=0; i<item.size(); i++){
   if(delitem==item[i]){
    cout<< "    Edit " << endl;
    cout<< "     " << delitem << ": ";
    cin>> item[i];
    cout<< endl;
   cout<< "     " << quantity[i] << ": ";
   cin>> quantity[i];
   cout<< endl << endl;

   }

}}
void DeleteItem(){
   cout<< " Do you want to delete the item from which? ";
   string delitem;
   cin>>delitem;
   for(int i=0; i<item.size(); i++){
   if(delitem==item[i]){
     item.erase (item.begin()+i);
     quantity.erase (quantity.begin()+i);
   }
cout<< endl << endl;

}}
void MarkDone(){
   cout<< " Do you want to mark as done the item? ";
   string doneitem;
   cin>> doneitem;
   for(int y=0; y<item.size() ; y++){
    if(doneitem==item[y]){
        item[y]=  "++   " + item[y] ;
    }
   }
}
};


int main()
{

   int num;
   cout<< "           ///WELCOME TO YOUR SHOPPING LIST///             " << endl << endl << endl << endl << endl;
Shopping newlist;
for(int j=0; ; j++){
  vector <string> namess;
   cout<< "  1 -----> Create new a list  " << endl;
   cout<< "  2 -----> Show shopping lists  " << endl;
   cout<< "  3 -----> Exit  " << endl << endl << endl;

   cout<< "  Please choose the process process you want to do: " ;
   cin>> num ;
   cout<< endl << endl;


   if(num==1){

        newlist.CreateNewList();
        count++;


   }
   if(num==2){
int numm;

  newlist.ShowLists();
  for(int h=0; ; h++){
    cout<< "  1 -----> Add Item  " << endl;
    cout<< "  2 -----> Edit Item  "<<endl;
    cout<< "  3 -----> Delete Item  " << endl;
    cout<< "  4 -----> Mark as Done Undone  " << endl;
    cout<< "  5 -----> Exit  " << endl << endl << endl;
    cout<< "  Please choose the process process you want to do: " ;
   cin>> numm ;
   cout<< endl << endl;
             if(numm==1){
                newlist.AddItem();
             }
             if(numm==2){
                newlist.EditItem();
             }
             if(numm==3){
                newlist.DeleteItem();
             }
             if(numm==4){
                newlist.MarkDone();
             }
             if(numm==5){
                cout<< "         <-------------      " << endl;
                cout<< endl << endl << endl;
                break;
             }


   } }

    if(num==3){
        cout<< "          CLOSING      " << endl;
        cout<< "     please press a key    " << endl << endl;
        break;
    }
}
    return 0;
}
