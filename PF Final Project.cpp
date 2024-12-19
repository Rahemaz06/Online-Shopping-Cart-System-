#include<iostream>
#include <windows.h>
#include<vector>
#include<string>
using namespace std;

struct Product
{
	string name;
	float price;
	int quantity;
};

 ////////Function Prototypes////////
 
void showMainMenu();
void showProductMenu();
void add(vector<Product>& cart);
void display(const vector<Product>& cart);
float calculateTotal(const vector<Product>& cart);
void remove(vector<Product>& cart);
void updateProductQuantity(vector<Product>& cart);

    //////text and background color change/////
    
void setColor(int textColor, int backgroundColor)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, (backgroundColor << 4) | textColor);
}

void clearScreen() 
{
    system("cls"); 
	// Clear the console
}

int main()
{
	setColor(5,7);
	clearScreen();
	
	 vector<Product> cart; 
     char choice;

    do {
        showMainMenu();
        cin >> choice;

        switch (choice) 
		{
            case '1':
                add(cart);  
                break;
            case '2':
                display(cart);  
                break;
            case '3':
                remove(cart);  
                break;
            case '4':
                cout << "          Total Bill: " << calculateTotal(cart) << endl;  
                break;
            case '5':
                updateProductQuantity(cart); 
                break;
            case '6':
                cout << "\n          Thanks for shopping! Goodbye!" << endl;  
				// Exit message
                break;
            default:
                cout << "          Invalid choice! Please try again." << endl;
        }
    } while (choice != '6');  
	
	// Continue until the user chooses to exit

    return 0;
}

////////////////////////Main Menu///////////
void showMainMenu() 
{
    cout << "\n         ************** Welcome to Online Shopping **************"<<endl;
    cout << "\n          1. Show product menu "<<endl;
    cout << "          2. View Cart "<<endl;
    cout << "          3. Remove Product from Cart "<<endl;
    cout << "          4. View Total Bill "<<endl;
    cout << "          5. Update Product Quantity "<<endl;
    cout << "          6. Exit "<<endl;
    cout << "\n          Enter your choice: ";
}

/////////////Product Menu////////////
void showProductMenu()
{
    cout << "\n          ************** Choose a Product **************"<<endl;
    cout << "\n          1. Mobile Phones "<<endl;
    cout << "          2. Laptops "<<endl;
    cout << "          3. Headphones "<<endl;
    cout << "          4. Smart Watches "<<endl;
    cout << "          5. Go Back to Main Menu "<<endl;
}

void add(vector<Product>& cart) 
{
    char choice;
    showProductMenu();
    cout << "\n          Enter your choice: ";
    cin >> choice;

    Product newProduct;
    int quantity;

    switch (choice) {
    	
    	//////////MOBILES///////
    	
        case '1':  
            cout<<"\n          **************Mobile Details************** "<<endl;
		    cout<<"\n          1. Apple : 100,000 "<<endl;
		    cout<<"          2. Nokia : 80,000 "<<endl;
		    cout<<"          3. Vivo : 60,000 "<<endl;
		    cout<<"          4. Samsung : 90,000 "<<endl;
		    cout<<"\n          Please enter your choice: "; 
            cin >> choice;
            if (choice == '1') 
			{
                newProduct.name = "Apple";
                newProduct.price = 100000;
            } 
			else if (choice == '2') 
			{
                newProduct.name = "Nokia";
                newProduct.price = 80000;
            } 
			else if (choice == '3')
			{
				newProduct.name = "Vivo";
				newProduct.price = 60000;
			}
			else if (choice == '4')
			{
				newProduct.name = "Samsung";
				newProduct.price = 90000;
			}
			else 
			{
                cout << "          Invalid choice."<<endl;
                return;
            }
            break;

///////////////LAPTOPS/////////////

        case '2':  
            cout<<"\n          **************Laptop Details**************"<<endl;
		    cout<<"\n          1. Apple : 150,000 "<<endl;
		    cout<<"          2. HP : 100,000 "<<endl;
		    cout<<"          3. Dell : 90,000 "<<endl;
		    cout<<"          4. Lenovo : 95,000 "<<endl;
		    cout<<"\n          Please enter your choice: ";
            cin >> choice;
            if (choice == '1') 
			{
                newProduct.name = "Apple";
                newProduct.price = 150000;
            } 
			else if (choice == '2') 
			{
                newProduct.name = "HP";
                newProduct.price = 100000;
            } 
            else if (choice == '3')
            {
            	newProduct.name = "Dell";
            	newProduct.price = 90000;
			}
			else if (choice == '4')
			{
				newProduct.name = "Lenovo";
				newProduct.price = 95000;
			}
			else 
			{
                cout << "          Invalid choice."<<endl;
                return;
            }
            break;

/////////////HEADPHONES///////////////

        case '3':  
            cout<<"\n          **************Headphones Details**************"<<endl;
		    cout<<"\n          1. Apple : 10,000 "<<endl;
		    cout<<"          2. Sony : 8,000 "<<endl;
		    cout<<"          3. Audionic : 6,000 "<<endl;
		    cout<<"          4. Marshall : 12,000 "<<endl;
		    cout<<"\n          Please enter your choice: ";
            cin >> choice;
            if (choice == '1') 
			{
                newProduct.name = "Apple";
                newProduct.price = 10000;
            } 
			else if (choice == '2') 
			{
                newProduct.name = "Sony";
                newProduct.price = 8000;
            } 
            else if (choice == '3')
            {
            	newProduct.name = "Audionic";
            	newProduct.price = 6000;
			}
			else if (choice == '4')
			{
				newProduct.name = "Marshall";
				newProduct.price = 12000;
			}
			else 
			{
                cout << "          Invalid choice."<<endl;
                return;
            }
            break;

///////SMARTWATCHES///////////

        case '4': 
            cout<<"\n          **************Smart Watches Details**************"<<endl;
		    cout<<"\n          1. Apple : 90,000 "<<endl;
		    cout<<"          2. Huawei : 50,000 "<<endl;
		    cout<<"          3. Samsung : 85,000 "<<endl;
		    cout<<"          4. Sveston : 20,000 "<<endl;
		    cout<<"\n          Please enter your choice: ";
            cin >> choice;
            if (choice == '1') 
			{
                newProduct.name = "Apple";
                newProduct.price = 90000;
            } 
			else if (choice == '2') 
			{
                newProduct.name = "Huawei";
                newProduct.price = 50000;
            } 
            else if (choice == '3') 
			{
                newProduct.name = "Samsung";
                newProduct.price = 85000;
            } 
            else if (choice == '4') 
			{
                newProduct.name = "Sveston";
                newProduct.price = 20000;
            } 
			else 
			{
                cout << "          Invalid choice."<<endl;
                return;
            }
            break;

        case '5':
            return;  
		
		// Go back to the main menu/////

        default:
            cout << "\n          Invalid choice. Returning to the main menu."<<endl;
            return;
    }

    cout << "          Enter Quantity: ";
    cin >> quantity;
    newProduct.quantity = quantity;  
    
	/////Set the quantity /////
	
    cart.push_back(newProduct); 
	 // Add the selected product to the cart//////
	 
    cout <<"          "<< newProduct.name << " Added to the cart with quantity: " << newProduct.quantity << endl;
}

//////////Display Cart////////

void display(const vector<Product>& cart) 
{
    if (cart.empty()) 
	{
        cout << "          Your cart is empty. "<<endl;
    } 
	else
	{
        cout << "\n          Your Cart: "<<endl;
        for (const auto& product : cart) 
		{
            cout <<"          "<< product.name << " - " << product.price << " x " << product.quantity << endl;
        }
    }
}

// Calculate the total price////////

float calculateTotal(const vector<Product>& cart) 
{
    float total = 0;
    for (const auto& product : cart) 
	{
        total += product.price * product.quantity;
    }
    return total;
}

///////Remove Product//////////

void remove(vector<Product>& cart) 
{
    if (cart.empty()) 
	{
        cout << "          Your cart is empty. Nothing to remove."<<endl;
        return;
    }
    string productName;
    cout << "          Enter the name of the product you want to remove: ";
    
    cin.ignore(); // Discards the newline character left in the input buffer////

    getline(cin, productName);

    bool found = false;
    for (auto it = cart.begin(); it != cart.end(); ++it) 
	{
        if (it->name == productName) 
		{
            cart.erase(it);
            cout <<"          "<< productName << " has been removed from the cart."<<endl;
            found = true;
            break;
        }
    }

    if (!found) 
	{
        cout << "          Product not found in the cart."<<endl;
    }
}

/////Update Product Quantity////////

void updateProductQuantity(vector<Product>& cart) 
{
    if (cart.empty()) 
	{
        cout << "          Your cart is empty. Nothing to update."<<endl;
        return;
    }

    string productName;
    cout << "          Enter the name of the product you want to update: ";
    cin.ignore(); 
    
    getline(cin, productName);
    bool found = false;
    for (auto& product : cart) 
	{
        if (product.name == productName) 
		{
            found = true;
            cout << "          Enter new quantity for " << product.name << " : ";
            cin >> product.quantity;
            cout << "          Quantity updated to " << product.quantity << endl;
            break;
        }
    }

    if (!found) 
	{
        cout << "          Product not found in the cart."<<endl;
    }
}

