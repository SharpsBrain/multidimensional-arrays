#include <iostream>

using namespace std;

int main()
{
    int test[3][2]={{2, -5},{4 ,0},{9, 1}};
//using the nested for loop
//access rows of the array
for(int i=0;i<3;++i){
    for(int j=0;j<2;++j){
        cout<<"test[" <<i<< "][" <<j<<"j= "<<test[i][j]<<endl;

    }
}
    return 0;
}
