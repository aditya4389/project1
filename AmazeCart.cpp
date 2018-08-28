#include<bits/stdc++.h>

using namespace std;

//vector< vector<string> > details;

int main()
{
	int choice;
	string product_name;
	string price,quantity;
	string category,purchase_date,expiry_date;
	cout<<"Welcome To AmazeCart\n";
//	cout<<"Select an option from the following\n"
//	cout<<"1) List 2) Insert 3) Exit\n"
//	cin>>choice;
	do
	{
	cout<<"Select an option from the following to continue\n";
	cout<<" 1) List 2)Insert 3) Exit\n";
	cin>>choice;
	int count=0,sno=1;;
		switch(choice)
		{	case 1: {
						std::string item_name;
						std::ifstream nameFileout;

						nameFileout.open("input.txt");
						while (nameFileout >> item_name)
						{
							if(count==0)
							{
								cout<<"\nThe product number is: "<<sno;
								cout<<"\n";
							}
    						std::cout << item_name<<"\n";
    						count++;
    						if(count==6)
    						{
    							count==0;
    							sno++;
							}
						}
nameFileout.close();
			break;
		}
			case 2: { 
			vector<string> ecom;
			cout<<"Enter the following details to complete the process of adding your product into the list\n";
			cout<<"Enter the Product Name:  ";
			cin>>product_name;
			ecom.push_back(product_name);
			cout<<"\nEnter the Price of the product:  ";
			cin>>price;
			ecom.push_back(price);
			cout<<"\nEnter the Product category:  ";
			cin>>category;
			ecom.push_back(category);
			cout<<"\nEnter the Quantity of the product:  ";
			cin>>quantity;
			ecom.push_back(quantity);
			cout<<"\nEnter the Purchase_date:  ";
			cin>>purchase_date;
			ecom.push_back(purchase_date);
			cout<<"\nEnter the Expiry_date:  ";
			cin>>expiry_date;
			ecom.push_back(expiry_date);
			
			std::ofstream output_file("./input.txt",ios::app);
    		std::ostream_iterator<std::string> output_iterator(output_file, "\n");
    		std::copy(ecom.begin(), ecom.end(), output_iterator);
			
			//details.push_back(ecom);
			cout<<"\nThank you for storing your product at AmazeCart.\n";
				break;
			}
			case 3:{
				break;
			}
	    	default:{
	    		cout<<"please enter a valid number\n";
				break;
			}
		}
	}while(choice!=3);
	cout<<"Thank You, you've been exited\n";
	
	return 0;
}
