#include<bits/stdc++.h>
#include "Customers.h"


int main()
{
  cout<<my_hotel.waiters.size();
  Customer *c1=create_a_customer();
  if(c1!=NULL)
  {
    cout<<"\nThe waiter id for the customer "<<c1->no<<" is "<<c1->waiter_id;
    c1->add_item(101,2);
  c1->add_item(105,2);
  c1->add_item(201,1);
  c1->add_item(205,2);
  c1->add_item(206,2);
  c1->add_item(210,1);
  c1->add_item(302,1);
    c1->print_bill();
    //delete_customer(c1);
  }

  cout<<my_hotel.waiters.size();
  Customer *c2=create_a_customer();
  if(c2!=NULL)
  {
    cout<<"\nThe waiter id for the customer "<<c2->no<<" is "<<c2->waiter_id;
    c2->add_item(101,2);
  c2->add_item(105,2);
  c2->add_item(201,1);
  c2->add_item(205,2);
  c2->add_item(206,2);
  c2->print_bill();
  }
    cout<<my_hotel.waiters.size();
    Customer *c3=create_a_customer();
    cout<<my_hotel.waiters.size();
    delete_customer(c2);
    cout<<my_hotel.waiters.size();
    c3=create_a_customer();
    



}