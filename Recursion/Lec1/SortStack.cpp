void SortedStack :: sort()
{   
    if (s.size()==1) {return;}
   stack<int> temp;
   int mx = INT_MIN;
   int fl=0;
   while(s.size()>0) {int g = s.top(); mx=max(mx,g); temp.push(g); s.pop(); }
   while(temp.size()>0) {
       int k = temp.top();
       temp.pop();
       if (fl==1) {s.push(k);}
       else {
           if (k == mx) {fl=1;} else {s.push(k);}
       }
   }
   sort();
   s.push(mx);
}
