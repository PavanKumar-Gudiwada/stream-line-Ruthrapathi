
#include <stdio.h>
#include "DataSender.h"

void SendOperation(BatParam_test BatParam_val)
{
    printf("{\"Temperature\":%0.2f,\"SOC\":%0.2f}\n",BatParam_val.Temperature,BatParam_val.Soc); // print in the console
    
}

int main()
{
    for(int i=0;i<50;i++)
    {
        BatParam_val.Temperature = (float)i;
        BatParam_val.Soc = (float)(i*2);
        
        SendOperation(BatParam_val);        
    }
    return 0;
}
