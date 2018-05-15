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
			//if(max==min) continue;  //псевдо-очистка от пустоты и от универсумов (можно сделать сразу здесь, но... смотри, что будет при countFill={1,2,2,2})
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

		if(lo==0||lo==numHosts) continue;  //псевдо-очистка от пустоты и от универсумов

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
		bitCluster[i]=bitCluster[i]^(1<<((i/(numHosts-1))+(i%(numHosts-1)+1))%numHosts)?bitCluster[i]:0; //если bitCluster[i]==0u (ошибка в данных), то xor не уберет 1, а поставит его, Однако даже если прогнать через него ошибочные данные (DAT_SERIAL), то результат все равно окажется верным -> 0u (bitCluster[i])
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
		cluster[0].bits=~(~0u<<numHosts); //root cluster, размещен в начале списка, т.к. после сортировки он будет в начале списка
		cluster[0].bitCount=numHosts;
		for(unsigned int i=1;i<combHosts+1;i++){
			cluster[i].bits=bitCluster[i-1];
			cluster[i].bitCount=POPCNT(bitCluster[i-1]);
		}
		
		std::sort(&cluster[0],&cluster[combHosts]+1,[](const BwC a,const BwC b){return a.bitCount==b.bitCount&&a.bits<b.bits||a.bitCount>b.bitCount;});
		
		newSize=std::unique(&cluster[0],&cluster[combHosts]+1,[](const BwC a,const BwC b){return a.bits==b.bits;})-&cluster[0];

		/*std::unique удаляет только рядом стоящие элементы, поэтому это можно удалить
		http://en.cppreference.com/w/cpp/algorithm/unique
		http://rsdn.ru/forum/cpp.applied/2402846.flat#2402846
		а так, можно просто проверить скорость работы - будет ли это быстрее
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
		unsigned int length; //нужна для эвристики, используемой при построении цепочки пиров
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
						else currI=j; //это хорошо, если родитель был обнаружен далеко (на другой кеш-линии -> ребенок и родитель на разных кеш-линиях), однако если он обнаружен близко (на одной и той же кеш-линии), то лучше всего сделать break (т.е. не продолжать достраивать эту цепочку ребенок->родитель, а найти родителя для следующего "i"). В идеале, лучше работать блоками, размером с кеш-линию -> вначале найти всех родителей в пределах каждой кеш-линии, затем между кеш-линиями (берутся все дети без родителей в текущей кеш-линии, и ищутся их родители в следующей кеш-линии, т.е. ведется поиск между ближайшими парами [дети,родители] кеш-линий, при этом нужно учитывать размер кеша L1, чтобы не выйти за его приделы), т.е. мы стараемся не загружать в кеш то, что уже раньше в него загружали (принцип локальности обработки данных http://gameprogrammingpatterns.com/data-locality.html ). Иногда проблему можно решить не вручную, а директивой block_loop (Intel) https://habr.com/company/intel/blog/265095 . А частный случай этой проблемы решен в YASK framework от Intel https://habr.com/company/intel/blog/305128 . Пристроить "Старый, но полезный" https://www.akkadia.org/drepper/cpumemory.pdf , новое http://www.agner.org/optimize/microarchitecture.pdf ; http://www.ixbt.com/cpu/sandy-bridge.shtml , http://www.ixbt.com/cpu/cpu-microarchitecture-part-1.shtml (на ixbt раньше встречались очень хорошие статьи)
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

					childI=parentI,parentI=clParent[parentI]; //здесь ошибка? должно быть ";" вместо ","? Нет: http://ru.cppreference.com/w/cpp/language/operator%20precedence
					if(clChildsCount[childI]>1) break; //те же самые рекомендации по кеш-линиям, что были выше
				}
				while(parentI!=~0u){
					clChilds[clChildsOffset[parentI]+clChildsCount[parentI]].length+=length;

					childI=parentI,parentI=clParent[parentI]; //здесь ошибка? должно быть ";" вместо ","?
				}
			}
		}//TODO: debug clChilds[] child + length
		printf("p");


		for(unsigned int i=0;i<newSize;i++){
			unsigned int or=0;

			for(unsigned int j=0;j<clChildsCount[i];j++) or|=cluster[clChilds[clChildsOffset[i]+j].child].bits;

			cluster[i].bits&=~or; //можно заменить на xor ("&=~" -> "^="), т.к. мы точно знаем, что "bits" включает в себя "or"
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

		std::vector<unsigned int> clChildN(newSize,0u); //[i] <--> cluster[i] //вместо хранения "количества обработанных (пройденных) детей" внутри рекурсии //если бы где-нибудь выше посчиталась длина максимальной ветки (от первого родителя до его последнего *внука; максимальная вложенность рекурсии), то ее можно было использовать при задании размера вектора clChildN + потребовалось бы изменить логику: первый "bitCluster[i++]=cluster[clJ].bits" вынести за пределы цикла, а все остальные "bitCluster[i++]=cluster[clJ].bits" делать при переходе на уровень ниже (т.е. поместить "bitCluster[i++]=cluster[nextClJ].bits" в конец true ветви условия "clChildsCount[clJ]>0u && clChildN[clJ]<clChildsCount[clJ]")

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
	//+середина между min_i и max_i
	//+разделить на 2 части по середине
	//+найти медиану массива левой и правой части
	//+найти середину между значениями чисел по индексам medL_i и medR_i
	//+разделить на 2 части по новой середине, и сразу представить в двоичном виде

	//медианы std::nth_element(a,&a[1/2],&a[n],[](struct i,struct j){return i<j;});
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
такой вариант отклика - отсутствует в исходных данных

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

// LLTR использует "теневое" зондирование (зонд отбрасывает тень)


//перед началом сделать or|=a_i ("или" над всеми элементами) и отдельно сохранить элемент ~or (инвертировать or; clusterSuper.bits)
//- это клиенты, находящиеся на одном свитче с SuperApp
//и добавить элемент or в основной массив (если в основе сети - последовательное соединение свитчей,
//то будет несколько итоговых цепочек, чтобы это исключить - добавляем единый max элемент, подробнее см. "вариант #1")
//TODO[x]: вместо этого просто добавить "11111111" (по числу хостов), далее на 3-м шаге "11111111" автоматически превратится в ~or

/*вариант #1
+отсортировать по bitCount (от max к min)
+убрать дубликаты
+начиная с min элемента искать снизу (min) вверх (max) тот (первый попавшийся) элемент, куда входит текущий
 искать при помощи проверки bitCount(a_i)==bitCount(a_i|a_min), либо более простая проверка: a_i==a_i|a_min
+предыдущий шаг выполнять рекурсивно, попутно фиксировать цепочку элементов (путь рекурсии) - 
 к текущему элементу добавлять идентификатор следующего элемента
+найти следующий min элемент (не участвующий в цепочке) и повторить рекурсию

+создать обратную цепочку (от "родителей" к "потомкам")

+когда все элементы будут в "цепочке", то начиная с max элемента, сделать or|=a_i над его потомками, и применить a_max&=~or
 (либо "a_max^=or" - при корректных данных результат совпадет)
+рекурсивно повторить с потомками потомков
 (либо просто двигаемся от a_max до a_min, т.к. это дерево, и вершины его отсортированы в массиве)


+затем строить маршрут для трафика (RingSync) начиная с сохраненных в "~or" клиентов на свитче с SuperApp, 
 и продолжая "поиском в глубину" на построенной цепочке, 
 при этом при "входе в дерево" (подключение к свитчу - звезда) отдавать приоритет узлам с меньшей вложенностью:
 1. узел - ПК с клиентом
 2. узел - один свитч
 3. узел - два свитча (соединенных последовательно)
 4. узел - много свитчей (соединенных как угодно) - чем больше, тем ниже приоритет
 TODO[x]: исправить в коде: не добавлять кластер (узел) если он пуст (т.е. в нем отсутствуют "ПК с клиентами")
*/


/*
1111111111..
11111111....
..111.......
.....111....
11..........
*/


/*вариант #2
при помощи деления на 2 массива:
c=a^b
aa=a&c
bb=b&c
cc=a&b

и bitCount(cc=a&b) как-нибудь это сделать...
*/



/*
TODO-: можно добавить макрос (define) для удобного ввода двоичных данных (x0,x1,x2, ...) -> ((x0)<<0)| ((x1)<<1)|((x2)<<2) ...
TODO-: [сортировка; уже не нужно] при возвращении отсортированного массива в исходное состояние 
       (используя сохраненное положение каждого элемента) – не делать это сортировкой, 
	   а сделать вручную (отдельной функцией) – постараться ограничится одной дополнительной переменной 
	   для хранения замененного элемента; 
	   учесть случай, когда элемент уже стоит на своем месте – что делать дальше?
*/