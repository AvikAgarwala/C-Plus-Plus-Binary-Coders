#include <iostream>
#include <vector>
using namespace std;

class ShoppingSystem
{
    vector<int> priceList;
public:
    void addToCart(int itemPrice)
    {
        priceList.push_back(itemPrice);
    }
    int totalItemPurchased()
    {
        return priceList.size();
    }
    void removeLastPurchasedItem()
    {
        priceList.pop_back();
        priceList.shrink_to_fit();
    }
    int calculateTotalPrice()
    {
        int totalPrice = 0;
        for (int i : priceList)
            totalPrice += i;
        return totalPrice;
    }
    bool isCartEmpty()
    {
        return priceList.empty();
    }
    void removeAllPurchasedElementFromCart()
    {
        priceList.clear();
        priceList.shrink_to_fit();
    }
};

int main()
{
    ShoppingSystem customer1;

    customer1.addToCart(150);
    customer1.addToCart(75);
    customer1.addToCart(95);

    cout << customer1.totalItemPurchased() << endl;
    cout << customer1.calculateTotalPrice() << endl;

    customer1.removeLastPurchasedItem();

    cout << customer1.totalItemPurchased() << endl;
    cout << customer1.calculateTotalPrice() << endl;
    cout << customer1.isCartEmpty() << endl;

    customer1.removeAllPurchasedElementFromCart();

    cout << customer1.isCartEmpty() << endl;
    
    return 0;
}