#include <gperftools/profiler.h>
#include <signal.h>
#include "iostream"
#include <gperftools/heap-profiler.h>
#include <vector>

using namespace std;
static void gpref_callback(int signum){
    if(signum ==SIGUSR1)
    {
        cout << "捕获到Profiler Start" << endl;
        ProfilerStart("test.prof");    
    }
    if (signum == SIGUSR2)
    {
        cout << "捕获到Profiler Stop()" <<endl;
        ProfilerStop();
    }
}

static void set_signal(){
    struct sigaction profstat;
    profstat.sa_handler = gpref_callback;
    profstat.sa_flags = 0;
    sigemptyset(&profstat.sa_mask);
    sigaddset(&profstat.sa_mask, SIGUSR1);
    sigaddset(&profstat.sa_mask, SIGUSR2);
    if(sigaction(SIGUSR1, &profstat, NULL)<0)
    {
        cout << "<<sigusr1 error!!>>" << endl;
    }   
    if(sigaction(SIGUSR2, &profstat, NULL)<0)
    {
        cout << "<<sigusr2 error!!>>" << endl;
    }

}


vector<vector<int> > calShuDu(int m)
{
    vector<vector<int> > res(m, vector<int>(0));
    int k =1;
    int mid = (m+1)>>1;
    res[0][mid] = k;
    for(int i = 0;i<m;++i)
    {
        for(int j= (m+1)>>1; j<m; ++j)
        {
           if(i-1<0) res[i]
        }
    }
    return res;

}
// int main() {
//   //  set_signal();
//     HeapProfilerStart("heap_profiler.prof");
//   //  ProfilerStart("test.prof"); // test.prof is the name of profile file`:wq
//     test3();
//     HeapProfilerStop();
//   //  ProfilerStop();
//     return 0;
// }

int main()
{
    vector<vector<int> > res;
    res = calShuDu(3);
    cout << res << endl;
}
