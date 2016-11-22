#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <sstream>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n1, n2;

    cin >> n1 >> n2;

    vector<string> html;
    vector<string> query;

    cin.ignore();

    for (int i = 0; i<n1; i++) {
        string temp;
        getline(cin, temp);
        html.push_back(temp);
    }

    for (int i = 0; i < n2; i++) {
        string temp;
        getline(cin, temp);
        query.push_back(temp);
    }

    map<string, map<string, string>> myMap;
    
    string path("");
    for (int i = 0; i<n1; i++) {
        string temp = html[i];

        temp.erase(remove(temp.begin(), temp.end(), '\""'), temp.end());
        temp.erase(remove(temp.begin(), temp.end(), '<'), temp.end());
        temp.erase(remove(temp.begin(), temp.end(), '>'), temp.end());

        if (temp.substr(0, 1) == "/") {
            if (!path.empty()) {
                if (path.find('.') != string::npos) {
                    path.erase(path.find_last_of('.'));
                }
                else {
                    path.clear();
                }
            }
            else {
                path.clear();
            }

            continue;
        }

        else {
            stringstream ss(temp);
            
            string token, tag(""), attrib(""), value("");

            while (getline(ss, token, ' ')) {
                if (token == "=") {
                    continue;
                }

                else if (tag.empty()) {
                    tag = token;
                    if (!path.empty()) {
                        path += "." + tag;
                    }

                    else {
                        path = tag;
                    }

                    continue;
                }

                else if (attrib.empty()) {
                    attrib = token;

                    continue;
                }

                else if (value.empty()) {
                    value = token.substr(1, token.length() - 2);

                    map<string, string> tempMap = myMap[path];
                    tempMap.insert(pair<string, string>(attrib, value));
                    myMap[path] = tempMap;

                    attrib.clear();
                    value.clear();
                }
            }
        }
    }

    for (int i = 0; i < n2; i++) {
        string temp1 = query[i].substr(0, query[i].find("~"));
        string temp2 = query[i].substr(query[i].find("~") + 1);

        map<string, map<string, string>>::iterator it = myMap.find(temp1);

        if (it != myMap.end()) {
            map<string, string>::iterator it2 = it->second.find(temp2);

            if (it2 != it->second.end()) {
                cout << it2->second << endl;
            }

            else {
                cout << "Not Found!" << endl;
            }
        }

        else {
            cout << "Not Found!" << endl;
        }
    }

    return 0;
}
