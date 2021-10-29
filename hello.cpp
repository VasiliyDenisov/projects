#include <bits/stdc++.h>
using namespace std;
class Desk{
    private:
        bool secret_flag = false;
    public:
        int x, y;

        bool is_degree_cordinates(){
            cout << x << " " << y;
            return true;
        }
};

int main(){
	cout << "Hello world! 3v" << '\n';
    cout << "Введите число:";
    int a; cin >> a;
    Desk d;
    d.x = a;
    d.y = a * 2;
    cout << "Hello word!!";
    cout << d.x << " " << d.y << "Координаты" << endl;
    cout << d.is_degree_cordinates() << '\n';
	return 0;
}
