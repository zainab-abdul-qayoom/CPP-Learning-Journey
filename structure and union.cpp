#include<iostream>
using namespace std;
struct stu  //in structure all members memory made separated output of structure is 16 bytes (all member doesn't share 1 memory) adv: execution fast
//structure used in nowadays bec we gave alot of memory
{
	int marks;  //int 4-bytes
	float avg;  // float 4-bytes
	double salary; //double 8-bytes   (4+4+8=16-bytes)
};
union stu2 //in union the biggest memory made and remaining all members memory stored in biggest byte memory (all member share 1 memory) adv: memory less used
//union used in old era bec at that time we don't have alot of memory
{
	int marks; //int 4-bytes
	float avg; //float 4-bytes
	double salary; //double 8-bytes   (8-bytes)
};
int main()
{
	struct stu s;
	union stu2 s2;
	cout<<"structure Size="<<sizeof(s)<<endl;
	cout<<"union Size="<<sizeof(s2);
}
