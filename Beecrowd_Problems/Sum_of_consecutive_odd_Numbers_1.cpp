#include<bits/stdc++.h>                                                                                                                                          
using namespace std;
int main(){
    
    int x,y;
    cin>>x>>y;

    int odds=0;


    if(x>y){
        for(int i=y+1; i<x; i++){
            if(i%2!=0){
                odds=odds+i;
                //cout<<odds<<endl;
            }
        }
        cout<<odds<<endl;
    }else{
        for(int i=x+1; i<y; i++){
            if(i%2!=0){
                odds=odds+i;
                //cout<<odds<<endl;
            }
        }
        cout<<odds<<endl;
    }


/*     
    for(int i=y+1; i<x; i++){
        if(i%2!=0){
            odds=odds+i;
            //cout<<odds<<endl;
        }/* else{
            
            odds=odds+i;
            cout<<odds<<endl;
        } */
    }
    //cout<<odds<<endl; */
    
/*     
    if(x>y){
        for(int i=y+1; i<x; i++){
            if(i%2==0){
                cout//odds=odds+i;
            }else{
                odds=odds+i;
            }
        }
        cout<<odds<<endl;

    }else{
        for(int i=x+1; i<y; i++){
            if(i%2==0){
                //odds=odds+i;

            }else{
                odds=odds+i;
            }
        }
        cout<<odds<<endl;
    } 
   
 */

/* 
    for(int i=y; i<x; i++){
        if(i%2!=0){
            odds=i;
        }
    }
    cout<<odds<<endl;
    
 */
/* 
    for(int i=x; i<y; i++){
        if(i%2!=0){
            odds=odds+i;

        }
    }
    cout<<odds<<endl;
 */

/* 
    int h=9;
    int j=-4;
    int l=h+j;
    cout<<l<<endl;
 */
    return 0;
}