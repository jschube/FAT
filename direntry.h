/*
 * direntry.h
 *
 * Functions used to deal with directory entries.
 */

#ifndef DIRENTRY_H
#define DIRENTRY_H

// Add stuff pertaining to the manipulation of an individual directory entry here
struct DirectoryEntry {
  int startCluster;
  int size;
  char *name;
  char *extension;
  char *clusterChain;
};

void printDirectoryEntry(const struct DirectoryEntry *entry, const char *parentPath);

// trims the trailing spaces of a string
void trimString(char *str);

#endif
