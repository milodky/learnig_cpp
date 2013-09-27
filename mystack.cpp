// ANSI C Headers
#include <stdlib.h>

// C++ STL Headers
#include <iostream>
#include <vector>
#include <stack>
using namespace std;
#ifdef _WIN32
using namespace std;
#endif

int main( int argc, char *argv[] )
{
    stack< const char *, vector<const char *> > s;

//  Push on stack in reverse order
    s.push("order");
    s.push("correct"); // Oh no it isn't !
    s.push("the");
    s.push("in");
    s.push("is");
    s.push("This");

//  Pop off stack which reverses the push() order
    while ( !s.empty() ) {
      cout  << s.top() << " "; s.pop(); /// Oh yes it is !
    }
    cout << endl;

    return( EXIT_SUCCESS );
}

