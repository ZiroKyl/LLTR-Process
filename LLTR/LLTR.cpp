// LLTR.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
#define DAT_SERIAL

#ifdef DAT_SIMPLE
	const unsigned int  numHosts = 3; //without "hostS"
	const unsigned int combHosts = (numHosts-1)*(numHosts);

	const int countFill[combHosts][numHosts]={
		{300,164,164},
		{300,164,164},
		{300,300,164},
		{214,300,300},
		{214,300,300},
		{300,164,300},
	};
#elif defined DAT_TREE
	const unsigned int  numHosts = 5; //without "hostS"
	const unsigned int combHosts = (numHosts-1)*(numHosts);

	const int countFill[combHosts][numHosts]={
		{300,164,164,164,164},
		{300,164,164,164,164},
		{300,164,164,164,164},
		{300,164,164,164,164},
		{300,300,164,300,300},
		{300,300,300,214,214},
		{300,300,300,214,214},
		{264,300,300,300,300},
		{300,300,300,214,214},
		{300,300,300,214,214},
		{264,300,300,300,300},
		{300,164,300,300,300},
		{300,300,300,300,164},
		{264,300,300,300,300},
		{300,214,214,300,300},
		{300,214,214,300,300},
		{264,300,300,300,300},
		{300,214,214,300,300},
		{300,214,214,300,300},
		{299,299,299,163,299}
	};
#elif defined DAT_SERIAL
	const unsigned int  numHosts = 9; //without "hostS"
	const unsigned int combHosts = (numHosts-1)*(numHosts);

	const int countFill[combHosts][numHosts]={
		{300,164,164,164,164,164,164,300,300},
		{300,164,164,164,164,164,164,300,300},
		{300,164,164,164,164,164,164,300,300},
		{300,164,164,164,164,164,164,300,300},
		{300,164,164,164,164,164,164,300,300},
		{300,164,164,164,164,164,164,300,300},
		{300,300,300,300,300,300,300,164,164},
		{300,300,300,300,300,300,300,164,164},
		{300,300,164,300,300,300,300,300,300},
		{300,300,300,164,164,164,164,300,300},
		{300,300,300,164,164,164,164,300,300},
		{300,300,300,164,164,164,164,300,300},
		{300,300,300,164,164,164,164,300,300},
		{300,300,300,300,300,300,300,214,214},
		{300,300,300,300,300,300,300,214,214},
		{214,300,300,300,300,300,300,300,300},
		{300,300,300,164,164,164,164,300,300},
		{300,300,300,164,164,164,164,300,300},
		{300,300,300,164,164,164,164,300,300},
		{300,300,300,164,164,164,164,300,300},
		{300,300,300,300,300,300,300,214,214},
		{300,300,300,300,300,300,300,214,214},
		{214,300,300,300,300,300,300,300,300},
		{300,164,300,300,300,300,300,300,300},
		{300,300,300,300,164,300,300,300,300},
		{300,300,300,300,300,164,164,300,300},
		{300,300,300,300,300,164,164,300,300},
		{300,300,300,300,300,300,300,264,264},
		{300,300,300,300,300,300,300,264,264},
		{264,300,300,300,300,300,300,300,300},
		{300,214,300,300,300,300,300,300,300},
		{300,300,214,300,300,300,300,300,300},
		{300,300,300,300,300,164,164,300,300},
		{300,300,300,300,300,164,164,300,300},
		{300,300,300,300,300,300,300,264,264},
		{300,300,300,300,300,300,300,264,264},
		{264,300,300,300,300,300,300,300,300},
		{300,214,300,300,300,300,300,300,300},
		{300,300,214,300,300,300,300,300,300},
		{300,300,300,164,300,300,300,300,300},
		{300,300,300,300,300,300,164,300,300},
		{300,300,300,300,300,300,300,300,300},
		{300,300,300,300,300,300,300,300,300},
		{300,300,300,300,300,300,300,300,300},
		{300,264,300,300,300,300,300,300,300},
		{300,300,264,300,300,300,300,300,300},
		{300,300,300,214,300,300,300,300,300},
		{300,300,300,300,214,300,300,300,300},
		{300,300,300,300,300,300,300,300,300},
		{300,300,300,300,300,300,300,300,300},
		{300,300,300,300,300,300,300,300,300},
		{300,264,300,300,300,300,300,300,300},
		{300,300,264,300,300,300,300,300,300},
		{300,300,300,214,300,300,300,300,300},
		{300,300,300,300,214,300,300,300,300},
		{300,300,300,300,300,164,300,300,300},
		{300,300,300,300,300,300,300,300,164},
		{214,300,300,300,300,300,300,300,300},
		{300,214,214,214,214,214,214,300,300},
		{300,214,214,214,214,214,214,300,300},
		{300,214,214,214,214,214,214,300,300},
		{300,214,214,214,214,214,214,300,300},
		{300,214,214,214,214,214,214,300,300},
		{300,214,214,214,214,214,214,300,300},
		{214,300,300,300,300,300,300,300,300},
		{300,214,214,214,214,214,214,300,300},
		{300,214,214,214,214,214,214,300,300},
		{300,214,214,214,214,214,214,300,300},
		{300,214,214,214,214,214,214,300,300},
		{300,214,214,214,214,214,214,300,300},
		{300,214,214,214,214,214,214,300,300},
		{299,299,299,299,299,299,299,163,299}
	};
#elif defined DAT_EX
#include "DAT_EX.h"
#endif

	//NOTE: vector only for debug, for release use malloc()/new()

	std::vector<unsigned int> bitCluster(combHosts);  //or std::bitset<32> bitCluster[combHosts+1] and std::bitset::count()

	//==[Binarization + Remove 0 and ~0 + Try to delete current tested PC]==//
	for(unsigned int i=0;i<combHosts;i++){
		int average;{
			int max,min;
			max=min=countFill[i][0];
			for(int j=1;j<numHosts;j++){
				max=countFill[i][j]>max?countFill[i][j]:max;
				min=countFill[i][j]<min?countFill[i][j]:min;
			}
			//if(max==min) continue;  //������-������� �� ������� � �� ����������� (����� ������� ����� �����, ��... ������, ��� ����� ��� countFill={1,2,2,2})
			average=(max+min)/2;
		}

		int lo=0;
		struct CnN{
			int Count;
			//int n;
		}iFill[numHosts];
		for(int j=0,hi=numHosts-1;j<numHosts;j++){
			if(countFill[i][j]<average){
				iFill[lo].Count=countFill[i][j];
				//iFill[lo].n=j;
				lo++;
			}else{
				iFill[hi].Count=countFill[i][j];
				//iFill[hi].n=j;
				hi--;
			}
		}

		bitCluster[i]=0;

		if(lo==0||lo==numHosts) continue;  //������-������� �� ������� � �� �����������

		int averageMed;{
			CnN *iFillLo=&iFill[0];
			CnN *iFillHi=&iFill[lo];
			const int hi=numHosts-lo;

			if(lo>1) std::nth_element(iFillLo,&iFillLo[lo/2],&iFillLo[lo],[](const CnN a,const CnN b){return a.Count<b.Count;});
			if(hi>1) std::nth_element(iFillHi,&iFillHi[hi/2],&iFillHi[hi],[](const CnN a,const CnN b){return a.Count<b.Count;});

			averageMed=(iFillLo[lo/2].Count+iFillHi[hi/2].Count)/2;
		}

		for(unsigned int j=0;j<numHosts;j++) bitCluster[i]|=(countFill[i][j]<averageMed)?1<<j:0;
		//	for(unsigned int j=0;j<numHosts;j++) printf("%c",(countFill[i][j]<averageMed)?'1':'.');
		//	printf("\n");

		//delete current ( ((i/(numHosts-1))+(i%(numHosts-1)+1))%numHosts ) tested PC, if only this PC showed reaction (...1.......)
		bitCluster[i]=bitCluster[i]^(1<<((i/(numHosts-1))+(i%(numHosts-1)+1))%numHosts)?bitCluster[i]:0; //���� bitCluster[i]==0u (������ � ������), �� xor �� ������ 1, � �������� ���, ������ ���� ���� �������� ����� ���� ��������� ������ (DAT_SERIAL), �� ��������� ��� ����� �������� ������ -> 0u (bitCluster[i])
		//	for(unsigned int j=0;j<numHosts;j++) printf("%c",(bitCluster[i]&(1<<j))?'1':'.');
		//	printf("\n");

		//printf("%d\t%d\n",bitCluster[i], (((i/(numHosts-1))+(i%(numHosts-1)+1))%numHosts));
	}


	struct BwC{
		unsigned int bits;
		int bitCount;
	};

	std::vector<BwC> cluster(combHosts+1);

	//==[Deduplication + Add root cluster]==//
	size_t newSize;{
		cluster[0].bits=~(~0u<<numHosts); //root cluster, �������� � ������ ������, �.�. ����� ���������� �� ����� � ������ ������
		cluster[0].bitCount=numHosts;
		for(unsigned int i=1;i<combHosts+1;i++){
			cluster[i].bits=bitCluster[i-1];
			cluster[i].bitCount=POPCNT(bitCluster[i-1]);
		}
		
		std::sort(&cluster[0],&cluster[combHosts]+1,[](const BwC a,const BwC b){return a.bitCount==b.bitCount&&a.bits<b.bits||a.bitCount>b.bitCount;});
		
		newSize=std::unique(&cluster[0],&cluster[combHosts]+1,[](const BwC a,const BwC b){return a.bits==b.bits;})-&cluster[0];

		/*std::unique ������� ������ ����� ������� ��������, ������� ��� ����� �������
		http://en.cppreference.com/w/cpp/algorithm/unique
		http://rsdn.ru/forum/cpp.applied/2402846.flat#2402846
		� ���, ����� ������ ��������� �������� ������ - ����� �� ��� �������
		{//unique sorted
			unsigned int ia=0;
			int aCount=cluster[0].bitCount;
			BwC *spaceA=cluster;

			for(unsigned int ib=1;ib<combHosts+1;ib++){
				if(cluster[ib].bitCount!=aCount){
					aCount=cluster[ib].bitCount;

					//TODO: rename "spaceB" to another name, it is not "B" point of "space" (&cluster[ia] is "B" point)
					BwC *spaceB=&cluster[ib];
					if(ib>ia+1) spaceB=std::unique(&cluster[ia],&cluster[ib],[](const BwC a,const BwC b){return a.bits==b.bits;});
					std::move(&cluster[ia],spaceB,stdext::checked_array_iterator<BwC*>(spaceA,&cluster[combHosts+1]-spaceA));
					spaceA+=spaceB-&cluster[ia];
					ia=ib;
				}
			}
			{
				BwC *spaceB=&cluster[combHosts+1];
				if(combHosts+1>ia+1) spaceB=std::unique(&cluster[ia],&cluster[combHosts+1],[](const BwC a,const BwC b){return a.bits==b.bits;});
				std::move(&cluster[ia],spaceB,stdext::checked_array_iterator<BwC*>(spaceA,&cluster[combHosts+1]-spaceA));
				spaceA+=spaceB-&cluster[ia];
			}

			newSize=spaceA-cluster;
		}*/
	
		if(cluster[newSize-1].bits==0u) newSize--;
	}

	bitCluster.resize(newSize);
	cluster.resize(newSize);
	//
		for(unsigned int i=0;i<newSize;i++){
			for(unsigned int j=0;j<numHosts;j++) printf("%c",(cluster[i].bits&(1<<j))?'1':'.');
			printf("\n");
		}
	//

	
	struct CwL{
		unsigned int child;  //child#
		unsigned int length; //����� ��� ���������, ������������ ��� ���������� ������� �����
	};

	std::vector<unsigned int> clParent      (newSize,~0u);          //[i] <--> cluster[i]
	std::vector<unsigned int> clChildsCount (newSize, 0u);          //[i] <--> cluster[i]
	std::vector<unsigned int> clChildsOffset(newSize,~0u);          //[i] <--> cluster[i]
	std::vector<CwL>          clChilds      (newSize);/*{~0u,0u}*/  //[clChildsOffset[i]] <--> cluster[i]

	//==[Find parents + Create childs map + Reduce clusters (clearing parents from childs)]==//
	{
		for(int i=0;i<newSize;i++){	//not need for vector(n,val)
			clParent      [i] =~0u;
			clChildsCount [i] = 0u;
			clChildsOffset[i] =~0u;
			clChilds[i].child =~0u;
			clChilds[i].length= 0u;
		}

		for(unsigned int i=newSize-1;i>0;i--){
			unsigned int currI=i;

			if(clParent[i]==~0u){
				for(unsigned int j=i;j--;){
					if(cluster[j].bits==(cluster[j].bits|cluster[currI].bits)){
						clParent[currI]=j;
						clChildsCount[j]++;
						
						if(clParent[j]!=~0u) break;
						else currI=j; //��� ������, ���� �������� ��� ��������� ������ (�� ������ ���-����� -> ������� � �������� �� ������ ���-������), ������ ���� �� ��������� ������ (�� ����� � ��� �� ���-�����), �� ����� ����� ������� break (�.�. �� ���������� ����������� ��� ������� �������->��������, � ����� �������� ��� ���������� "i"). � ������, ����� �������� �������, �������� � ���-����� -> ������� ����� ���� ��������� � �������� ������ ���-�����, ����� ����� ���-������� (������� ��� ���� ��� ��������� � ������� ���-�����, � ������ �� �������� � ��������� ���-�����, �.�. ������� ����� ����� ���������� ������ [����,��������] ���-�����, ��� ���� ����� ��������� ������ ���� L1, ����� �� ����� �� ��� �������), �.�. �� ��������� �� ��������� � ��� ��, ��� ��� ������ � ���� ��������� (������� ����������� ��������� ������ http://gameprogrammingpatterns.com/data-locality.html ). ������ �������� ����� ������ �� �������, � ���������� block_loop (Intel) https://habr.com/company/intel/blog/265095 . � ������� ������ ���� �������� ����� � YASK framework �� Intel https://habr.com/company/intel/blog/305128 . ���������� "������, �� ��������" https://www.akkadia.org/drepper/cpumemory.pdf , ����� http://www.agner.org/optimize/microarchitecture.pdf ; http://www.ixbt.com/cpu/sandy-bridge.shtml , http://www.ixbt.com/cpu/cpu-microarchitecture-part-1.shtml (�� ixbt ������ ����������� ����� ������� ������)
					}
				}
			}
		}//TODO: debug clParent[]
		printf("o");


		for(unsigned int i=0,childsOffset=0;i<newSize;i++){
			if(clChildsCount[i]!=0){
				clChildsOffset[i]=childsOffset;
				childsOffset+=clChildsCount[i];

				clChildsCount[i]=0;
			}
		}

		for(unsigned int i=newSize-1;i>0;i--){
			if(clChildsCount[i]==0){
				unsigned int childI=i,parentI=clParent[i];
				unsigned int length=0;

				while(parentI!=~0u){
					clChilds[clChildsOffset[parentI]+clChildsCount[parentI]].child=childI;
					clChilds[clChildsOffset[parentI]+clChildsCount[parentI]].length+=++length;
					
					clChildsCount[parentI]++;

					childI=parentI,parentI=clParent[parentI]; //����� ������? ������ ���� ";" ������ ","? ���: http://ru.cppreference.com/w/cpp/language/operator%20precedence
					if(clChildsCount[childI]>1) break; //�� �� ����� ������������ �� ���-������, ��� ���� ����
				}
				while(parentI!=~0u){
					clChilds[clChildsOffset[parentI]+clChildsCount[parentI]].length+=length;

					childI=parentI,parentI=clParent[parentI]; //����� ������? ������ ���� ";" ������ ","?
				}
			}
		}//TODO: debug clChilds[] child + length
		printf("p");


		for(unsigned int i=0;i<newSize;i++){
			unsigned int or=0;

			for(unsigned int j=0;j<clChildsCount[i];j++) or|=cluster[clChilds[clChildsOffset[i]+j].child].bits;

			cluster[i].bits&=~or; //����� �������� �� xor ("&=~" -> "^="), �.�. �� ����� �����, ��� "bits" �������� � ���� "or"
		}
		//TODO: debug cluster[]
		printf("r");
	}

	//==[Build chain of peers]==//
	size_t chainSize;{
		for(unsigned int i=0;i<newSize;i++){
			if(clChildsOffset[i]!=~0u){
				std::sort(&clChilds[clChildsOffset[i]],&clChilds[clChildsOffset[i]+clChildsCount[i]-1]+1/*for vector range checker*/,
					[](const CwL a,const CwL b){return a.length<b.length;});
			}
		}//TODO: debug clChilds[]
		printf("e");

		std::vector<unsigned int> clChildN(newSize,0u); //[i] <--> cluster[i] //������ �������� "���������� ������������ (����������) �����" ������ �������� //���� �� ���-������ ���� ����������� ����� ������������ ����� (�� ������� �������� �� ��� ���������� *�����; ������������ ����������� ��������), �� �� ����� ���� ������������ ��� ������� ������� ������� clChildN + ������������� �� �������� ������: ������ "bitCluster[i++]=cluster[clJ].bits" ������� �� ������� �����, � ��� ��������� "bitCluster[i++]=cluster[clJ].bits" ������ ��� �������� �� ������� ���� (�.�. ��������� "bitCluster[i++]=cluster[nextClJ].bits" � ����� true ����� ������� "clChildsCount[clJ]>0u && clChildN[clJ]<clChildsCount[clJ]")

		for(int i=0;i<newSize;i++) clChildN[i]=0u;      //not need for vector(n,val)

		chainSize=0;
		for(unsigned int clJ=0;chainSize<newSize && clJ!=~0u;){
			if(clChildN[clJ]==0u){
				if(cluster[clJ].bits!=0u) bitCluster[chainSize++]=cluster[clJ].bits;
				else newSize--;
			}

			if(clChildsCount[clJ]>0u && clChildN[clJ]<clChildsCount[clJ]){
				unsigned int nextClJ=clChilds[clChildsOffset[clJ]+clChildN[clJ]].child;
				clChildN[clJ]++;
				clJ=nextClJ;
			}else{
				clJ=clParent[clJ];
			}
		}//TODO: debug bitCluster[]
		printf("v");
	}
	//
		printf("\n");
		for(unsigned int i=0;i<chainSize;i++){
			for(unsigned int j=0;j<numHosts;j++) printf("%c",(bitCluster[i]&(1<<j))?'1':'.');
			printf("\n");
		}
	//



	//k-medoids
	//+�������� ����� min_i � max_i
	//+��������� �� 2 ����� �� ��������
	//+����� ������� ������� ����� � ������ �����
	//+����� �������� ����� ���������� ����� �� �������� medL_i � medR_i
	//+��������� �� 2 ����� �� ����� ��������, � ����� ����������� � �������� ����

	//������� std::nth_element(a,&a[1/2],&a[n],[](struct i,struct j){return i<j;});
	//https://habr.com/post/346930/
	//https://habr.com/post/247053/
	//https://stackoverflow.com/questions/11068429/nth-element-implementations-complexities

	//c=a^b
	//aa=a&c
	//bb=b&c
	//cc=a&b
	//

	return 0;
}

/*
=====================

.....11..... - a
..11111111.. - b

..111..111.. - c=a^b

............ - aa=a&c
..111..111.. - bb=b&c
.....11..... - cc=a&b

=====================

..111....... - a
.......111.. - b

..111..111.. - c=a^b

..111....... - aa=a&c
.......111.. - bb=b&c
............ - cc=a&b

=====================
����� ������� ������� - ����������� � �������� ������

...1111..... - a
.....1111... - b

...11..11... - c=a^b

...11....... - aa=a&c
.......11... - bb=b&c
.....11..... - cc=a&b

=====================

.....11..... - a
.....11..... - b

............ - c=a^b

............ - aa=a&c
............ - bb=b&c
.....11..... - cc=a&b

=====================
*/

// LLTR ���������� "�������" ������������ (���� ����������� ����)


//����� ������� ������� or|=a_i ("���" ��� ����� ����������) � �������� ��������� ������� ~or (������������� or; clusterSuper.bits)
//- ��� �������, ����������� �� ����� ������ � SuperApp
//� �������� ������� or � �������� ������ (���� � ������ ���� - ���������������� ���������� �������,
//�� ����� ��������� �������� �������, ����� ��� ��������� - ��������� ������ max �������, ��������� ��. "������� #1")
//TODO[x]: ������ ����� ������ �������� "11111111" (�� ����� ������), ����� �� 3-� ���� "11111111" ������������� ����������� � ~or

/*������� #1
+������������� �� bitCount (�� max � min)
+������ ���������
+������� � min �������� ������ ����� (min) ����� (max) ��� (������ ����������) �������, ���� ������ �������
 ������ ��� ������ �������� bitCount(a_i)==bitCount(a_i|a_min), ���� ����� ������� ��������: a_i==a_i|a_min
+���������� ��� ��������� ����������, ������� ����������� ������� ��������� (���� ��������) - 
 � �������� �������� ��������� ������������� ���������� ��������
+����� ��������� min ������� (�� ����������� � �������) � ��������� ��������

+������� �������� ������� (�� "���������" � "��������")

+����� ��� �������� ����� � "�������", �� ������� � max ��������, ������� or|=a_i ��� ��� ���������, � ��������� a_max&=~or
 (���� "a_max^=or" - ��� ���������� ������ ��������� ��������)
+���������� ��������� � ��������� ��������
 (���� ������ ��������� �� a_max �� a_min, �.�. ��� ������, � ������� ��� ������������� � �������)


+����� ������� ������� ��� ������� (RingSync) ������� � ����������� � "~or" �������� �� ������ � SuperApp, 
 � ��������� "������� � �������" �� ����������� �������, 
 ��� ���� ��� "����� � ������" (����������� � ������ - ������) �������� ��������� ����� � ������� ������������:
 1. ���� - �� � ��������
 2. ���� - ���� �����
 3. ���� - ��� ������ (����������� ���������������)
 4. ���� - ����� ������� (����������� ��� ������) - ��� ������, ��� ���� ���������
 TODO[x]: ��������� � ����: �� ��������� ������� (����) ���� �� ���� (�.�. � ��� ����������� "�� � ���������")
*/


/*
1111111111..
11111111....
..111.......
.....111....
11..........
*/


/*������� #2
��� ������ ������� �� 2 �������:
c=a^b
aa=a&c
bb=b&c
cc=a&b

� bitCount(cc=a&b) ���-������ ��� �������...
*/



/*
TODO-: ����� �������� ������ (define) ��� �������� ����� �������� ������ (x0,x1,x2, ...) -> ((x0)<<0)| ((x1)<<1)|((x2)<<2) ...
TODO-: [����������; ��� �� �����] ��� ����������� ���������������� ������� � �������� ��������� 
       (��������� ����������� ��������� ������� ��������) � �� ������ ��� �����������, 
	   � ������� ������� (��������� ��������) � ����������� ����������� ����� �������������� ���������� 
	   ��� �������� ����������� ��������; 
	   ������ ������, ����� ������� ��� ����� �� ����� ����� � ��� ������ ������?
*/