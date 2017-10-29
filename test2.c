#include <iostream>
#include <stdlib.h>
using namespace std;

struct  nod{
    int data;
    nod *next;
}*head, *tail;

void adi(int data)
{
    nod *temp = new nod;
    
    temp->data = data;
    temp->next = NULL;
    if(head == NULL)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        temp->next=head;
        head = temp;
    }
}

void adf(int data)
{
    nod *temp = new nod;
    
    temp->data = data;
    temp->next = NULL;
    if(head == NULL)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        tail->next = temp;
        tail = temp;
    }
}

void af()
{
    nod *temp = head;

    if(temp)
    while(temp)
    {
        cout<<temp->data;
        temp=temp->next;
    }
    else
        cout<<"lista goala";
    cout<<endl;
}

int cv(int val)
{
    nod *temp;
    temp = head;
    int i = 0;
    while(temp)
    {
        i++;
        if(temp->data == val)
            return  i;
        temp = temp->next;
    }
    return -1;
}

int cp(int val)
{
    nod *temp;
    
    temp = head;
    int i = 0;
    while(temp)
    {
        i+=1;
        if(i == val)
            return temp->data;
        temp = temp->next;
    }
    return -1;
}

void iv(int val, int data)
{
    nod *temp;
    
    temp = head;
    while(temp)
    {
        if(temp->data == val)
        {
            nod *temp2;
            temp2 = new nod;
            temp2->data = data;
            temp2->next = temp->next;
            temp->next = temp2;

            if(temp == tail)
                tail = temp2;
            break;
        }
        temp = temp->next;
    }
}

void ip(int poz, int data)
{
    nod *temp;
    nod *prev;

    temp = head;
    int i = 1;
    if(poz == 1)
    {
        nod *temp2;
        temp2 = new nod;
        temp2->data = data;
        temp2->next = head;
        head = temp2;
    }
    else
    while(temp)
    {
        if(i == poz)
        {
            nod *temp2;
            temp2 = new nod;
            temp2->data = data;
            prev->next = temp2;
            temp2->next = temp;
            break;
        }
        i++;
        prev = temp;
        temp = temp->next;
    }
}

void sv(int val)
{
    nod *temp;
    nod *prev;

    temp = head;
    while(temp)
    {
        if(temp->data == val)
        {   
            if(temp == head)
            {
                head = temp->next;
                delete temp;
                break;
            }
            else
            {
                if(temp == tail)
                    tail = prev;
            prev->next = temp->next;
            delete temp;
            }
            break;
        }
        prev = temp;
        temp = temp->next;
    }
}

void sp(int poz)
{
    nod *temp;
    nod *prev;

    temp = head;
    int i=1;
    if(poz == 1)
    {
        head = temp->next;
        delete temp;
    }
    else
    while(temp)
    {
        if(i == poz)
        {
            prev->next = temp->next;
            delete temp;
        }
        if(temp == tail)
            tail = prev;
        prev = temp;
        temp = temp->next;
        i++;
    }
}

int main()
{
    head = new nod;
    tail = new nod;
    head = NULL;
    tail - NULL;
/*
    adi(3); 
    adi(4);
    adf(5);
    af(); cout<<endl;
    cout<<cv(5);    cout<<endl;
    cout<<cv(4);    cout<<endl;
    cout<<cp(2);    cout<<endl;
    af();   cout<<endl;
    iv(3, 6);
    af(); cout<<endl;
    ip(1, 7);
    ip(2, 8);
    af(); cout<<endl;
    sv(7);
    sv(3);
    sv(5);
    af(); cout<<endl;
    sp(1);
    sp(2);
    af();
    cout<<'\n';
*/
    af();
    adi(1);
    adi(2);
    adi(3);
    af();
    adf(4);
    af();
    cout<<cv(5)<<endl;
    cout<<cv(1)<<endl;
    cout<<cp(5)<<endl;
    cout<<cp(3)<<endl;
    sp(1);
    af();
    sp(1);
    af();
    sv(4);
    af();
    adf(5);
    af();
    sv(1);
    sp(1);
    af();
    adf(8);
    af();
}
