#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0); ios_base::sync_with_stdio(0);

    int t;
    cin >> t; 

    for(int c = 1; c <= t; c++){
         
        vector <int> salaries(3);

        cin >> salaries[0] >> salaries[1] >> salaries[2];

        sort(salaries.begin(), salaries.end()); 

        cout << "Case " << ct << ": " << salaries[1] << "\n";

    }

    return 0;
}




// #include <bits/stdc++.h> 

// using namespace std;


// int main(){
//     cin.tie(0); ios_base::sync_with_stdio(0);

//     int t, a, b, c, ct = 1, medio, maior = 0, menor = 10000; 

//     cin >> t; 

//     while (t--){
//         cin >> a >> b >> c;
//         maior = a; 
//         menor = a;

//         if (b > maior)  maior = b;
//         else if (b < menor) menor = b;
//         if (c > maior) maior = c; 
//         else if (c < menor) menor = c;

//         if (maior != a && menor != a) medio = a;
//         else if (maior != b && menor != b) medio = b;
//         else medio = c;

//         cout << "Case " << ct << ": " << medio << "\n";

//         ct++;


//     }
// }


