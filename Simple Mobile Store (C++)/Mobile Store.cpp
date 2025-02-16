// Team : ( Mohamed Abbas - Youssef Ahmed - Abdallah Ahmed - Farouk Ibrahim - Omar Hazem )
// ID :     (     42310258       -   42310385     -    42310293      -     42310285     -   42310378   )
// Group : E3
// Project : A Mobile Store

                                                                             // Mobile Store

                                                                            // Program

#include <iostream>
using namespace std;

// Greeting Function     ( Mohamed Abbas )

void Greeting() {
    cout << "                                  **********WELCOME TO OUR MOBILE STORE**********" << endl;
}

// Customer Informations Function     ( Mohamed Abbas )

void CustomerInformations() {

    string Name;
    float Day, Month, Year, Gender, ID, X;

    cout << " Please Enter Your Name : ";
    cin >> Name;
    cout << " What's Your Gender" << endl << " Enter ' 1 ' for Male or ' 2 ' for Female : ";
    cin >> Gender;
    if (Gender == 1) {
        cout << " Welcome Sir " << Name << endl;
    }
    else if (Gender == 2) {
        cout << " Welcome Madam " << Name << endl;
    }
    else
        cout << " Invalid" << endl;

    cout << " Enter Birth Day : ";
    cin >> Day;
    cout << " Enter Birth Month : ";
    cin >> Month;
    cout << " Enter Birth Year : ";
    cin >> Year;
    cout << " Your Birth Date is : " << Day << " / " << Month << " / " << Year << endl;
    cout << " Enter Your National ID Number : ";
    cin >> ID;
    cout << " Please Choose Your City :" << endl << " ( ENTER 1 FOR : Cairo  /  ENTER 2 FOR :  Giza  /  ENTER 3 FOR : Alexandria  /  ENTER 4 FOR : Suez ) " << endl;
    cin >> X;
    if (X == 1) {
        cout << " Welcome To Our Branch In Cairo, Please Choose A Brand " << endl;
    }
    else if (X == 2) {
        cout << " Welcome To Our Branch In Giza, Please Choose A Brand " << endl;
    }
    else if (X == 3) {
        cout << " Welcome To Our Branch In Alexandria, Please Choose A Brand " << endl;
    }
    else if (X == 4) {
        cout << " Welcome To Our Branch In Suez, Please Choose A Brand " << endl;
    }
    else
        cout << " Invalid ";
}

// Functions To Return The Price Of The Choosed Phone     ( Youssef / Abdallah / Farouk / Omar)

int Price_1(int Price1, int Price2, int Price3, int Price4, int Price5, int Price6) {
    return Price1;
}

int Price_2(int Price1, int Price2, int Price3, int Price4, int Price5, int Price6) {
    return Price2;
}

int Price_3(int Price1, int Price2, int Price3, int Price4, int Price5, int Price6) {
    return Price3;
}

int Price_4(int Price1, int Price2, int Price3, int Price4, int Price5, int Price6) {
    return Price4;
}

int Price_5(int Price1, int Price2, int Price3, int Price4, int Price5, int Price6) {
    return Price5;
}

int Price_6(int Price1, int Price2, int Price3, int Price4, int Price5, int Price6) {
    return Price6;
}

// Zero Down Payment Function     ( Mohamed Abbas )

int ZeroDownPayment(int x) {
    return x - 6500;
}

// Main Function     ( TEAM )

int main()
{

    // Declarations     ( TEAM )

    int X    /* A Declared Variable For Choosing A Brand */,

        A    /* A Declared Variable For Choosing A Seris For Samsung Brand */,

        B    /* A Declared Variable For Choosing A Model From A Choosed Series For Samsung Brand */,

        C    /* A Declared Variable For Choosing An Apple Phone */,

        Price = 0    /* A Temporarily Initialized Variable For Prices */,

        Phone = 6    /* An Initialized Variable For A Switch Case For Redmi Brand */,

        Approval    /* A Declared Variable For User's Payment Choice */,

        phone = 6    /* An Initialized Variable For A Switch Case For Huawei Brand */,

        Password    /* A Declared Variable For User's Visa Card Password */;

    // Arrays     ( TEAM )

    string SamsungSeries[2] = { "Samsung Galaxy Z","Samsung Galaxy A" };    // ( Mohamed Abbas )

    string SamsungGalaxyZModels[2] = { "Samsung Galaxy Fold","Samsung Galaxy Z Flip" };    // ( Mohamed Abbas )

    int SamsungGalaxyZPrices[2] = { 5000,20000 };    // ( Mohamed Abbas )

    string SamsungGalaxyAModels[2] = { "Samsung Galaxy A52","Samsung Galaxy A72" };    // ( Mohamed Abbas )

    int SamsungGalaxyAPrices[2] = { 10000,15000 };    // ( Mohamed Abbas )

    string ApplePhones[6] = { "Iphone 12 Pro","Iphone 13 Pro","Iphone 14 Pro","Iphone 15 Pro", "Iphone 11","Iphone 11 Pro"};    // ( Youssef Ahmed )

    // Greeting     ( Mohamed Abbas )

    Greeting();

    // Customer Informations     ( Mohamed Abbas )

    CustomerInformations();

    // Phones     ( TEAM )

    cout << " Enter 1 For ' Samsung '  /  Enter 2 For ' Apple '  /  Enter 3 For ' Huawei '  /  Enter 4 For ' OPPO '  /  Enter 5 For ' Redmi '" << endl;

    cin >> X;

    // Samsung     ( Mohamed Abbas )

    if (X == 1) {

        cout << "please Choose a Series :" << endl;
        cout << " Enter 1 For ' " << SamsungSeries[0] << " '  /  Enter 2 For ' " << SamsungSeries[1] << endl;
        cin >> A;

        if (A == 1) {

            cout << SamsungGalaxyZModels[0] << endl << " Colors : Black  -  Silver    /    CPU Type : Octa Core    /    CPU Speed : 2.8GHz, 2.4GHz, 1.7GHz"
                << endl << endl << " Resolution : 720 x 1680(HD+)" << " Storage (GB) : 512    /    Memory (GB) : 12    /    Battery Capacity : 4380 mAh    /    OS : Android"
                << endl << endl << " Price = " << SamsungGalaxyZPrices[0] << " L.E" << endl << endl << endl;
            cout << SamsungGalaxyZModels[1] << endl << " Colors : Gold  -  Black  -  Purple    /    CPU Type : Octa Core    /    CPU Speed : 2.8GHz, 2.4GHz, 1.7GHz"
                << endl << endl << " Resolution : 1080 x 2636 (FHD+)" << " Storage (GB) : 256    /    Meomory (GB) : 8    /    Battery Capacity : 3300 mAh    /    OS : Android"
                << endl << endl << " Price = " << SamsungGalaxyZPrices[1] << " L.E" << endl << endl << endl;
            cout << "Enter 1 For ' " << SamsungGalaxyZModels[0] << " '  /  Enter 2 For ' " << SamsungGalaxyZModels[1] << endl;
            cin >> B;

            if (B == 1) {

                cout << " You Choosed " << SamsungGalaxyZModels[0] << " For " << SamsungGalaxyZPrices[0] << " L.E" << endl;
                Price = SamsungGalaxyZPrices[0];
            }

            else if (B == 2) {

                cout << " You Choosed " << SamsungGalaxyZModels[1] << " For " << SamsungGalaxyZPrices[1] << " L.E" << endl;
                Price = SamsungGalaxyZPrices[1];
            }

            else
                cout << " Invalid";
        }
        else if (A == 2) {

            cout << SamsungGalaxyAModels[0] << endl << " Colors : Black  -  Silver    /    CPU Type : Octa Core    /    CPU Speed : 2.8GHz, 2.4GHz, 1.7GHz"
                << endl << endl << " Resolution : 2400 x 1080 pixels" << " Storage (GB) : 128    /    Memory (GB) : 6    /    Battery Capacity : 4500 mAh    /    OS : Android 11"
                << endl << endl << " Price = " << SamsungGalaxyAPrices[0] << " L.E" << endl << endl << endl;
            cout << SamsungGalaxyAModels[1] << endl << " Colors : Blue  -  Black    /    CPU Type : Octa Core    /    Resolution : 2400 x 1080 pixels"
                << endl << endl << " Storage (GB) : 128    /    Meomory (GB) : 8    /    Battery Capacity : 5000 mAh    /    OS : Android 11"
                << endl << endl << " Price = " << SamsungGalaxyAPrices[1] << " L.E" << endl << endl << endl;
            cout << "Enter 1 For ' " << SamsungGalaxyAModels[0] << " '  /  Enter 2 For ' " << SamsungGalaxyAModels[1] << endl;
            cin >> B;

            if (B == 1) {

                cout << " You Choosed " << SamsungGalaxyAModels[0] << " For " << SamsungGalaxyAPrices[0] << " L.E" << endl;
                Price = SamsungGalaxyAPrices[0];
            }

            else if (B == 2) {

                cout << " You Choosed " << SamsungGalaxyAModels[1] << " For " << SamsungGalaxyAPrices[1] << " L.E" << endl;
                Price = SamsungGalaxyAPrices[1];
            }

            else
                cout << " Invalid !";
        }
        else
            cout << " Invalid !";
    }

    // Apple     ( Youssef Ahmed )

    else if (X == 2) {

        cout << " Enter 1 For ' " << ApplePhones[0] << " '  /  Enter 2 For ' " << ApplePhones[1] << " '  /  Enter 3 For ' " << ApplePhones[2] << " '  /  Enter 4 For ' " << ApplePhones[3] << " '  /  Enter 5 For ' " << ApplePhones[4] << " '  /  Enter 6 For ' " << ApplePhones[5] << endl;

        cin >> C;

        if (C == 1) {
            Price = Price_1(30000, 40000, 60000, 100000, 20000, 10000);
            cout << ApplePhones[0] << endl << " Colors : Grey  -  Silver \n Capacity : 256 GB \n Size and Weight :- \n Width : 71.5 mm \n Length : 146.7 mm \n Depth : 7.4 mm \n Weight : 187 g \n OS : iOS 14" << endl;
            cout << " It's Price = " << Price_1(30000, 40000, 60000, 100000, 20000, 10000) << " L.E";
        }

        else if (C == 2) {
            Price = Price_2(30000, 40000, 60000, 100000, 20000, 10000);
            cout << ApplePhones[1] << endl << " Colors : Grey  -  Silver \n Capacity : 128 GB \n Size and Weight :- \n Width : 71.5 mm \n Length : 146.7 mm \n Depth : 7.65 mm \n Weight : 203 g \n OS : iOS 15" << endl;
            cout << " It's Price = " << Price_2(30000, 40000, 60000, 100000, 20000, 10000) << " L.E";
        }

        else if (C == 3) {
            Price = Price_3(30000, 40000, 60000, 100000, 20000, 10000);
            cout << ApplePhones[2] << endl << " Colors : Black  -  Silver \n Capacity : 128 GB \n Size and Weight :- \n Width : 77.6 mm \n Length : 160.7 mm \n Depth : 7.85 mm \n Weight : 240 g \n OS : iOS 16" << endl;
            cout << " It's Price = " << Price_3(30000, 40000, 60000, 100000, 20000, 10000) << " L.E";
        }

        else if (C == 4) {
            Price = Price_4(30000, 40000, 60000, 100000, 20000, 10000);
            cout << ApplePhones[3] << endl << " Colors : Black  -  Silver \n Capacity : 128 GB \n Size and Weight :- \n Width : 70.6 mm \n Length : 146.6 mm \n Depth : 8.3 mm \n Weight : 187 g \n OS : iOS 17" << endl;
            cout << " It's Price = " << Price_4(30000, 40000, 60000, 100000, 20000, 10000) << " L.E";
        }
        else if (C == 5) {
            Price = Price_5(30000, 40000, 60000, 100000, 20000, 10000);
            cout << ApplePhones[4] << endl << " Colors : Black  -  Silver \n Capacity : 128 GB \n Size and Weight :- \n Width : 73.6 mm \n Length : 143.6 mm \n Depth : 8.7 mm \n Weight : 188 g \n OS : iOS 13" << endl;
            cout << " It's Price = " << Price_5(30000, 40000, 60000, 100000, 20000, 10000) << " L.E";

        }
        else if (C == 6) {
            Price = Price_6(30000, 40000, 60000, 100000, 20000, 10000);
            cout << ApplePhones[5] << endl << " Colors : Black  -  Silver \n Capacity : 64 GB \n Size and Weight :- \n Width : 78.6 mm \n Length : 145.6 mm \n Depth : 8.9 mm \n Weight : 208 g \n OS : iOS 12" << endl;
            cout << " It's Price = " << Price_6(30000, 40000, 60000, 100000, 20000, 10000) << " L.E";
        }
        else
            cout << " Invalid !";
    }

    // Huawei     ( Omar Hazem )

    else if (X == 3) {
        cout << " 1- Hwawei Nova 9\n 2- Hwawei Nova 9 SE\n3- Hwawei Nova Y61\n4- Hwawei Nova Y 70\n5-Hwawei Nova Y 90\n6-Hwawei nova 11i " << endl;
        cout << "Please Enter A Number Of Any Phone" << endl;
        cin >> phone;
        switch (phone) {
        case 1:

            Price = Price_1(30000, 40000, 60000, 100000, 20000, 10000);
            cout << "The Phone Name : Hwawei Nova 9 \n Size : 128 GB\n RAM : 8 GB\n Charge : 4300 mAh\n Screen : 6.57 inch\n OS : Android 12\n Rear camera : 50+8+2+2 Mb\n Front Camera 32 Mb\n Processor : SnapDragon 778G"
                << endl << "Its price = " << Price_1(30000, 40000, 60000, 100000, 20000, 10000) << endl;
            break;
        case 2:

            Price = Price_2(30000, 40000, 60000, 100000, 20000, 10000);
            cout << "The Phone Name : Hwawei Nova 9 \n Size : 128 GB\n RAM : 8 GB\n Charge : 4300 mAh\n Screen : 6.57 inch\n OS : Android 12\n Rear camera : 50 + 8 + 2 + 2 Mb\n Front Camera 32 Mb\n Processor : SnapDragon 778G"
                << endl << "Its price = " << Price_2(30000, 40000, 60000, 100000, 20000, 10000) << endl;
            break;
        case 3:

            Price = Price_3(30000, 40000, 60000, 100000, 20000, 10000);
            cout << "The Phone Name : Hwawei Nova 9SE\n Size : 128 GB\n RAM : 8 GB\n Charge : 4000 mAh\n Screen : 6.78 inch\n Processor : SnapDragon 680\n Rear camera : 108+8+2+2 Mb\n Front Camera : 16 Mb"
                << endl << "Its price = " << Price_3(30000, 40000, 60000, 100000, 20000, 10000) << endl;
            break;
        case 4:

            Price = Price_4(30000, 40000, 60000, 100000, 20000, 10000);
            cout << " The Phone Name : Hwawei Y 61\n Size : 64 GB\n RAM : 8 GB\n Charge : 5000 mAh\n Screen : 6.52 inch \n Proceessor : Kirin 710\n Rear camera : 50+2+2 Mb\n Front camera : 5 Mb\n OS : Android 12"
                << endl << "Its price = " << Price_4(30000, 40000, 60000, 100000, 20000, 10000) << endl;
            break;
        case 5:

            Price = Price_5(30000, 40000, 60000, 100000, 20000, 10000);
            cout << "The phone Name : Hwawei Y 90\n Size : 128 GB\n Ram : 4 GB\n Processor : SnapDragon 680\n Rear camera : 50+2+2 Mb\n Front camera : 8 Mb\n Charge : 5000 mAh "
                << endl << "Its price = " << Price_5(30000, 40000, 60000, 100000, 20000, 10000) << endl;
            break;
        case 6:

            Price = Price_6(30000, 40000, 60000, 100000, 20000, 10000);

            cout << "The phone Name : Hwawei Y 11i\n size : 128 GB\n Ram : 8 GB\nprocessor : snapdragon 680\nRear camera : 48+2 Mb\nfront camera : 16 Mb\n charge : 5000 mAh"
                << endl << "Its price = " << Price_6(30000, 40000, 60000, 100000, 20000, 10000) << endl;
            break;
        default:
            cout << "you didn't choose any phone";
        }
    }

    // OPPO     ( Abdallah Ahmed )
    else if (X == 4) {

        cout << "1_ OPPO Reno 2F      5500 L.E" << endl << "2_ OPPO Reno 10 5G   17000 L.E" << endl << "3_ OPPO Reno 7  4G      12000 L.E"
            << endl << "4_ OPPO Reno 6         11000 L.E" << endl;
        cout << " Please Enter A Number To Choose" << endl;
        cin >> X;

        if (X == 1) {

            Price = Price_1(5500, 17000, 12000, 11000, 6500, 8000);
            cout << " Size : 128 GB \n RAM : 8 GB \n Battery : 4000 mAh \n Screen : 6.5\n OS : Andriod 0.9 \n Rear Camera : 28+8+2+2 mb \n Front Camera : 16 mb \n Processor : mediatik helio p7"
                << endl << " You Choosed ' OPPO Reno 2F ' " << endl << "Its price = " << Price_1(5500, 17000, 12000, 11000, 6500, 8000) << endl;
        }

        else if (X == 2) {

            Price = Price_2(5500, 17000, 12000, 11000, 6500, 8000);
            cout << " Size : 256 GB \n RAM : 8 GB \n Battery : 5000 mAh \n Screen: 6.7\n OS : Android 13 \n Rear Camera : 64+32+8 mb \n Front Camera : 32 mb \n Processor : DIMENSITY 7050"
                << endl << " You Choosed ' OPPO Reno 10 5G ' " << endl << "Its price = " << Price_2(5500, 17000, 12000, 11000, 6500, 8000) << endl;
        }

        else if (X == 3) {

            Price = Price_3(5500, 17000, 12000, 11000, 6500, 8000);
            cout << " Size : 256 / 128 GB \n RAM : 8 GB \n Battery : 4500 mAh \n Screen : 6.43 \n OS : Android 11 \n Rear Camera : 64+2+2 mb \n Front Camera : 32 mb \n Processor : SnapDragon 680"
                << endl << " You Choosed ' OPPO Reno 7 4G ' " << endl << "Its price = " << Price_3(5500, 17000, 12000, 11000, 6500, 8000) << endl;
        }

        else if (X == 4) {

            Price = Price_4(5500, 17000, 12000, 11000, 6500, 8000);
            cout << " Size :128 GB \n RAM : 8 GB \n Battery : 4310 mAh \n Screen : 6.4 \n OS : Android 11 \n Rear Camera : 64+8+2 mb \n Front Camera :44 mb\n Processor : SnapDragon 720"
                << endl << " You Choosed ' OPPO Reno ' 6 " << endl << "Its price = " << Price_4(5500, 17000, 12000, 11000, 6500, 8000) << endl;
        }

        else if (X == 5){

            Price = Price_5(5500, 17000, 12000, 11000, 6500, 8000);
            cout << "4GB RAM\n 128GB Storage\n5000 mAh Battery \n33WSuperFocusCharging\n  6.56-inch HD Screen Waterdrop 90Hz AI\n Rear Camera 50MP" << endl << "You Choosed 'OPPO a38' "
                << endl << "Its price = " << Price_5(5500, 17000, 12000, 11000, 6500, 8000) << endl;
        }

        else if (X == 6){

            Price = Price_6(5500, 17000, 12000, 11000, 6500, 8000);
            cout << " 256GB \n  8GB RAM \n1080 x 2400 pixels\nAndroid 13\n  SnapDragon 680\n camera:50 +2\n 5000mAh" << endl << " you choosed ' OPPO a78' "
                << endl << "Its price = " << Price_6(5500, 17000, 12000, 11000, 6500, 8000) << endl;
        }

        else
            cout << " Invalid !" << endl;
    }

    // Redmi     ( Farouk Ibrahim )

    else if (X == 5) {

        cout << "1-redmi note 8\n2-redmi note 10\n3-redmi note 12\n4-redmi not 12pro 4G";
        cout << "\n\nplease enter number of any phone ";
        cin >> Phone;
        switch (Phone) {
        case 1:
            Price = Price_1(2650, 3000, 8300, 11500, 28000, 33000);
            cout << "the phone name :redmi note 8\nsize :64 GB\nRAM :4 GRam\ncharge:4000mA\nScreen :6.3inch\nAndroid 11\nRear camera 48+8+2+2Mb\nfront camera 13Mb\nprocessor :helio g 85 "
                << endl << "Its price = " << Price_1(2650, 3000, 8300, 11500, 28000, 33000) << endl;
            break;
        case 2:
            Price = Price_2(2650, 3000, 8300, 11500, 28000, 33000);
            cout << "the phone name :redmi note 10\nsize :128 GB\nRAM :4 GRam\ncharge:5000mA\nScreen :6.43inch\nAndroid 11\nRear camera 48+8+2+2Mb\nfront camera 13Mb\nprocessor :snapdragon 678"
                << endl << "Its price = " << Price_2(2650, 3000, 8300, 11500, 28000, 33000) << endl;
            break;
        case 3:
            Price = Price_3(2650, 3000, 8300, 11500, 28000, 33000);
            cout << "the phone name  :redmi note 12\nsize :128 GB\nRaM :8Gram\ncharge :5000mA\nscreen :6.67 inch\nprocessor :snapdragon 685\nRear camera :50+8+2Mb\nfront camera 13Mb \nAndroid 13"
                << endl << "Its price = " << Price_3(2650, 3000, 8300, 11500, 28000, 33000) << endl;
            break;
        case 4:
            Price = Price_4(2650, 3000, 8300, 11500, 28000, 33000);
            cout << "the phone name  :redmi note 12 pro 4G\nsize :256 GB\nRaM :8Gram\ncharge :5000\nAndroid :13\nprocessor snapdragon 732\nscrean :6.67ench\nRear camera 108+8+2+2Mb\nfront camera 16Mb"
                << endl << "Its price = " << Price_4(2650, 3000, 8300, 11500, 28000, 33000) << endl;
            break;
        case 5:
            Price = Price_5(2650, 3000, 8300, 11500, 28000, 33000);
            cout << "the phone name  :rebmi 13\nsize :128/256/512GB\nRam :8/12Gram\ncharge : 4500mA\nAndroid :13\nprocessor snapdragon 8 Gen\nscrean :6.36ench\nRear camera 12+10+50Mb\nfront camera 32"
                << endl << "Its price = " << Price_5(2650, 3000, 8300, 11500, 28000, 33000) << endl;
            break;
        case 6:
            Price = Price_6(2650, 3000, 8300, 11500, 28000, 33000);
            cout << "the phone name  :redmi 13 pro\nsize :128/256/512GB\nRam :8/12\ncharge :4820mA\nAndroid. :13\nprocessor snapdragon 8 Gen\nscrean :6.73 ench\nRear camera 50+50+50,3Mb\nfront camera 32Mb"
                << endl << "Its price = " << Price_6(2650, 3000, 8300, 11500, 28000, 33000) << endl;
            break;
        default:
            cout << "you didn't choose any phone";
        }
    }
    else
        cout << " Invalid";

    // Payment     ( Mohamed Abbas )

    cout << " You Have To Pay " << Price << " L.E" << endl;
    cout << " Please Choose Your Method Of Payment :-" << endl << " For ' CASH ' Enter (1)"
        << endl << " For ' VISA ' Enter (2)" << endl << " For PAY ' OVER 48 MONTHS ' Enter (3)"
        << endl << " For ' ZERO DOWN PAYMENT ' Enter (4)" << endl;
    cin >> X;
    if (X == 1) {

        cout << " Our Dear Customer, We Have To Inform You That You Are Going To Pay Cash" << endl << " Do You Want To Continue ?"
            << endl << " Press (1) If ' YES '" << endl << " Press (2) If ' NO '" << endl;
        cin >> Approval;

        if (Approval == 1) {

            cout << " Our Dear Customer, Your Choice To Pay Cash Is Successful" << " You Paid " << Price << " L.E"
                << endl << " Congratulatios On Your New Phone " << endl << " We Are Waiting For You To Come Back Soon !"
                << endl << " Have A Nice Day :-)";
        }
        else
            cout << " Payment Is Cancelled !";
    }
    else if (X == 2) {

        cout << " Our Dear Customer, We Have To Inform You That You Will Have To Pay ' 3000 L.E ' Before Paying By Your VISA Card"
            << endl << " Do You Want To Continue ?" << endl << " Press (1) If ' YES '" << endl << " Press (2) If ' NO '" << endl;
        cin >> Approval;

        if (Approval == 1) {

            cout << " 3000 L.E Were Paid Successfuly" << endl;
            cout << " Please Enter Your Visa Card Password : ";
            cin >> Password;
            cout << " Our Dear Customer, Your Choice To Pay VISA Is Successful" << " You Paid " << Price << " L.E"
                << endl << " Congratulatios On Your New Phone " << endl << " We Are Waiting For You To Come Back Soon !"
                << endl << " Have A Nice Day :-)";
        }
        else
            cout << " Payment Is Cancelled !";
    }

    else if (X == 3) {

        cout << " Our Dear Customer, We Have To Inform You That You Will Have To Pay ' 3000 L.E ' As An Installment Advance"
            << endl << " Do You Want To Continue ?" << endl << " Press (1) If ' YES '" << endl << " Press (2) If ' NO '" << endl;
        cin >> Approval;

        if (Approval == 1) {

            cout << " Our Dear Customer, Your Choice To Pay OVER 48 MONTHS Is Successful" << " You Paid " << Price << " L.E"
                << endl << " Congratulatios On Your New Phone " << endl << " We Are Waiting For You To Come Back Soon !"
                << endl << " Have A Nice Day :-)";
        }
        else
            cout << " Payment Is Cancelled !";
    }
    else if (X == 4) {

        cout << " Our Dear Customer, We Have To Inform You That You Will Choose Zero Down Payment"
            << endl << " Do You Want To Continue ?" << endl << " Press (1) If ' YES '" << endl << " Press (2) If ' NO '" << endl;
        cin >> Approval;

        if (Approval == 1) {

            cout << " Our Dear Customer, Your Choice Of ZERO DOWN PAYMENT Is Successful" << " You Paid " << ZeroDownPayment(Price)
                << " L.E" << endl << " Congratulatios On Your New Phone " << endl << " We Are Waiting For You To Come Back Soon !"
                << endl << " Have A Nice Day :-)";
        }
        else
            cout << " Payment Is Cancelled !";
    }
    else
        cout << " Invalid !";

    return 0;
}