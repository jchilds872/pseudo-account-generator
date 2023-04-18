#include <ctime>
#include <iostream>
#include <unistd.h>
#include <fstream>

std::string gen_random(const int len) {
    static const char alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";
    std::string tmp_s;
    tmp_s.reserve(len);

    for (int i = 0; i < len; ++i) {
        tmp_s += alphanum[rand() % (sizeof(alphanum) - 1)];
    }
    
    return tmp_s;
}
std::string gen_num(const int len) {
    static const char alphanum[] =
        "0123456789"
        "0123456789"
        "0123456789";
    std::string tmp_s;
    tmp_s.reserve(len);

    for (int i = 0; i < len; ++i) {
        tmp_s += alphanum[rand() % (sizeof(alphanum) - 1)];
    }
    
    return tmp_s;
}

using namespace std;
int main(int argc, char *argv[]) {
		string mail[] = {"@gmail.com", "@mail.com", "@hotmail.com", "@outlook.com", "@aol.com", "@yahoo.com", "@icloud.com", "@protonmail.com", "@gmx.com"};
    string state[] = {"Alabama", "Alaska", "Arizona", "Arkansas", "California", "Colorado", "Connecticut", "Delaware", "Florida", "Georgia", "Hawaii", "Idaho", "Illinois", "Indiana", "Iowa", "Kansas", "Kentucky", "Louisiana", "Maine", "Maryland", "Massachusetts", "Michigan", "Minnesota", "Mississippi", "Missouri", "Montana", "Nebraska", "Nevada", "New Hampshire", "New Jersey", "New Mexico", "New York", "North Carolina", "North Dakota", "Ohio", "Oklahoma", "Oregon", "Pennsylvania", "Rhode Island", "South Carolina", "South Dakota", "Tennessee", "Texas", "Utah", "Vermont", "Virginia", "Washington", "Washington DC", "West Virginia", "Wisconsin", "Wyoming"};
    srand((unsigned)time(NULL) * getpid());
	for (int i = 0; i < 1; i++) {
	  ofstream myfile;
		string randstate = state[1 + (rand() % 50)];
		if (randstate == "Alabama") {
			string phonepre[] = {"205", "251", "256", "334", "659", "938"};
			string randopre = phonepre[1 + (rand() % 6)];
		  myfile.open ("out.txt", ios::app);
		  myfile << gen_random(12) << mail[1 + (rand() % 9)] << " | State: " << randstate << " | Phone Number: " << randopre << "-" << gen_num(3) << "-" << gen_num(4) << "\n";
		  myfile.close();
		}
		if (randstate == "Alaska") {
			string phonepre[] = {"907"};
			string randopre = phonepre[1 + (rand() % 1)];
		  myfile.open ("out.txt", ios::app);
		  myfile << gen_random(12) << mail[1 + (rand() % 9)] << " | State: " << randstate << " | Phone Number: " << randopre << "-" << gen_num(3) << "-" << gen_num(4) << "\n";
		  myfile.close();
		}
		if (randstate == "Arizona") {
			string phonepre[] = {"480", "520", "602", "623", "928"};
			string randopre = phonepre[1 + (rand() % 5)];
		  myfile.open ("out.txt", ios::app);
		  myfile << gen_random(12) << mail[1 + (rand() % 9)] << " | State: " << randstate << " | Phone Number: " << randopre << "-" << gen_num(3) << "-" << gen_num(4) << "\n";
		  myfile.close();
		}
		if (randstate == "Arkansas") {
			string phonepre[] = {"479", "501", "870"};
			string randopre = phonepre[1 + (rand() % 3)];
		  myfile.open ("out.txt", ios::app);
		  myfile << gen_random(12) << mail[1 + (rand() % 9)] << " | State: " << randstate << " | Phone Number: " << randopre << "-" << gen_num(3) << "-" << gen_num(4) << "\n";
		  myfile.close();
		}
		if (randstate == "California") {
			string phonepre[] = {"209", "213", "279", "310", "323", "341", "350", "408", "415", "424", "442", "510", "530", "559", "562", "619", "626", "628", "650", "657", "661", "669", "707", "714", "747", "760", "805", "818", "820", "831", "840", "858", "909", "916", "925", "949", "951"};
			string randopre = phonepre[1 + (rand() % 38)];
		  myfile.open ("out.txt", ios::app);
		  myfile << gen_random(12) << mail[1 + (rand() % 9)] << " | State: " << randstate << " | Phone Number: " << randopre << "-" << gen_num(3) << "-" << gen_num(4) << "\n";
		  myfile.close();
		}
		if (randstate == "Colorado") {
			string phonepre[] = {"303", "719", "720", "970", "983"};
			string randopre = phonepre[1 + (rand() % 5)];
		  myfile.open ("out.txt", ios::app);
		  myfile << gen_random(12) << mail[1 + (rand() % 9)] << " | State: " << randstate << " | Phone Number: " << randopre << "-" << gen_num(3) << "-" << gen_num(4) << "\n";
		  myfile.close();
		}
		if (randstate == "Connecticut") {
			string phonepre[] = {"203", "475", "860", "959"};
			string randopre = phonepre[1 + (rand() % 4)];
		  myfile.open ("out.txt", ios::app);
		  myfile << gen_random(12) << mail[1 + (rand() % 9)] << " | State: " << randstate << " | Phone Number: " << randopre << "-" << gen_num(3) << "-" << gen_num(4) << "\n";
		  myfile.close();
		}
		if (randstate == "Delaware") {
			string phonepre[] = {"302"};
			string randopre = phonepre[1 + (rand() % 1)];
		  myfile.open ("out.txt", ios::app);
		  myfile << gen_random(12) << mail[1 + (rand() % 9)] << " | State: " << randstate << " | Phone Number: " << randopre << "-" << gen_num(3) << "-" << gen_num(4) << "\n";
		  myfile.close();
		}
		if (randstate == "Florida") {
			string phonepre[] = {"239", "305", "321", "352", "386", "407", "448", "561", "656", "689", "727", "754", "772", "786", "813", "850", "863", "904", "941", "954"};
			string randopre = phonepre[1 + (rand() % 20)];
		  myfile.open ("out.txt", ios::app);
		  myfile << gen_random(12) << mail[1 + (rand() % 9)] << " | State: " << randstate << " | Phone Number: " << randopre << "-" << gen_num(3) << "-" << gen_num(4) << "\n";
		  myfile.close();
		}
		if (randstate == "Georgia") {
			string phonepre[] = {"229", "404", "470", "478", "678", "706", "762", "770", "912", "943"};
			string randopre = phonepre[1 + (rand() % 10)];
		  myfile.open ("out.txt", ios::app);
		  myfile << gen_random(12) << mail[1 + (rand() % 9)] << " | State: " << randstate << " | Phone Number: " << randopre << "-" << gen_num(3) << "-" << gen_num(4) << "\n";
		  myfile.close();
		}
		if (randstate == "Hawaii") {
			string phonepre[] = {"808"};
			string randopre = phonepre[1 + (rand() % 1)];
		  myfile.open ("out.txt", ios::app);
		  myfile << gen_random(12) << mail[1 + (rand() % 9)] << " | State: " << randstate << " | Phone Number: " << randopre << "-" << gen_num(3) << "-" << gen_num(4) << "\n";
		  myfile.close();
		}
		if (randstate == "Idaho") {
			string phonepre[] = {"208", "986"};
			string randopre = phonepre[1 + (rand() % 2)];
		  myfile.open ("out.txt", ios::app);
		  myfile << gen_random(12) << mail[1 + (rand() % 9)] << " | State: " << randstate << " | Phone Number: " << randopre << "-" << gen_num(3) << "-" << gen_num(4) << "\n";
		  myfile.close();
		}
		if (randstate == "Illinois") {
			string phonepre[] = {"217", "224", "309", "312", "331", "447", "464", "618", "630", "708", "773", "779", "815", "847", "872"};
			string randopre = phonepre[1 + (rand() % 15)];
		  myfile.open ("out.txt", ios::app);
		  myfile << gen_random(12) << mail[1 + (rand() % 9)] << " | State: " << randstate << " | Phone Number: " << randopre << "-" << gen_num(3) << "-" << gen_num(4) << "\n";
		  myfile.close();
		}
		if (randstate == "Indiana") {
			string phonepre[] = {"219", "260", "317", "463", "574", "765", "812", "930"};
			string randopre = phonepre[1 + (rand() % 8)];
		  myfile.open ("out.txt", ios::app);
		  myfile << gen_random(12) << mail[1 + (rand() % 9)] << " | State: " << randstate << " | Phone Number: " << randopre << "-" << gen_num(3) << "-" << gen_num(4) << "\n";
		  myfile.close();
		}
		if (randstate == "Iowa") {
			string phonepre[] = {"319", "515", "563", "641", "712"};
			string randopre = phonepre[1 + (rand() % 5)];
		  myfile.open ("out.txt", ios::app);
		  myfile << gen_random(12) << mail[1 + (rand() % 9)] << " | State: " << randstate << " | Phone Number: " << randopre << "-" << gen_num(3) << "-" << gen_num(4) << "\n";
		  myfile.close();
		}
		if (randstate == "Kansas") {
			string phonepre[] = {"316", "620", "785", "913"};
			string randopre = phonepre[1 + (rand() % 4)];
		  myfile.open ("out.txt", ios::app);
		  myfile << gen_random(12) << mail[1 + (rand() % 9)] << " | State: " << randstate << " | Phone Number: " << randopre << "-" << gen_num(3) << "-" << gen_num(4) << "\n";
		  myfile.close();
		}
		if (randstate == "Kentucky") {
			string phonepre[] = {"270", "364", "502", "606", "859"};
			string randopre = phonepre[1 + (rand() % 5)];
		  myfile.open ("out.txt", ios::app);
		  myfile << gen_random(12) << mail[1 + (rand() % 9)] << " | State: " << randstate << " | Phone Number: " << randopre << "-" << gen_num(3) << "-" << gen_num(4) << "\n";
		  myfile.close();
		}
		if (randstate == "Louisiana") {
			string phonepre[] = {"225", "318", "337", "504", "985"};
			string randopre = phonepre[1 + (rand() % 5)];
		  myfile.open ("out.txt", ios::app);
		  myfile << gen_random(12) << mail[1 + (rand() % 9)] << " | State: " << randstate << " | Phone Number: " << randopre << "-" << gen_num(3) << "-" << gen_num(4) << "\n";
		  myfile.close();
		}
		if (randstate == "Maine") {
			string phonepre[] = {"207"};
			string randopre = phonepre[1 + (rand() % 1)];
		  myfile.open ("out.txt", ios::app);
		  myfile << gen_random(12) << mail[1 + (rand() % 9)] << " | State: " << randstate << " | Phone Number: " << randopre << "-" << gen_num(3) << "-" << gen_num(4) << "\n";
		  myfile.close();
		}
		if (randstate == "Maryland") {
			string phonepre[] = {"240", "301", "410", "443", "667"};
			string randopre = phonepre[1 + (rand() % 5)];
		  myfile.open ("out.txt", ios::app);
		  myfile << gen_random(12) << mail[1 + (rand() % 9)] << " | State: " << randstate << " | Phone Number: " << randopre << "-" << gen_num(3) << "-" << gen_num(4) << "\n";
		  myfile.close();
		}
		if (randstate == "Massachusetts") {
			string phonepre[] = {"339", "351", "413", "508", "617", "774", "781", "857", "978"};
			string randopre = phonepre[1 + (rand() % 9)];
		  myfile.open ("out.txt", ios::app);
		  myfile << gen_random(12) << mail[1 + (rand() % 9)] << " | State: " << randstate << " | Phone Number: " << randopre << "-" << gen_num(3) << "-" << gen_num(4) << "\n";
		  myfile.close();
		}
		if (randstate == "Michigan") {
			string phonepre[] = {"231", "248", "269", "313", "517", "586", "616", "734", "810", "906", "947", "989"};
			string randopre = phonepre[1 + (rand() % 12)];
		  myfile.open ("out.txt", ios::app);
		  myfile << gen_random(12) << mail[1 + (rand() % 9)] << " | State: " << randstate << " | Phone Number: " << randopre << "-" << gen_num(3) << "-" << gen_num(4) << "\n";
		  myfile.close();
		}
		if (randstate == "Minnesota") {
			string phonepre[] = {"218", "320", "507", "612", "651", "763", "952"};
			string randopre = phonepre[1 + (rand() % 7)];
		  myfile.open ("out.txt", ios::app);
		  myfile << gen_random(12) << mail[1 + (rand() % 9)] << " | State: " << randstate << " | Phone Number: " << randopre << "-" << gen_num(3) << "-" << gen_num(4) << "\n";
		  myfile.close();
		}
		if (randstate == "Mississippi") {
			string phonepre[] = {"228", "601", "662", "769"};
			string randopre = phonepre[1 + (rand() % 4)];
		  myfile.open ("out.txt", ios::app);
		  myfile << gen_random(12) << mail[1 + (rand() % 9)] << " | State: " << randstate << " | Phone Number: " << randopre << "-" << gen_num(3) << "-" << gen_num(4) << "\n";
		  myfile.close();
		}
		if (randstate == "Missouri") {
			string phonepre[] = {"314", "417", "557", "573", "636", "660", "816"};
			string randopre = phonepre[1 + (rand() % 7)];
		  myfile.open ("out.txt", ios::app);
		  myfile << gen_random(12) << mail[1 + (rand() % 9)] << " | State: " << randstate << " | Phone Number: " << randopre << "-" << gen_num(3) << "-" << gen_num(4) << "\n";
		  myfile.close();
		}
		if (randstate == "Montana") {
			string phonepre[] = {"406"};
			string randopre = phonepre[1 + (rand() % 1)];
		  myfile.open ("out.txt", ios::app);
		  myfile << gen_random(12) << mail[1 + (rand() % 9)] << " | State: " << randstate << " | Phone Number: " << randopre << "-" << gen_num(3) << "-" << gen_num(4) << "\n";
		  myfile.close();
		}
		if (randstate == "Nebraska") {
			string phonepre[] = {"308", "402", "531"};
			string randopre = phonepre[1 + (rand() % 3)];
		  myfile.open ("out.txt", ios::app);
		  myfile << gen_random(12) << mail[1 + (rand() % 9)] << " | State: " << randstate << " | Phone Number: " << randopre << "-" << gen_num(3) << "-" << gen_num(4) << "\n";
		  myfile.close();
		}
		if (randstate == "Nevada") {
			string phonepre[] = {"702", "725", "775"};
			string randopre = phonepre[1 + (rand() % 3)];
		  myfile.open ("out.txt", ios::app);
		  myfile << gen_random(12) << mail[1 + (rand() % 9)] << " | State: " << randstate << " | Phone Number: " << randopre << "-" << gen_num(3) << "-" << gen_num(4) << "\n";
		  myfile.close();
		}
		if (randstate == "New Hampshire") {
			string phonepre[] = {"603"};
			string randopre = phonepre[1 + (rand() % 1)];
		  myfile.open ("out.txt", ios::app);
		  myfile << gen_random(12) << mail[1 + (rand() % 9)] << " | State: " << randstate << " | Phone Number: " << randopre << "-" << gen_num(3) << "-" << gen_num(4) << "\n";
		  myfile.close();
		}
		if (randstate == "New Jersey") {
			string phonepre[] = {"201", "551", "609", "640", "732", "848", "856", "862", "908", "973"};
			string randopre = phonepre[1 + (rand() % 10)];
		  myfile.open ("out.txt", ios::app);
		  myfile << gen_random(12) << mail[1 + (rand() % 9)] << " | State: " << randstate << " | Phone Number: " << randopre << "-" << gen_num(3) << "-" << gen_num(4) << "\n";
		  myfile.close();
		}
		if (randstate == "New Mexico") {
			string phonepre[] = {"505", "575"};
			string randopre = phonepre[1 + (rand() % 2)];
		  myfile.open ("out.txt", ios::app);
		  myfile << gen_random(12) << mail[1 + (rand() % 9)] << " | State: " << randstate << " | Phone Number: " << randopre << "-" << gen_num(3) << "-" << gen_num(4) << "\n";
		  myfile.close();
		}
		if (randstate == "New York") {
			string phonepre[] = {"212", "315", "332", "347", "363", "516", "518", "585", "607", "631", "646", "680", "716", "718", "838", "845", "914", "917", "929", "934"};
			string randopre = phonepre[1 + (rand() % 20)];
		  myfile.open ("out.txt", ios::app);
		  myfile << gen_random(12) << mail[1 + (rand() % 9)] << " | State: " << randstate << " | Phone Number: " << randopre << "-" << gen_num(3) << "-" << gen_num(4) << "\n";
		  myfile.close();
		}
		if (randstate == "North Carolina") {
			string phonepre[] = {"252", "336", "472", "704", "743", "828", "910", "919", "980", "984"};
			string randopre = phonepre[1 + (rand() % 10)];
		  myfile.open ("out.txt", ios::app);
		  myfile << gen_random(12) << mail[1 + (rand() % 9)] << " | State: " << randstate << " | Phone Number: " << randopre << "-" << gen_num(3) << "-" << gen_num(4) << "\n";
		  myfile.close();
		}
		if (randstate == "North Dakota") {
			string phonepre[] = {"701"};
			string randopre = phonepre[1 + (rand() % 1)];
		  myfile.open ("out.txt", ios::app);
		  myfile << gen_random(12) << mail[1 + (rand() % 9)] << " | State: " << randstate << " | Phone Number: " << randopre << "-" << gen_num(3) << "-" << gen_num(4) << "\n";
		  myfile.close();
		}
		if (randstate == "Ohio") {
			string phonepre[] = {"216", "220", "234", "326", "330", "380", "419", "440", "513", "567", "614", "740", "937"};
			string randopre = phonepre[1 + (rand() % 13)];
		  myfile.open ("out.txt", ios::app);
		  myfile << gen_random(12) << mail[1 + (rand() % 9)] << " | State: " << randstate << " | Phone Number: " << randopre << "-" << gen_num(3) << "-" << gen_num(4) << "\n";
		  myfile.close();
		}
		if (randstate == "Oklahoma") {
			string phonepre[] = {"405", "539", "572", "580", "918"};
			string randopre = phonepre[1 + (rand() % 5)];
		  myfile.open ("out.txt", ios::app);
		  myfile << gen_random(12) << mail[1 + (rand() % 9)] << " | State: " << randstate << " | Phone Number: " << randopre << "-" << gen_num(3) << "-" << gen_num(4) << "\n";
		  myfile.close();
		}
		if (randstate == "Oregon") {
			string phonepre[] = {"458", "503", "541", "971"};
			string randopre = phonepre[1 + (rand() % 4)];
		  myfile.open ("out.txt", ios::app);
		  myfile << gen_random(12) << mail[1 + (rand() % 9)] << " | State: " << randstate << " | Phone Number: " << randopre << "-" << gen_num(3) << "-" << gen_num(4) << "\n";
		  myfile.close();
		}
		if (randstate == "Pennsylvania") {
			string phonepre[] = {"215", "223", "267", "272", "412", "445", "484", "570", "582", "610", "717", "724", "814", "835", "878"};
			string randopre = phonepre[1 + (rand() % 15)];
		  myfile.open ("out.txt", ios::app);
		  myfile << gen_random(12) << mail[1 + (rand() % 9)] << " | State: " << randstate << " | Phone Number: " << randopre << "-" << gen_num(3) << "-" << gen_num(4) << "\n";
		  myfile.close();
		}
		if (randstate == "Rhode Island") {
			string phonepre[] = {"401"};
			string randopre = phonepre[1 + (rand() % 1)];
		  myfile.open ("out.txt", ios::app);
		  myfile << gen_random(12) << mail[1 + (rand() % 9)] << " | State: " << randstate << " | Phone Number: " << randopre << "-" << gen_num(3) << "-" << gen_num(4) << "\n";
		  myfile.close();
		}
		if (randstate == "South Carolina") {
			string phonepre[] = {"803", "839", "843", "854", "864"};
			string randopre = phonepre[1 + (rand() % 5)];
		  myfile.open ("out.txt", ios::app);
		  myfile << gen_random(12) << mail[1 + (rand() % 9)] << " | State: " << randstate << " | Phone Number: " << randopre << "-" << gen_num(3) << "-" << gen_num(4) << "\n";
		  myfile.close();
		}
		if (randstate == "South Dakota") {
			string phonepre[] = {"605"};
			string randopre = phonepre[1 + (rand() % 1)];
		  myfile.open ("out.txt", ios::app);
		  myfile << gen_random(12) << mail[1 + (rand() % 9)] << " | State: " << randstate << " | Phone Number: " << randopre << "-" << gen_num(3) << "-" << gen_num(4) << "\n";
		  myfile.close();
		}
		if (randstate == "Tennessee") {
			string phonepre[] = {"423", "615", "629", "731", "865", "901", "931"};
			string randopre = phonepre[1 + (rand() % 7)];
		  myfile.open ("out.txt", ios::app);
		  myfile << gen_random(12) << mail[1 + (rand() % 9)] << " | State: " << randstate << " | Phone Number: " << randopre << "-" << gen_num(3) << "-" << gen_num(4) << "\n";
		  myfile.close();
		}
		if (randstate == "Texas") {
			string phonepre[] = {"210", "214", "254", "281", "325", "346", "361", "409", "430", "432", "469", "512", "682", "713", "726", "737", "806", "817", "830", "832", "903", "915", "936", "940", "945", "956", "972", "979"};
			string randopre = phonepre[1 + (rand() % 28)];
		  myfile.open ("out.txt", ios::app);
		  myfile << gen_random(12) << mail[1 + (rand() % 9)] << " | State: " << randstate << " | Phone Number: " << randopre << "-" << gen_num(3) << "-" << gen_num(4) << "\n";
		  myfile.close();
		}
		if (randstate == "Utah") {
			string phonepre[] = {"385", "435", "801"};
			string randopre = phonepre[1 + (rand() % 3)];
		  myfile.open ("out.txt", ios::app);
		  myfile << gen_random(12) << mail[1 + (rand() % 9)] << " | State: " << randstate << " | Phone Number: " << randopre << "-" << gen_num(3) << "-" << gen_num(4) << "\n";
		  myfile.close();
		}
		if (randstate == "Vermont") {
			string phonepre[] = {"802"};
			string randopre = phonepre[1 + (rand() % 1)];
		  myfile.open ("out.txt", ios::app);
		  myfile << gen_random(12) << mail[1 + (rand() % 9)] << " | State: " << randstate << " | Phone Number: " << randopre << "-" << gen_num(3) << "-" << gen_num(4) << "\n";
		  myfile.close();
		}
		if (randstate == "Virginia") {
			string phonepre[] = {"276", "434", "540", "571", "703", "757", "804", "826", "948"};
			string randopre = phonepre[1 + (rand() % 9)];
		  myfile.open ("out.txt", ios::app);
		  myfile << gen_random(12) << mail[1 + (rand() % 9)] << " | State: " << randstate << " | Phone Number: " << randopre << "-" << gen_num(3) << "-" << gen_num(4) << "\n";
		  myfile.close();
		}
		if (randstate == "Washington") {
			string phonepre[] = {"206", "253", "360", "425", "509", "564"};
			string randopre = phonepre[1 + (rand() % 6)];
		  myfile.open ("out.txt", ios::app);
		  myfile << gen_random(12) << mail[1 + (rand() % 9)] << " | State: " << randstate << " | Phone Number: " << randopre << "-" << gen_num(3) << "-" << gen_num(4) << "\n";
		  myfile.close();
		}
		if (randstate == "Washington DC") {
			string phonepre[] = {"202", "771"};
			string randopre = phonepre[1 + (rand() % 2)];
		  myfile.open ("out.txt", ios::app);
		  myfile << gen_random(12) << mail[1 + (rand() % 9)] << " | State: " << randstate << " | Phone Number: " << randopre << "-" << gen_num(3) << "-" << gen_num(4) << "\n";
		  myfile.close();
		}
		if (randstate == "West Virginia") {
			string phonepre[] = {"304", "681"};
			string randopre = phonepre[1 + (rand() % 2)];
		  myfile.open ("out.txt", ios::app);
		  myfile << gen_random(12) << mail[1 + (rand() % 9)] << " | State: " << randstate << " | Phone Number: " << randopre << "-" << gen_num(3) << "-" << gen_num(4) << "\n";
		  myfile.close();
		}
		if (randstate == "Wisconsin") {
			string phonepre[] = {"262", "414", "534", "608", "715", "920"};
			string randopre = phonepre[1 + (rand() % 6)];
		  myfile.open ("out.txt", ios::app);
		  myfile << gen_random(12) << mail[1 + (rand() % 9)] << " | State: " << randstate << " | Phone Number: " << randopre << "-" << gen_num(3) << "-" << gen_num(4) << "\n";
		  myfile.close();
		}
		if (randstate == "Wyoming") {
			string phonepre[] = {"307"};
			string randopre = phonepre[1 + (rand() % 1)];
		  myfile.open ("out.txt", ios::app);
		  myfile << gen_random(12) << mail[1 + (rand() % 9)] << " | State: " << randstate << " | Phone Number: " << randopre << "-" << gen_num(3) << "-" << gen_num(4) << "\n";
		  myfile.close();
		}
	}
    return 0;
}