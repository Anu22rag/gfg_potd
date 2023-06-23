
// int leastInterval(int N, int k, vector<char> &tasks) {
//        
//         int charf[26]={0};
//         int maxfrq=0;
//         for(int i=0;i<N;i++){
//             charf[tasks[i]-'A']++;
//             maxfrq=max(maxfrq,charf[tasks[i]-'A']);
//         }
//         int maxfrqc=0;
//         for(int i=0;i<26;i++){
//             if(charf[i]==maxfrq)maxfrqc++;
//         }
//         int ans=(maxfrq-1)*(k+1)+maxfrqc;
//         ans=max(ans,N);
//         return ans;
        
//     }
    
 //------>O(N) time and O(1) space