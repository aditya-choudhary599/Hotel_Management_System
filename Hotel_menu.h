#include<bits/stdc++.h>
using namespace std;

class Hotel{
    public:
    map<int,pair<string,int>> menu;
    queue<int> waiters;
    int customer_no=0;

    Hotel()
    {
        //here 100 series is for the starters
        menu[101]={"Tea",20};
        menu[102]={"Coffee",30};
        menu[103]={"Grilled Sandwich",50};
        menu[104]={"Masala Dosa",60};
        menu[105]={"Onion Tomato Uthappa",70};
        menu[106]={"Masala Fry Papad",45};
        menu[107]={"Veg Manchurian",100};

        //here 200 series is for the main-course
        menu[201]={"Paneer Tikka Masala",180};
        menu[202]={"Palak Panner",200};
        menu[203]={"Veg Kolhapuri",210};
        menu[204]={"Veg Kofta",160};
        menu[205]={"Butter Roti",25};
        menu[206]={"Butter Naan",35};
        menu[207]={"Dal Tadka",150};
        menu[208]={"Veg Steamed Rice",130};
        menu[209]={"Schezwan Triple Fried Rice",170};
        menu[210]={"Hakka Noodles",170};

        // here 300 series is for the deserts
        menu[301]={"Mango Mastani",100};
        menu[302]={"Fruit Boat",200};
        menu[303]={"Lassi",50};
        menu[304]={"Masala Tak",25};
        menu[305]={"Slice",40};

        for(int i=0;i<2;i++)
        {
            this->waiters.push(i);
        }

    }

    //here queue is for the waiters and thier id is from 0 to 9.
    int can_we_accept_order()
    {
        if(waiters.empty()==true)
        {
            return -1; // signifies that we cannot accept the order
        }
        else
        {
            int temp=waiters.front();
            this->waiters.pop();
            return temp;
        }
    }
};









