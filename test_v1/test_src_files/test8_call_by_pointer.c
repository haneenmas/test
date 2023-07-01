extern int bar(int n);

int main()
{
  call_f_ptr(&bar,0x45);
  return 0;
}