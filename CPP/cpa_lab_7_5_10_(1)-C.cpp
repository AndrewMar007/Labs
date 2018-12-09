#include <iostream>
#include <sstream>
#include <regex>
#include <cstring>

using namespace std;

class IPHeader {
    private:
        int sourse[4], target[4];
        regex e;
    public:
        IPHeader(string s = "0.0.0.0", string t = "0.0.0.0.") {
            e=string("^\\d{1,3}\\.\\d{1,3}\\.\\d{1,3}\\.\\d{1,3}$");
            if (!regex_match(s, e))
                throw string("source ip hasn't correct format");
            if (!regex_match(t, e))
                throw string("target ip hasn't correct format");
            int position = s.find(".");
            sourse[0] = atoi(s.substr(0, position).c_str());
            target[0] = atoi(s.substr(0, position).c_str());

            sourse[1] = atoi(s.substr(position+1, s.find(".",position+1)).c_str());
            target[1] = atoi(s.substr(position + 1, s.find(".", position + 1)).c_str());

            position = s.find(".", position + 1);
            sourse[2] = atoi(s.substr(position+1, s.find(".", position + 1)).c_str());
            target[2] = atoi(s.substr(position + 1, s.find(".", position + 1)).c_str());

            position = s.find(".", position + 1);
            sourse[3] = atoi(s.substr(position+1).c_str());
            target[3] = atoi(s.substr(position + 1).c_str());
            if (sourse[0] > 255 || sourse[1] > 255 || sourse[2] > 255 || sourse[3] > 255)
                throw string("source ip has value more 255");
            if (target[0] > 255 || target[1] > 255 || target[2] > 255 || target[3] > 255)
                throw string("target ip has value more 255");
        }
};
int main()
{
	string ipAdd1, ipAdd2;
	stringstream ss;
	getline(cin, ipAdd2);
	ss << ipAdd2;
	ss >> ipAdd1;
	ss >> ipAdd2;
	try { IPHeader ip(ipAdd1, ipAdd2); cout << "valid ip header" << endl;}
	catch (string e) { cout << e << endl; }

	ss.clear();
	getline(cin, ipAdd2);
	ss << ipAdd2;
	ss >> ipAdd1;
	ss >> ipAdd2;
	try { IPHeader ip2(ipAdd1, ipAdd2); cout << "valid ip header" << endl;}
	catch (string e) { cout << e << endl; }
    return 0;
}
