

#include <iostream>

  

    int main()
    {
        double a[3][3]; 
        double sum[3] = { 0 }, min, max;

        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++) {
              std::cin >> a[i][j];
                sum[i] += a[i][j];
            }

        min = max = a[0][0];

        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++) {
                if (a[i][j] < min) min = a[i][j];
                if (a[i][j] > max) max = a[i][j];
            }

        std::cout << max * min;
        std::cout << max - min;

        for (int i = 0; i < 3; i++)
         std::cout << sum[i] << " ";

       
    }











