#include <stdio.h>
#include "stack.h"

int isEmpty(StackNodePtr topPtr)
{
  return topPtr == NULL;
}

int isEmpty(QueueNodePtr headPtr)
{
  return headPtr == NULL;
}
