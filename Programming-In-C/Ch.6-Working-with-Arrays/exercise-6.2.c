#include <stdio.h>

int main (void)
{
     int  values[11];
     int  index;

     int initializers[11] = {[0] = 197,
     [2] = -100,
     [5] = 350,
     [3] = initializers[5] + initializers[0],
     [9] = initializers[5] / 10,
     --initializers[2]};

     printf("values[3] is %d\n", values[3]);
     printf("values[5] is %d\n", values[5]);

     for (index = 0; index < 10; ++index) 
         values[index] = initializers[index];

     values[3] += values[5];

     for (index = 0;  index < 10;  ++index)
          printf ("values[%i] = %i\n", index, values[index]);

     printf("values[0] is %d\n", values[0]);
     printf("values[3] is %d\n", values[3]);
     printf("values[5] is %d\n", values[5]);

     printf("values[0](%d) + values[5](%d) = %d\n",values[0], values[5], values[0] + values[5]);

     return 0;
}
