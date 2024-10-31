#include <bits/stdc++.h>
using namespace std;
int main()//这题我写的挺好的
{
    int n;
    cin >> n;
    int dangqianA = 1;
    int feichu = 0;
    while (1)
    {   
        string ans1, ans2, ans3, ans4, ans5;
        if(dangqianA==n-1||feichu==n-1){
            cout << "! " << dangqianA << endl;
            fflush(stdout);
            cin >> ans5;
            if (ans5 == ":(")
            {
                cout << "! " << n << endl;
                fflush(stdout);
                cin >> ans5;
                return 0;
            }
            else
            {   
                return 0;
            }
        }
        cout << "? " << dangqianA << endl;
        fflush(stdout);
        cin >> ans1;
        if(ans1=="YES"){
            int dangqianB;
            if(dangqianA==feichu+1){
                dangqianB=dangqianA+1;
            }else{
                dangqianB=feichu+1;
            }
            cout << "? " << dangqianB << endl;
            fflush(stdout);
            cin >> ans2;
            if(ans2=="YES"){
                cout << "! " << dangqianB << endl;
                fflush(stdout);
                cin >> ans3;
                if(ans3==":("){
                    cout << "! " << dangqianA << endl;
                    fflush(stdout);
                    cin>>ans4;
                    return 0;
                }else{
                    return 0;
                }
            }else{
                feichu=dangqianB;
                continue;
            }
        }else{
            int dangqianB;
            if(dangqianA==feichu+1){
                dangqianB=dangqianA+1;
            }else{
                dangqianB=feichu+1;
            }
            cout << "? " << dangqianA << endl;
            fflush(stdout);
            cin>>ans2;
            if(ans2=="NO"){
                feichu=dangqianB-1;
                dangqianA=dangqianB;
                continue;
            }else{
                cout << "? " << dangqianB << endl;
                fflush(stdout);
                cin>>ans3;
                if(ans3=="NO"){
                    feichu=dangqianB;
                    continue;
                }else{
                    cout << "! " << dangqianB << endl;
                    fflush(stdout);
                    cin >> ans4;
                    if(ans4==":("){
                    cout << "! " << dangqianA << endl;
                    fflush(stdout);
                    cin>>ans5;
                    return 0;
                }else{
                    return 0;
                    }
                }
            }
        }
    }
return 0;
}