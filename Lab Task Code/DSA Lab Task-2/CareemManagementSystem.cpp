#include <iostream>
#include <string>
using namespace std;
//* Careem Management System

struct Ride{
    string rider_name;
    int charges;
    int km;
    Ride *next_ride = NULL;

};
struct Car{
    int carID;
    string car_name;
    string driver_name;
    int reg_no;
    int car_type;
    int km;
    Car *next = NULL;
    Ride *first_ride = NULL;
};

Car *first = NULL;

Car* addNewCar(Car *first){
    Car *newCar = new Car;
    cout<<"Enter Car Name :"<<endl;
    cin>>newCar->car_name;
    cout<<"Enter Driver Name :"<<endl;
    cin>>newCar->driver_name;
    cout<<"Enter Car Type :"<<endl;
    cin>>newCar->car_type;
    cout<<"Enter Car Registration No :"<<endl;
    cin>>newCar->reg_no;

    if(first == NULL){
        first = newCar;
        newCar->carID = 1;
        newCar->next = NULL;
        return first;
    }

    newCar->carID = first->carID+1;
    first->next = newCar;
    newCar->next = NULL;
    return first;

}

void displayCars(Car *first){
    if(first == NULL){
        cout<<"There is no registered Car "<<endl;
        return;
    } 
    Car *p = first;
    cout<<"All Registered Cars are :"<<endl;
    while(p!=NULL){
        cout<<"-------------------------------"<<endl;
        cout<<"The Car ID is "<<p->carID<<endl;
        cout<<"The Car Name is "<<p->car_name<<endl;
        cout<<"The Car Driver is "<<p->driver_name<<endl;
        cout<<"The Car Type is "<<p->car_type<<endl;
        cout<<"The Car Registration No is"<<p->reg_no<<endl;
        cout<<"--------------------------------"<<endl;

        p = p->next;
        
    }

}

void displayType_2_Cars(Car *first){
    if (first == NULL){
        cout<<"There is no Registered Car !"<<endl;
        return;
    }
    Car *p = first;
    cout<<"The Type 2 Cars are :"<<endl;
    while(p!=NULL){
        if(p->car_type == 2){
        cout<<"-------------------------------"<<endl;
        cout<<"The Car ID is "<<p->carID<<endl;
        cout<<"The Car Name is "<<p->car_name<<endl;
        cout<<"The Car Driver is "<<p->driver_name<<endl;
        cout<<"The Car Registration No is"<<p->reg_no<<endl;
        cout<<"--------------------------------"<<endl;
        p = p->next; 
        }
    }
    
}

void addNewRide(Car *first){
    int id;
    cout<<"Enter the Car-ID where you do want to add the ride: "<<endl;
    cin>>id;
    Car *p = first;
    while((p->carID!=id) && (p!=NULL)){
        p = p->next;
    }
    if(p == NULL) {
        cout<<"NO Car with this ID found!"<<endl;
        return;
    }
    Ride *newRide = new Ride;
    cout<<"Enter the Rider Name :"<<endl;
    cin>>newRide->rider_name;
    cout<<"Enter km of ride :"<<endl;
    cin>>newRide->km;
    cout<<"Enter the charges :"<<endl;
    cin>>newRide->charges;

    if(p->first_ride == NULL){
        p->first_ride = newRide;
        newRide->next_ride = NULL;
    }
    else if(p->first_ride!=NULL){
        Ride *r = p->first_ride;
        while(r!=NULL){
            r = r->next_ride;
        }
        r->next_ride = newRide;
        newRide->next_ride = NULL;

    }


}

void displayRides(Car *first){
    int id;
    cout<<"Enter the Car-ID whose rides you want to see : "<<endl;
    cin>>id;
    Car *p = first;
    while(p->carID!=id && p!=NULL){
        p = p->next;
    }
    if(p == NULL) {
        cout<<"NO Car with this ID found!"<<endl;
        return;
    }
    if(p->first_ride == NULL){
        cout<<"NO Ride Found! "<<endl;
        return;
    }
    else if(p->first_ride!=NULL){
        Ride *r = p->first_ride;
        while(r!=NULL){
            cout<<"-------------------------------"<<endl;
        cout<<"The Rider Name is "<<r->rider_name<<endl;
        cout<<"The km Travelled are  "<<r->km<<endl;
        cout<<"The Charges of ride are "<<r->charges<<endl;
        cout<<"--------------------------------"<<endl;
        r = r->next_ride;  
        }
    }


}

void totalEarningOfCar( Car *first){
    int id;
    cout<<"Enter the Car-ID whose total Earnings you do want to calculate: "<<endl;
    cin>>id;
    Car *p = first;
    while(p->carID!=id && p!=NULL){
        p = p->next;
    }
    if(p == NULL){
        cout<<"NO Car with this ID found!"<<endl;
        return;
    }
    
    int earnings = 0;

    if(p->first_ride == NULL){
        cout<<"NO ride found !"<<endl;
        return;
    }

    else if(p->first_ride!=NULL){
        Ride *r = p->first_ride;
        while(r!=NULL){
            earnings+=r->charges;
            r = r->next_ride;
        }
    }

    cout<<"The Total Earnings of car are "<<earnings<<endl;
}

void totalEarningOfAllCars( Car *first){
    int earnings = 0;
    Car *p = first;
    while(p!=NULL){
        Ride *r = p->first_ride;
        if(p->first_ride!=NULL){
            while(r!=NULL){
                earnings+=r->charges;
                r = r->next_ride;
            }
        }
        p = p->next;
        if(p!=NULL){
            r = p->first_ride;
        }
    }

    cout<<"The total Earnings of all the Cars are :"<<earnings<<endl;
}

int main(){
    int option;
    do{
        cout<<"Enter corresponding Option to perform specific operation \n"
            <<"1 - Register New Car \n"
            <<"2 - Display Registered Cars \n"
            <<"3 - Display Type 2 Cars \n"
            <<"4 - Add new Ride \n"
            <<"5 - Display Rides Details\n"
            <<"6 - Total Earning of a Car\n"
            <<"7 - Total Earning of all Cars \n"
            <<"-1 - Exit \n";

        cin>>option;
        switch(option){
            case 1:
            {
                first = addNewCar(first);
                break;
            }

            case 2:
            {
                displayCars(first);
                break;
            }

            case 3:
            {
                displayType_2_Cars(first);
                break;
            }

            case 4:
            {
                addNewRide(first);
                break;
            }

            case 5:
            {
                displayRides(first);
                break;
            }

            case 6:
            {
                totalEarningOfCar(first);
                break;
            }

            case 7:
            {
                totalEarningOfAllCars(first);
                break;
            }

            case -1:
            {
                cout<<"Thank you for Using Careem By Sameem Group of Transportations"<<endl;
                break;
            }

            default:
            {
                cout<<"Enter Appropriate Option "<<endl;
            }
            break;
            
        }    
    }while(option!=-1);

return 0;
}