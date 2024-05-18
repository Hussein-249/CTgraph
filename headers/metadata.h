#ifndef METADATA_H
#define METADATA_H

typedef struct METADATA {
  // pointers to int arrays
  int (* rawxvals)[];
  int (* rawyvals)[];
  int (* adjustedxvals)[];
  int (* adjustedyvals)[];

  // string metadata
  char * description;
  char * xlabel;
  char * ylabel;
  char * xunit;
  char * yunit;
} metadata;

#endif
