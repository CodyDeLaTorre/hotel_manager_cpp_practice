#include <iostream>
using namespace std;

int main()
{
    int quant;
    int choice;
    // Quantity
    int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshake = 0;
    // Sold
    int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake = 0;
    // Total amounts
    int total_rooms = 0, total_pasta = 0, total_burger = 0, total_noodles = 0, total_shake = 0;

    cout << "\n\t Quantity of items we have";
    cout << "\n Rooms Available: ";
    cin >> Qrooms;
    cout << "\n Quantity of Pasta: ";
    cin >> Qpasta;
    cout << "\n Quantity of Burgers: ";
    cin >> Qburger;
    cout << "\n Quantity of Noodles: ";
    cin >> Qnoodles;
    cout << "\n Quantity of Shakes: ";
    cin >> Qshake;

m:
    cout << "\n\t\t\t Please select from the menu options.";
    cout << "\n\n1) Rooms";
    cout << "\n2) Pasta";
    cout << "\n3) Burger";
    cout << "\n4) Noodles";
    cout << "\n5) Shake";
    cout << "\n6) Information on sales ";
    cout << "\n7) Exit";

    cout << "\n\n Please Enter Your Choice! ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "\n How many rooms do you need?";

        cin >> quant;
        if (Qrooms - Srooms >= quant)
        {
            Srooms = Srooms + quant;
            total_rooms = total_rooms + quant * 250;
            cout << "\n\n\t" << quant << " rooms have been alloted to you.";
        }
        else

            cout << "\n\t Sorry, there is only" << Qrooms - Srooms << " rooms remaining";
        break;

    case 2:
        cout << "\n How many orders of pasta do you want?";

        cin >> quant;
        if (Qpasta - Spasta >= quant)
        {
            Spasta = Spasta + quant;
            total_pasta = total_pasta + quant * 10;
            cout << "\n\n\t" << quant << " pasta plates have been alloted to you.";
        }
        else

            cout << "\n\t Sorry, there is only " << Qpasta - Spasta << " pasta plates remaining";
        break;

    case 3:
        cout << "\n How many orders of burgers do you want?";

        cin >> quant;
        if (Qburger - Sburger >= quant)
        {
            Sburger = Sburger + quant;
            total_burger = total_burger + quant * 10;
            cout << "\n\n\t" << quant << " burgers have been alloted to you.";
        }
        else

            cout << "\n\t Sorry, there is only " << Qburger - Sburger << " burgers remaining.";
        break;
    case 4:
        cout << "\n How many orders of noodles do you want?";

        cin >> quant;
        if (Qnoodles - Snoodles >= quant)
        {
            Snoodles = Snoodles + quant;
            total_noodles = total_noodles + quant * 10;
            cout << "\n\n\t" << quant << " noodle plates have been alloted to you.";
        }
        else

            cout << "\n\t Sorry, there is only " << Qnoodles - Snoodles << " noodle plates remaining.";
        break;
    case 5:
        cout << "\n How many orders of shakes do you want?";

        cin >> quant;
        if (Qshake - Sshake >= quant)
        {
            Sshake = Sshake + quant;
            total_shake = total_shake + quant * 4;
            cout << "\n\n\t" << quant << " shakes have been alloted to you.";
        }
        else

            cout << "\n\t Sorry, there is only " << Qshake - Sshake << " shakes remaining.";
        break;
    case 6:
        cout << "\n\t\tDetails of sales and collection:";
        cout << "\n\n Number of rooms we had: " << Qrooms;
        cout << "\n\n Number of rooms we rented: " << Srooms;
        cout << "\n\n Remaing rooms: " << Qrooms - Srooms;
        cout << "\n\n Total rooms collection for the day: " << total_rooms<<" dollars";

        cout << "\n\n Number of pasta plates we had: " << Qpasta;
        cout << "\n\n Number of pasta plates sold: " << Spasta;
        cout << "\n\n Remaing pasta plates: " << Qpasta - Spasta;
        cout << "\n\n Total pasta plate collection for the day: " << total_pasta<<" dollars";

        cout << "\n\n Number of burgers we had: " << Qburger;
        cout << "\n\n Number of burgers sold: " << Sburger;
        cout << "\n\n Remaing burgers: " << Qburger - Sburger;
        cout << "\n\n Total burger collection for the day: " << total_burger<<" dollars";

        cout << "\n\n Number of noodle plates we had: " << Qnoodles;
        cout << "\n\n Number of noodle plates sold: " << Snoodles;
        cout << "\n\n Remaing noodle plates: " << Qnoodles - Snoodles;
        cout << "\n\n Total noodle plate collection for the day: " << total_noodles<<" dollars";

        cout << "\n\n Number of shakes we had: " << Qshake;
        cout << "\n\n Number of shakes sold: " << Sshake;
        cout << "\n\n Remaing shakes: " << Qshake - Sshake;
        cout << "\n\n Total shake collection for the day: " << total_shake<<" dollars";

        cout<< "\n\n\n Total Collection for the day: "<<total_shake+total_rooms+total_pasta+total_noodles+total_burger;
        break;

    case 7:
        exit(0);

    default:
        cout << "\n Please select the numbers mentioned above!";
    }
    goto m;
}
