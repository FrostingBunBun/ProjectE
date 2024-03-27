#include <stdio.h>

#include "common.h"
#include "chunk.h"
#include "debug.h"

#include "memory.h"



int main(int argc, const char* argv[]) {

  Chunk chunk;
  initChunk(&chunk);
  writeChunk(&chunk, OP_RETURN);

  disassembleChunk(&chunk, "test chunk");
  freeChunk(&chunk);

  printf("Press Enter to exit...");
  getchar(); // Wait for the user to press Enter
  return 0;
}
