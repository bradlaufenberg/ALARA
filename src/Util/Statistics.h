#include "alara.h"

#ifndef _STATISTICS_H
#define _STATISTICS_H

class Statistics 
{
protected:
  static ofstream treeFile;
  static int tree, nodeCtr, chainCtr;
  static float ticks;
  static float runtime[2];

public:
  
  static int accountNode(int,char*,int,int,double*);
  static int accountChain()
    { chainCtr++; return chainCtr;};

  static void initTree(char*);
  static void closeTree();
  static void cputime(float&,float&);

  static int numNodes()
    { return nodeCtr; };

};

#endif
