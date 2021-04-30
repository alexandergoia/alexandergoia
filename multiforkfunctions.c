void multiforkfct(int, vector<pid_t> *, void (*)());

void multifork(int n, vector<pid_t> *processes, void (*f)())
{
    int i;
    pid_t p;
    pid_t father = getpid();
    for(i = 1; i<= && getpid() == father; i++)
    {
        p = fork();
        switch(p)
        {
          case 0:
                  (*f)();
                  break;
          default :
                  (*processes).push_back(p);
                  break;
        }
    }
}


void multiforkexec();
void multiforkangel();
void multifork();

// g.alex, a smart kid
