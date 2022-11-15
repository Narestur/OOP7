// 
//
#include "Application.h"
#include "SharingCar.h"
#include <Windows.h>
#include <iostream>
#include "overint.h"
#include <list>
#include <deque>
#include <set>
#include <map>
#include <stack>
#include <queue>

#pragma execution_character_set( "utf-8" )
using namespace std;
using namespace App;
using namespace Sharing;
using namespace overwrite;

void time_rent(Application how)
{
    int callcul = how.timeRent, month;
    cout << callcul;
    month = callcul / 30;
    cout << "\n" << month;
}

void testF(int i)
{
    i += i;
    cout << i << " ";
}
bool grather(int a, int b)
{
    return (a > b);
}

int main()
{
    int ch;
    //etConsoleOutputCP(65001); // UTF-8
    SetConsoleOutputCP(CP_UTF8); // UTF-8

    //setlocale(LC_ALL, "Ukr");
    map<int, int> mapI = { {5,555},
                        { 6,666},
                        {7,777} };
    multimap<int, int> multiM = { {8,888},
                        { 9,999},
                        {10,101010} };;
    stack <int> stk;
    set <int> setInt;
    multiset <double> multiDouble;
    queue <double> q;
    priority_queue <double> pq;
    deque<int> deqInt(5);
    list <SharingCar> shaL(5);
    vector <SharingCar> sharingList(5);
    SharingCar* sharingArray = new SharingCar[5];
    for (int i = 0; i < 5; i++)
    {
        sharingList[i] = SharingCar();
        sharingArray[i] = SharingCar();
        shaL.push_front(SharingCar());
        deqInt[i] = i + i * 2;
        stk.push(i);
        q.push(i + 11);
        pq.push(i + 21);
    }
    Application::print_info();
    sharingArray[1].check_if_ua_number("38097061722189");

    Application a(400, "1", "1", "1");
    //a.get_number_country("380978888888");
    //a.pring_additional_info();
    //cout << "\n\n\n";
    //a.pring_additional_info(1);

    SharingCar sharingL = sharingList[4];
    SharingCar sharingA = sharingArray[1];
    //time_rent(a);
    cout << "\n\nВведіть номер: ";
    cin >> ch;
    switch (ch)
    {
    case 1:
    {
        cout << endl << endl;
        sharingL.Car_show(7);
        sharingL.overwork(413, 7, '+');
        cout << endl << endl;
        sharingL.Car_show(7);
        sharingL.overwork(2, 7, '-');
        cout << endl << endl;
        sharingL.Car_show(7);
        sharingL.overwork(0, 7, '*');
        cout << endl << endl;
        sharingL.Car_show(7);
        sharingL.overwork(1, 7, '-=');
        cout << endl << endl;
        sharingL.Car_show(7);
        sharingL.overwork(2, 7, '+=');
        cout << endl << endl;
        sharingL.Car_show(7);
        sharingL.overwork(3, 7, '*=');
        cout << endl << endl;
        sharingL.Car_show(7);
        sharingL.overwork(4, 7, '[]');
        cout << endl << endl;
        sharingL.Car_show(7);

        cout << "\n\n\n";
        overint i = 231;
        i.show();
        i + 11230;
        i.show();
        i - 7;
        i.show();
        i * 6;
        i.show();
        i += 6;
        i.show();
        i -= 6;
        i.show();
        i *= 6;
        i.show();
        i + 112;
        i[4];
        i.show();
    }
    break;
    case 2:
    {
        sharingList.push_back(SharingCar());
        sharingList[5].Car_show(4);
        cout << "Розмір вектору " << sharingList.size();
        shaL.clear();
        cout << endl << shaL.empty() << endl;
        cout << deqInt[3] << endl;
        deqInt.assign(5, 6);
        cout << deqInt[3] << endl;
        deqInt.resize(10, 11);
        cout << deqInt[9] << endl;
        setInt = { 8,3,1,6,32,11,23 };
        multiDouble = { 8.32,8.21,9.81,9.09,8.99,9,10 };
        set <int> ::iterator it = setInt.begin();
        multiset <double> ::iterator it1 = multiDouble.begin();
        cout << "\n\n";
        for (int i = 1; it1 != multiDouble.end(); i++, it1++) {
            cout << *it1 << " ";
        }
        cout << "\n\n";
        for (int i = 1; it != setInt.end(); i++, it++) {
            cout << *it << " ";
        }
        setInt.lower_bound(9);
        multiDouble.lower_bound(9);
        cout << "\n\n";
        cout << mapI.count(6) << endl;
        cout << multiM.count(9) << endl;
        mapI.insert(make_pair(1, 111));
        multiM.insert(make_pair(2, 222));
        cout << "\n\n";
        cout << stk.top();
        int t;
        cout << "\n\n";
        t = q.front();
        cout << t;
        cout << "\n\n";
        t = pq.top();
        cout << t;
        cout << "\n\n";
        deque <int>::iterator element = deqInt.begin();
        for (; element < deqInt.end(); element++)
        {
            cout << *element << "\t";
        }
        cout << "\n\n";
        for_each(setInt.begin(), setInt.end(), testF);
        cout << "\n\n";
        set <int>::iterator element1 = setInt.begin();
        for (; element1 != setInt.end(); element1++)
        {
            cout << *element1 << "\t";
        }
        //sort(setInt.begin(), setInt.end(), grather);
    }

    break;

    }
    //cout << endl << endl << endl;
    //sharingL.app_show(2);

    //sharingL.Service_Dinamic();
    //cout << endl;
    //sharingL.Car_show(7);
    //cout << endl;
    //sharingL.Car_show(8);
    //cout << endl;

    //////cout << endl;
    //////sharingA.Car_show(2);
    //////delete[] sharingArray;
    //////cout << endl;
    //////cout << endl;
    //////sharingA.randomMemory();


    /*TempClase <float> k;
    float mk=1;
    k.mToKm(10000);
    cout<<endl<< mk<<"km";*/


}
