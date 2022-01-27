#include <iostream>
using namespace std;
class HashTable{
    private:
    int *H; 

    public:
    HashTable(){
        H = new int[10];
        for (int i = 0; i < 10; i++)
        {
            H[i] = 0;
        }
    }

    int Hash(int key){
        return key%10;
    }

    int probe(int key){
        int index = Hash(key);
        int i = 0;
        while(H[(index+i)%10] != 0){
            i++;
        }
        return (index+i)%10;
    }

    void Insert(int key){
        int index = Hash(key);

        if(H[index]!=0){
            index = probe(key);
        }
        H[index] = key;
    }

    int search(int key){
        int index =  Hash(key);
        int i = 0;
        if(H[(index+i)%10] ==key) return (index+i)%10;
        while ((H[(index+i)%10] != key) && (H[(index+i)%10] != 0)){
            i++;
            if(H[(index+i)%10] ==key) return (index+i)%10;
        }
        return -1;
    }

    void display(){
        for (int i = 0; i < 10; i++)
        {
            cout<<i<<"->"<<H[i]<<"\n";
        }
         
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    HashTable ht;
    ht.Insert(12);
    ht.Insert(25);
    ht.Insert(35);
    ht.Insert(45);
    ht.Insert(26);
    ht.display();
    cout<<"Key at :"<<ht.search(45);
    return 0;
}