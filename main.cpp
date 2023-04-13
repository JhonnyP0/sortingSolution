#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

class Sortby
{
    public:
    int x=0;
    int sortstring[5]; //need to chagne on randomsequence() function [workin on that]
    int tabsize=sizeof(sortstring)/sizeof(int);
    void startup(){randomseqence();}

    //Save for sandboxing function

    // void descending (int switchvalue) //   NOT DEVELOPED YET 
    // {
    //     int a,b,c;   
    //     for(int a=0;a<tabsize;a++)
    //     {
    //         if(sortstring[a]<sortstring[a+1]) //changing inequality sign ">" to "<"  doesnt solve problem
    //         {
    //             //----NOTE-----
    //             /* in my mind changin the above inequality sign should revers way of sorting bcs
    //             if 1st cell is smaller than 2nd and we want to sort descending, way of sorting 
    //             doenst not have to be different than solution in incrementally sorting so changing place of 
    //             two variables should be good enough idea, but it wont work */
                
    //         b=sortstring[a];
    //         c=sortstring[a+1];
            
    //         sortstring[a]=c;
    //         sortstring[a+1]=b;
    //         }
    //     }
    //     cout<<"sorted v: ";
    //     for(int a=0;a<tabsize;a++)
    //     {
    //         cout<<sortstring[a]<<" ";
    //     }
    //     cout<<endl;
    //     if(x==0){check(switchvalue);}
    // }

    void descending (int switchvalue) //   NOT DEVELOPED YET 
    {
        int a,b,c;   
        for(int a=tabsize;a>tabsize;a--)
        {
            if(sortstring[a]>sortstring[a-1]) //changing inequality sign ">" to "<"  doesnt solve problem
            {
                //----NOTE-----
                /* in my mind changin the above inequality sign should revers way of sorting bcs
                if 1st cell is smaller than 2nd and we want to sort descending, way of sorting 
                doenst not have to be different than solution in incrementally sorting so changing place of 
                two variables should be good enough idea, but it wont work */
                
            b=sortstring[a];
            c=sortstring[a-1];
            
            sortstring[a]=c;
            sortstring[a-1]=b;
            }
        }
        cout<<"sorted v: ";
        for(int a=0;a<tabsize;a++)
        {
            cout<<sortstring[a]<<" ";
        }
        cout<<endl;
        if(x==0){check(switchvalue);}
    }

    void incrementally (int switchvalue)
    {
        int a,b,c;   
        for(int a=0;a<tabsize;a++)
        {
            if(sortstring[a]>sortstring[a+1])
            {
            b=sortstring[a];
            c=sortstring[a+1];
            
            sortstring[a]=c;
            sortstring[a+1]=b;
            }
        }
        cout<<"sorted ^: ";
        for(int a=0;a<tabsize;a++)
        {
            cout<<sortstring[a]<<" ";
        }
        cout<<endl;
        if(x==0){check(switchvalue);}
    }

    private:

    void graphDraw() //not developed yet
    {
        char garphTab[5];
    }

    void check(int switchvalue) //chages need to be placed here too !!!!!!!!!!!!!!
    {
        x++;
        switch(switchvalue)
        {
            case 1:
            for(int a=0;a<tabsize;a++)
            {
                incrementally(switchvalue);
            }
            break;
            case 2:
            for(int a=0;a<tabsize;a++)
            {
                descending(switchvalue);
            }
            break;
            default:
            cout<<"uhmmm, u messed up something"<<endl;
            break;
        }
    }

    void randomseqence()
    {
        cout<<"unsorted: ";
        srand((int)time(0));
        for(int i=0;i<tabsize;i++)
        {
        sortstring[i]=(rand()%5); //here
        cout<<sortstring[i]<<" ";
        }
        cout<<endl;
        graphDraw();
        cout<<endl;
    }

};

int main()
{
    Sortby Sortby;
    Sortby.startup();
    int switchvalue;
    cout<<"1: sorting incrementally\n2: sort descending [NOT DEVELOPED YET!!!!]"<<endl;
        cin>>switchvalue;
        switch(switchvalue)
        {
            case 1:
            {
                Sortby.incrementally(switchvalue);
                break;
            }
            case 2:
            {
                Sortby.descending(switchvalue);
                break;
            }
            default:
            {
                cout<<"option doesnt exist\n";
                break;
            }
            
        }
}