/**
 * @file MemoryContents.hh
 *
 * Declaration of MemoryContents class.
 *
 * @author Jussi Nyk�nen 2004 (nykanen@cs.tut.fi)
 * @author Pekka J��skel�inen 2005 (pjaaskel@cs.tut.fi)
 * @note rating: red
 */

#ifndef TTA_MEMORY_CONTENTS_HH
#define TTA_MEMORY_CONTENTS_HH

#include "PagedArray.hh"
#include "Memory.hh"

/// Size of a memory chunk in MAUs.
#define MEM_CHUNK_SIZE (1024)

/**
 * Models the data contained in memory.
 */
class MemoryContents : public PagedArray<Memory::MAU, MEM_CHUNK_SIZE, 0> {
public:
    MemoryContents(int size) : PagedArray<Memory::MAU, MEM_CHUNK_SIZE, 0>(
        size) { }
    ~MemoryContents() { }
};

#endif
