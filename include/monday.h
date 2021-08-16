void fahrenheitCentigradeConversion(void) {

  while (true){

    int choice;
    std::cout << "Please enter 1 for celsius to fahrenheit and 2 for fahrenheit to celsius \n";
    std::cin >> choice;

    if (choice == 1){
      float celsius, fahrenheit;
      std::cout<<"Enter the Temperature in Celsius: ";
      std::cin>>celsius;
      fahrenheit = ((celsius * 9 / 5) + 32);
      std::cout<<"\nEquivalent Temperature in Fahrenheit: "<<fahrenheit;
      std::cout << std::endl;
      // return 0;
      break;
    }

    else if (choice == 2){
      float fahrenheit, celsius;
      std::cout<<"Enter the Temperature in Fahrenheit: ";
      std::cin>>fahrenheit;
      celsius = ((fahrenheit -32) * 5 / 9);
      std::cout<<"\nEquivalent Temperature in Celsius: "<<celsius;
      std::cout << std::endl;
      // return 0;
      break;
    }

    else{
      std::cout<<"Please try again 1 and 2 are the only valid inputs";
      continue;
    }
  }
}


void selfServiceCheckout(void) {
	std::cout << " - selfServiceCheckout: not yet implemented\n\n";
}

