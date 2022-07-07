#include <iostream>
#include <string.h>
using namespace std;

// Defining the Data Structures
struct Coffee
{
    int shopID = 1;
    double price = 400;
    IceCream *nextShop;
    Customer *nextCustomer = NULL;
};

struct IceCream
{
    int shopID = 2;
    double price = 700;
    Pizza *nextShop;
    Customer *nextCustomer = NULL;
};

struct Pizza
{
    int shopID = 3;
    double price = 1200;
    Pizza *nextShop = NULL;
    Customer *nextCustomer;
};

struct Customer
{
    int customerID;
    string customerName;
    string customerOrder;
    double customerBill;
    int age;
    Customer *nextCustomer = NULL;
};

Customer *getCustomer(string order)
{
    if (headCustomer->nextCustomer == NULL && headCustomer->customerOrder == order)
    {
        Customer *p = headCustomer;
        headCustomer = NULL;
        return p;
    }
    else
    {
        Customer *previous = headCustomer;
        Customer *after = NULL;
        Customer *ourCustomer = NULL;
        while ((previous->nextCustomer->customerOrder != order && ourCustomer->customerOrder != order) || ourCustomer->nextCustomer == NULL)
        {
            previous = previous->nextCustomer;
        }

        ourCustomer = previous->nextCustomer;
        after = previous->nextCustomer->nextCustomer;
        ourCustomer->nextCustomer = NULL;
        previous->nextCustomer = after;
        return ourCustomer;
    }
}

// Now making Customer line (Linkedlist)
Customer *headCustomer = NULL; // global pointer for the line
Customer* enqueueCustomer(string customerName, string customerOrder, int age)
{
    Customer *newCustomer = new Customer;

    cout << "Enter Customer Name" << endl;
    cin >> customerName;
    newCustomer->customerName = customerName;

    cout << "Enter your Order " << endl;
    cin >> customerOrder;
    newCustomer->customerOrder = customerOrder;

    cout << "Enter your Age " << endl;
    cin >> age;
    newCustomer->age = age;

    if (newCustomer->customerOrder == "Pizza" || newCustomer->customerOrder == "pizza")
    {
        newCustomer->customerBill = 1200;
    }
    if (newCustomer->customerOrder == "icecream" || newCustomer->customerOrder == "IceCream")
    {
        newCustomer->customerBill = 700;
    }
    if (newCustomer->customerOrder == "coffee" || newCustomer->customerOrder == "Coffee")
    {
        newCustomer->customerBill = 400;
    }

    if (headCustomer == NULL)
    {
        headCustomer = newCustomer;
        newCustomer->nextCustomer = NULL;
        newCustomer->customerID = 1;
        return newCustomer;
    }

    Customer *p = headCustomer;
    while (p->nextCustomer != NULL)
    {
        p = p->nextCustomer;
    }
    p->nextCustomer = newCustomer;
    newCustomer->customerID = p->customerID++;
    newCustomer->nextCustomer = NULL;
    return newCustomer;
}

// Now Considering how the customers should be added to their respective lines
Coffee *coffeeShop = NULL;
IceCream *iceCreamShop = NULL;
Pizza *pizzaShop = NULL;

// coffee -> FIFO (Queue like Manner)
void enqueueCoffeeCustomer()
{
    Customer *ourCustomer = getCustomer("coffee");

    // insertion will be at rear
    if (coffeeShop->nextCustomer == NULL)
    {
        coffeeShop->nextCustomer = ourCustomer;
    }
    else
    {
        Customer *p = coffeeShop->nextCustomer;
        while (p->nextCustomer != NULL)
        {
            p = p->nextCustomer;
        }
        p->nextCustomer = ourCustomer;
    }
}
void dequeueCoffeeCustomer()
{
    // serving will be from front
    if (coffeeShop->nextCustomer == NULL)
    {
        cout << "no customer yet" << endl;
        return;
    }
    else
    {
        Customer *servingCustomer = coffeeShop->nextCustomer;
        coffeeShop->nextCustomer = servingCustomer->nextCustomer;
        delete servingCustomer;
    }
}

// icecream -> PQ (Priority Queue like Manner)
void enqueueIceCreamCustomer()
{
    //    Enqueue will be expensive operation because it will check the priority
    Customer *ourCustomer = getCustomer("icecream");
    

    if (iceCreamShop->nextCustomer == NULL)
    {
        iceCreamShop->nextCustomer = ourCustomer;
    }
    else{
        Customer *lastCustomer = iceCreamShop->nextCustomer;
        while(lastCustomer->nextCustomer!=NULL){
            lastCustomer = lastCustomer->nextCustomer;
        }
        if(lastCustomer->age < ourCustomer->age){
            // Insert at first
            ourCustomer->nextCustomer = iceCreamShop->nextCustomer;
            iceCreamShop->nextCustomer = ourCustomer;
        }
        else{
            // insert at end
            lastCustomer->nextCustomer = ourCustomer;
            ourCustomer->nextCustomer = NULL;
        }
    }
}
void dequeueIceCreamCustomer()
{
    // Dequeue will be a normal operation
    // Rear Deletion
    if (iceCreamShop->nextCustomer == NULL)
    {
        cout << "no customer yet" << endl;
        return;
    }

    else
    {
        Customer *servingCustomer = iceCreamShop->nextCustomer;
        Customer *previousCustomer = iceCreamShop->nextCustomer;
        while (previousCustomer->nextCustomer->nextCustomer != NULL && servingCustomer->nextCustomer != NULL)
        {
            previousCustomer = previousCustomer->nextCustomer;
            servingCustomer = servingCustomer->nextCustomer;
        }
        previousCustomer->nextCustomer = NULL;
        delete servingCustomer;
    }
}

// Pizza -> LIFO (Stack like Manner)
void enqueuePizzaCustomer()
{
    // Rear insertion
    Customer *ourCustomer = getCustomer("pizza");

    // insertion will be at rear
    if (pizzaShop->nextCustomer == NULL)
    {
        pizzaShop->nextCustomer = ourCustomer;
    }
    else
    {
        Customer *p = pizzaShop->nextCustomer;
        while (p->nextCustomer != NULL)
        {
            p = p->nextCustomer;
        }
        p->nextCustomer = ourCustomer;
    }
}
void dequeuePizzaCustomer()
{

    // Rear Deletion
    if (pizzaShop->nextCustomer == NULL)
    {
        cout << "no customer yet" << endl;
        return;
    }

    else
    {
        Customer *servingCustomer = pizzaShop->nextCustomer;
        Customer *previousCustomer = pizzaShop->nextCustomer;
        while (previousCustomer->nextCustomer->nextCustomer != NULL && servingCustomer->nextCustomer != NULL)
        {
            previousCustomer = previousCustomer->nextCustomer;
            servingCustomer = servingCustomer->nextCustomer;
        }
        previousCustomer->nextCustomer = NULL;
        delete servingCustomer;
    }
}

void earningsDisplay(){
    double totalEarningCoffeeShop, totalEarningPizzaShop, totalEarningIceCreamShop, totalEarnings;
    IceCream *currentShop = iceCreamShop;
    while(currentShop->nextCustomer!=NULL){
        totalEarningIceCreamShop += currentShop->price;
    }
    Pizza *currentShop = pizzaShop;
    while (currentShop->nextCustomer != NULL)
    {
        totalEarningPizzaShop += currentShop->price;
    }
    Coffee *currentShop = coffeeShop;
    while (currentShop->nextCustomer != NULL)
    {
        totalEarningCoffeeShop += currentShop->price;
    }

    totalEarnings = totalEarningCoffeeShop + totalEarningIceCreamShop + totalEarningPizzaShop;

    cout << "The Ice Cream Shop " << totalEarningIceCreamShop << endl;
    cout << "The Coffee Shop " << totalEarningCoffeeShop << endl;
    cout << "The Pizza Shop " << totalEarningPizzaShop << endl;

}
int main()
{
    // Making of three shops (Market)
    coffeeShop = new Coffee;
    iceCreamShop = new IceCream;
    pizzaShop = new Pizza;

    // Linking them
    // coffee->icecream->pizza
    coffeeShop->nextShop = iceCreamShop;
    iceCreamShop->nextShop = pizzaShop;
    pizzaShop->nextShop = NULL;

    headCustomer = enqueueCustomer("Shahzaneer", "pizza", 19);
    enqueueCustomer("Aleem", "pizza", 12);
    enqueueCustomer("Rameez", "icecream", 78);

    enqueuePizzaCustomer();
    enqueuePizzaCustomer();
    enqueueIceCreamCustomer();

    earningsDisplay();

    return 0;
}