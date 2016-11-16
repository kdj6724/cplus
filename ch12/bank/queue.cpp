// 12.11
// queue.cpp
#include <cstdlib>
#include "queue.h"

Queue::Queue(int qs) : qsize(qs) {
  front = rear = NULL;
  items = 0;
}

Queue::~Queue() {
  Node *temp;
  while (front != NULL) {
    temp = front;
    front = front->next;
    delete temp;
  }
}

bool Queue::isempty() const {
  if (items == 0)
    return true;

  return false;
}

bool Queue::isfull() const {
  if (items >= qsize)
    return true;
  
  return false;
}

int Queue::queuecount() const {
  return qsize;
}

bool Queue::enqueue(const Item &item) {
  if (isfull())
    return false;

  Node *add = new Node;
  add->item = item;
  add->next = NULL;
  items++;
  if (front == NULL)
    front = add;
  else
    front->next = add;
  rear = add;

  return true;
}

bool Queue::dequeue(Item &item) {
  if (isempty())
    return false;
  
  item = front ->item;
  items--;
  Node *temp = front;
  front = front->next;
  delete temp;
  if (items == 0)
    rear = NULL;

  return true;
}

void Customer::set(long when) {
  processtime = (std::rand() % 3) + 1;
  arrive = when;
}

