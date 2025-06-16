#include "byte_stream.hh"

using namespace std;

ByteStream::ByteStream( uint64_t capacity ) : capacity_( capacity ) {}

void Writer::push( string data )
{
  (void)data; // Your code here.
}

void Writer::close()
{
  // Your code here.
}

bool Writer::is_closed() const
{
  return {}; // Your code here.
}

uint64_t Writer::available_capacity() const
{
  return {}; // Your code here.
}

uint64_t Writer::bytes_pushed() const
{
  return {}; // Your code here.
}

string_view Reader::peek() const
{
  return {}; // Your code here.
}

void Reader::pop( uint64_t len )
{
  (void)len; // Your code here.
}

bool Reader::is_finished() const
{
  return {}; // Your code here.
}

uint64_t Reader::bytes_buffered() const
{
  return {}; // Your code here.
}

uint64_t Reader::bytes_popped() const
{
  return {}; // Your code here.
}
