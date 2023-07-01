
int main(int argc, char** argv)
{
  if(argc != 5)
    return 1;
  for(int i = 0; i < argc; i++)
  {
    bar(*(*(argv+i) + i));
  }
  return 0;
}