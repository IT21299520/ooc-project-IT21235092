#include "Package.h"
#include<cstring>

Booking :: Booking()
{
  
}

Booking :: Booking(int B_ID)
{
  bookID=B_ID;
}

Booking :: Booking(int B_ID, const char B_date[], const char B_desc[],Customer *bcus, int pay1, int pay2)
{
  bookID=B_ID;
  strcpy(bookDate,B_date);
  strcpy(bookDescription,B_desc);
  bcustmr=bcus;
}

void Booking :: addBooking()
{
  
}

void Booking :: calculateBill(int id, const char ptyp[], double pAmt)
{
  if(count<SIZE5)
  {
    payment[count] = new Payment(id,ptyp,pAmt);
  
    count++;
  }
}
         
void Booking :: displayBookingDetails()
{
  
}

Booking :: ~Booking()
{
  for (int i = 0; i < SIZE5; i++)
    {
        delete payment[i];
    }
  
}
