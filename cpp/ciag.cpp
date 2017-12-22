{
     if(n==1)
         return 2;
-    return (wyraz(a, n-1)-1) * ((wyraz(a, n-1)*2) +1 );
+    return ciag(n -1) * ciag (n * n) + 1
 }
  
 int main(int argc, char **argv)
 {
     int n=0;
-    int a=0;
-   
-    cout<<"Podaj 1 liczbe: ";
-    cin>>a;
+
+
+
+
     cout<<"Podaj 2 liczbe: ";
     cin>>n;
    
-    cout<<wyraz(a,n);
+    cout<<wyraz(n);
     return 0;
 }
