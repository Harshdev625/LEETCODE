class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {
        int f1=0,f2=0,f3=0,f4=0,f5=0,f6=0;
        string a,b,c,d;
        for(int i=0;i<num1.size();i++){
            if(num1[i]=='-'){
                if(f1==0)f1=1;
                else f2=1;
            }
            else if(num1[i]>='0' && num1[i]<='9'){
                if(f5==0)a.push_back(num1[i]);
                else b.push_back(num1[i]);
            }
            else if(num1[i]=='+')f5=1;
        }
        for(int i=0;i<num2.size();i++){
            if(num2[i]=='-'){
                if(f3==0)f3=1;
                else f4=1;
            }
            else if(num2[i]>='0' && num2[i]<='9'){
                if(f6==0)c.push_back(num2[i]);
                else d.push_back(num2[i]);
            }
            else if(num2[i]=='+')f6=1;
        }
        int e=stoi(a),f=stoi(b),g=stoi(c),h=stoi(d);
        if(f1==1)e*=-1;
        if(f2==2)f*=-1;
        if(f3==3)g*=-1;
        if(f4==4)h*=-1;
        int real=e*g -(f*h);
        int img=e*h +(f*g);
        return to_string(real)+"+"+to_string(img)+"i";
    }
};
