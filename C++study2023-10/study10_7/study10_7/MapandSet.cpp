//#include<iostream>
//#include<map>
//#include<set>
//using namespace std;
//
//int main()
//{
//	map<string, int> word_count;
//	set<string> exclude = { "the","a","an",
//	                        "The","A","An"};
//	string word;
//
//	while (cin>>word)
//	{
//		if (exclude.find(word) == exclude.end())
//			word_count[word]++;
//	}
//
//	for (const auto& w : word_count)
//		cout << w.first << " occurs " << w.second << ((w.second > 1) ? " times " : " time ") << endl;
//
//	return 0;
//}