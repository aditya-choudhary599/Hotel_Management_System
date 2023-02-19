#include<bits/stdc++.h>
#include "Hotel_menu.h"
using namespace std;

Hotel my_hotel;

class Customer{
    private:
    // here the key will be the name of the item he ordered and value is pair of the quantity
    map<string,pair<int,int>> order;

    // here waiter_id is the id of the waiter associated with this customer.
    
    
    public:
    int no;
    int waiter_id;
    // parametrised constructor which whenever the object customer is created it will be associated with some waiter.
    Customer(int id,int n)
    {
        this->waiter_id=id;
        this->no=n;
    }
    
    // here add_item add the particular item to the list of the 
    void add_item(int x,int quantity)
    {
        pair<int,int> p;
        p.first=quantity;
        p.second=quantity*my_hotel.menu[x].second;
        order[my_hotel.menu[x].first]=p;
        cout<<"\nThe item mentioned and its quantity has been added to "<<no<<" st customer\n";
        return;
    }

    //print the bill
    void print_bill()
    {
        cout<<"\n*****THE BILL OF THE "<<no<<" CUSTOMER IS *****\n";
        int i=1;
        int total=0;
        auto it=order.begin();
        while(it!=order.end())
        {
            cout<<i<<" . "<<it->first<<" "<<it->second.first<<" "<<it->second.second/it->second.first<<" "<<it->second.second<<endl;
            i++;
            total+=it->second.second;
            it++;
        }
        cout<<"_______________________________________"<<endl;
        cout<<"\nThe total bill is Rs. "<<total<<endl;

    }

};

void delete_customer(Customer *c)
{
    cout<<"\nThe customer "<<c->no<<" has been deleted\n";
    my_hotel.waiters.push(c->waiter_id);
    delete(c);
}

Customer* create_a_customer()
{
    int temp=my_hotel.can_we_accept_order();
    if(temp==-1)
    {
        cout<<"\nSorry we are full so we cannot accept the order\n";
        return NULL;
    }
    else
    {
        my_hotel.customer_no++;
        Customer *c=new Customer(temp,my_hotel.customer_no);
        cout<<"\nThe customer "<<my_hotel.customer_no<<" has been created succesfully\n";
        return c;
    }
}