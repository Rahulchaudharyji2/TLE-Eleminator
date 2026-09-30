#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

 
    unordered_map<string, string> chefCountry;

   
    unordered_map<string, int> chefVotes;

 
    unordered_map<string, int> countryVotes;

 
    for (int i = 0; i < n; i++) {
        string chef, country;
        cin >> chef >> country;

        chefCountry[chef] = country;
    }

    
    for (int i = 0; i < m; i++) {
        string chef;
        cin >> chef;

        chefVotes[chef]++;
        countryVotes[chefCountry[chef]]++;
    }

    // Find winning chef
    string winnerChef = "";
    int maxChefVotes = -1;

    for (auto &p : chefVotes) {
        string chef = p.first;
        int votes = p.second;

        if (votes > maxChefVotes ||
            (votes == maxChefVotes && chef < winnerChef)) {
            maxChefVotes = votes;
            winnerChef = chef;
        }
    }

    // Find winning country
    string winnerCountry = "";
    int maxCountryVotes = -1;

    for (auto &p : countryVotes) {
        string country = p.first;
        int votes = p.second;

        if (votes > maxCountryVotes ||
            (votes == maxCountryVotes && country < winnerCountry)) {
            maxCountryVotes = votes;
            winnerCountry = country;
        }
    }

    cout << winnerCountry << '\n';
    cout << winnerChef << '\n';

    return 0;
}