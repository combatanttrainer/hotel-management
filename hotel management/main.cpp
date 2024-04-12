#include <iostream>
#include <conio.h>

int main()
{
    int quant{};
    int choice{};

    int Qrooms{100}, Qpasta{800}, Qburger{900}, Qnoodles{550}, Qshake{1003}, Qchicken{800};
    int Rrooms{}, Rpasta{}, Rburger{}, Rnoodles{}, Rshake{}, Rchicken{};
    int Trooms{240}, Tpasta{2} , Tburger{3} , Tnoodles{1} , Tshake{1} , Tchicken{6};
    int Prooms{0}, Ppasta{0} , Pburger{0} , Pnoodles{0} , Pshake{0} , Pchicken{0};

    std::cout << "                             menu                        " << '\n';
    std::cout << '\t'  << "________________________________________________" << '\n' << '\n';
    std::cout << " 1)Room" << '\n' << " 2)pasta" << '\n' << " 3)burger" << '\n' << " 4)noodle" << '\n' << " 5)shake" << '\n' << " 6)chicken" << '\n' << " 7)information regarding sales and collections" << '\n' << " 8) exit";

    while (true)
    {
        std::cout << " enter your choice: ";
        std::cin >> choice;

        if (choice != 9)
        {
            switch(choice)
            {
            case 1:
                     std::cout << " how many room / rooms: ";
                     std::cin >> quant;
                     Rrooms = quant;
                     Prooms = quant * Trooms;
                     if (Qrooms - quant >= quant)
                     {
                         if (quant==1)
                         {
                             std::cout << '\t' << quant << " room has alloted to you" << '\n' << '\n';
                         }
                         else
                         {
                             std::cout << '\t' << quant << " rooms has alloted to you" << '\n' << '\n';
                         }
                     }
                     else
                     {
                         if ((Qrooms - quant) == 1 )
                         {
                             std::cout << " sorry only " << Qrooms - quant << " room is remained" << '\n';
                         }
                         else
                         {
                             std::cout << " sorry only " << Qrooms - quant << " rooms are remained" << '\n';
                         }
                     }
            break;
            case 2:
                     std::cout << " how many pasta / pastas: ";
                     std::cin >> quant;
                     Ppasta = Tpasta * quant;
                     Rpasta = quant;
                     if (Qpasta - quant >= quant)
                     {
                         if (quant==1)
                         {
                             std::cout << '\t' << quant << " pasta has alloted to you" << '\n'<< '\n';
                         }
                         else
                         {
                             std::cout << '\t' << quant << " pastas has alloted to you" << '\n'<< '\n';
                         }
                     }
                     else
                     {
                         if ((Qpasta - quant) == 1 )
                         {
                             std::cout << " sorry only " << Qpasta - quant << " pasta is remained" << '\n';
                         }
                         else
                         {
                             std::cout << " sorry only " << Qpasta - quant << " pastas are remained" << '\n';
                         }
                     }
            break;
            case 3:
                     std::cout << " how many burger / burgers: ";
                     std::cin >> quant;
                     Rburger = quant;
                     Pburger = Tburger * quant;
                     if (Qburger - quant >= quant)
                     {
                         if (quant==1)
                         {
                             std::cout << '\t' << quant << " burger has alloted to you" << '\n'<< '\n';
                         }
                         else
                         {
                             std::cout << '\t' << quant << " burgers has alloted to you" << '\n'<< '\n';
                         }
                     }
                     else
                     {
                         if ((Qburger - quant) == 1 )
                         {
                             std::cout << " sorry only " << Qburger - quant << " burger is remained" << '\n';
                         }
                         else
                         {
                             std::cout << " sorry only " << Qburger - quant << " burgers are remained" << '\n';
                         }
                     }
            break;
            case 4:
                     std::cout << " how many noodle / noodles: ";
                     std::cin >> quant;
                     Rnoodles = quant;
                     Pnoodles = quant * Tnoodles;
                     if (Qnoodles - quant >= quant)
                     {
                         if (quant==1)
                         {
                             std::cout << '\t' << quant << " noodle has alloted to you" << '\n'<< '\n';
                         }
                         else
                         {
                             std::cout << '\t' << quant << " noodle has alloted to you" << '\n'<< '\n';
                         }
                     }
                     else
                     {
                         if ((Qnoodles - quant) == 1 )
                         {
                             std::cout << " sorry only " << Qnoodles - quant << " noodle is remained" << '\n';
                         }
                         else
                         {
                             std::cout << " sorry only " << Qnoodles - quant << " noodles are remained" << '\n';
                         }
                     }
            break;
            case 5:
                     std::cout << " how many shake / shakes: ";
                     std::cin >> quant;
                     Rshake = quant;
                     Pshake = quant * Tshake;
                     if (Qshake - quant >= quant)
                     {
                         if (quant==1)
                         {
                             std::cout << '\t' << quant << " shake has alloted to you" << '\n'<< '\n';
                         }
                         else
                         {
                             std::cout << '\t' << quant << " shakes has alloted to you" << '\n'<< '\n';
                         }
                     }
                     else
                     {
                         if ((Qshake - quant) == 1 )
                         {
                             std::cout << " sorry only " << Qshake - quant << " shake is remained" << '\n';
                         }
                         else
                         {
                             std::cout << " sorry only " << Qshake - quant << " shake are remained" << '\n';
                         }
                     }
            break;
            case 6:
                     std::cout << " how many chicken / chickens: ";
                     std::cin >> quant;
                     Rchicken = quant;
                     Pchicken = Tchicken * quant;
                     if ((Qchicken - quant) >= quant)
                     {
                         if (quant==1)
                         {
                             std::cout << '\t' << quant << " chicken has alloted to you" << '\n'<< '\n';
                         }
                         else
                         {
                             std::cout << '\t' << quant << " chickens has alloted to you" << '\n'<< '\n';
                         }
                     }
                     else
                     {
                         if ((Qchicken - quant) == 1 )
                         {
                             std::cout << " sorry only " << Qchicken - quant << " chicken is remained" << '\n';
                         }
                         else
                         {
                             std::cout << " sorry only " << Qchicken - quant << " chickens are remained" << '\n';
                         }
                     }
            break;
            case 7:
                     std::cout << '\n' << " we had " << Qrooms << " rooms " << '\n';
                     if ( Rrooms != 1 )
                     {
                         std::cout << '\t' << "we alloted " << Rrooms << " rooms" << '\n';
                     }
                     else
                     {
                         std::cout << '\t' << '\t' << "we alloted " << Rrooms << " room" << '\n';
                     }
                     if ((Qrooms - Rrooms) != 1 )
                     {
                         std::cout << '\t' << "now we have " << Qrooms - Rrooms << " rooms for rent" << '\n';
                     }
                     else
                     {
                         std::cout << '\t' << " now we have " << Qrooms - Rrooms << " room for rent" << '\n';
                     }
                     std::cout << " total room cost is: " << Prooms << "$" << '\n';
                     std::cout << '\n' << " we had " << Qpasta << " pastas " << '\n';
                     if ( Rpasta != 1 )
                     {
                         std::cout << '\t' << "we soled " << Rpasta << " pastas" << '\n';
                     }
                     else
                     {
                         std::cout << '\t' << '\t' << " we soled " << Rpasta << " pasta" << '\n';
                     }
                     if ((Qpasta - Rpasta) != 1 )
                     {
                         std::cout << '\t' << "now we have " << Qpasta - Rpasta << " pastas for sell" << '\n';
                     }
                     else
                     {
                         std::cout << '\t' << '\t' << " now we have " << Qpasta - Rpasta << " pasta for sell" << '\n';
                     }
                     std::cout << " total pasta cost is: " << Ppasta << "$" << '\n';
                     std::cout << '\n' << " we had " << Qburger << " burgers " << '\n';
                     if ( Rburger != 1 )
                     {
                         std::cout << '\t' << "we soled " << Rburger << " burgers" << '\n';
                     }
                     else
                     {
                         std::cout << '\t' << '\t' << " we soled " << Rburger << " burger" << '\n';
                     }
                     if ((Qburger - Rburger) != 1 )
                     {
                         std::cout << '\t' << "now we have " << Qburger - Rburger << " burgers for sell" << '\n';
                     }
                     else
                     {
                         std::cout << '\t' << '\t' << " now we have " << Qburger - Rburger << " burger for sell" << '\n';
                     }
                     std::cout << " total burger cost is: " << Pburger << "$" << '\n';
                     std::cout << '\n' << " we had " << Qnoodles << " noodles " << '\n';
                     if ( Rnoodles != 1 )
                     {
                         std::cout << '\t' << "we soled " << Rnoodles << " noodles" << '\n';
                     }
                     else
                     {
                         std::cout << '\t' << '\t' << "we soled " << Rnoodles << " noodle" << '\n';
                     }
                     if ((Qnoodles - Rnoodles) != 1 )
                     {
                         std::cout << '\t' << "now we have " << Qnoodles - Rnoodles << " noodles for sell" << '\n';
                     }
                     else
                     {
                         std::cout << '\t' << '\t' << "now we have " << Qnoodles - Rnoodles << " noodle for sell" << '\n';
                     }
                     std::cout << " total noodle cost is: " << Pnoodles << "$" << '\n';

                     std::cout << '\n' << " we had " << Qshake << " shakes" << '\n';
                     if ( Rshake != 1 )
                     {
                         std::cout << '\t' << "we soled " << Rshake << " shakes" << '\n';
                     }
                     else
                     {
                         std::cout << '\t' << '\t' << " we soled " << Rshake << " shake" << '\n';
                     }
                     if ((Qshake - Rshake) != 1 )
                     {
                         std::cout << '\t' << "now we have " << Qshake - Rshake << " shakes for sell" << '\n';
                     }
                     else
                     {
                         std::cout << '\t' << '\t' << " now we have " << Qshake - Rshake << " shake for sell" << '\n';
                     }
                     std::cout << " total shake cost is: " << Pshake << "$" << '\n';
                     std::cout << '\n' << " we had " << Qchicken << " chickens" << '\n';
                     if ( Rshake != 1 )
                     {
                         std::cout << '\t' << " we soled " << Rchicken << " chickens" << '\n';
                     }
                     else
                     {
                         std::cout << '\t' << '\t' << " we soled " << Rchicken << " chicken" << '\n';
                     }
                     if ((Qchicken - Rchicken) != 1 )
                     {
                         std::cout << '\t' << " now we have " << Qchicken - Rchicken << " chickens for sell" << '\n';
                     }
                     else
                     {
                         std::cout << '\t' << '\t' << " now we have " << Qchicken - Rchicken << " chicken for sell" << '\n';
                     }
                     std::cout << " total chicken cost is: " << Pchicken << "$" << '\n';
                     std::cout << '\t' << '\t' << "at all: " << Prooms + Ppasta + Pburger + Pnoodles + Pshake + Pchicken << '\n';
            break;
        }
        }
        else
        {
            return false;
        }
    }


    getch();
}
