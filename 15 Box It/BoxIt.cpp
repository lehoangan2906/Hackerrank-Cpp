#include <bits/stdc++.h>

using namespace std;

class Box {

// Design a class named Box whose dimensions are integers and private to the class.

 private:     
 
 // The dimensions are labelled: length l, breadth b, and height h.
  int length, breadth, height;

 public:

// The default constructor of the class should initialize l, b, and h to 0.

  Box() {
    length = 0;
    breadth = 0;
    height = 0;
  }

// The parameterized constructor Box (int length, int breadth, int height)
// should initialize Box’s l, b, and h to length, breadth and height.

  Box(int l, int b, int h) {
    length = l;
    breadth = b;
    height = h;
  }

// The copy constructor Box (Box B) should set l, b and h to B’s l, b and h, respectively.
  Box(const Box &B) {
    length = B.length;
    breadth = B.breadth;
    height = B.height;
  }

// Apart from the above, the class should have 4 functions:
  int getLength()    // Return Box’s length
  {
    return length;
  }

  int getBreadth()   // Return box’s breadth
  {
    return breadth;
  }

  int getHeight()    // Return box’s height 
  {
    return height;
  }

  long long CalculateVolume()    // Return the volume of the box
  {
    return (long long)(breadth) * length * height;
  }

  bool operator<(Box &B)         // Overload the operator < for the class Box.
  {
      
    if (length < B.length) {
      return true;
    } else if (length == B.length) {
      if (breadth < B.breadth) {
        return true;
      } else if (breadth == B.breadth) {
        if (height < B.height) {
          return true;
        }
      }
    }

    return false;
  }
};

ostream &operator<<(ostream &out, Box &B)      // Overload operator << for the class Box().
{
  out << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
  return out;
};

void check2()
{
    int n;
    cin >> n;
    Box temp;
    for (int i = 0; i < n; i++)
    {
        int type;
        cin >> type;

        if(type == 1)
        {
            cout << temp << endl;
        }

        if (type == 2)
        {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            temp = NewBox;
            cout << temp << endl;
        }

        if(type == 3){
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            if(NewBox < temp)
            {
                cout << "Lesser\n";
            }
            else
            {
                cout << "Greater\n";
            }
        }

        if(type == 4)
        {
            cout << temp.CalculateVolume() << endl;
        }

        if(type == 5)
        {
            Box NewBox(temp);
            cout << NewBox << endl;
        }

    }
}

int32_t main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin) ;
freopen("output.txt", "w", stdout) ;
#endif
ios_base::sync_with_stdio(false);
cin.tie(NULL) ; cout.tie(NULL);
 
int t;
cin >> t;
 
while( t-- ) {
    check2();
}
return 0;
}