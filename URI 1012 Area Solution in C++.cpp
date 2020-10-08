#include<bits/stdc++.h>
using namespace std;

int main(){
  float a,b,c;
  cin>>a>>b>>c;
  float tri=.5*a*c;
  float cir=3.14159*c*c;
  float tra=((a+b)/2)*c;
  float squ=b*b;
  float rec=a*b;

  printf("TRIANGULO: %.3f\n",tri);
  printf("CIRCULO: %.3f\n",cir);
  printf("TRAPEZIO: %.3f\n",tra);
  printf("QUADRADO: %.3f\n",squ);
  printf("RETANGULO: %.3f\n",rec);

}
