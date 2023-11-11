void oula_init(){
    flag[1] = 1;
    for (int i=1;i<N;++i){
        if (flag[i]==0) p[++tot] = i;
        for (int j=1;j <=tot;j++){
            if (i*p[j]>=N) break;
            flag[i*p[j]] = 1;
            if (i%p[j]==0) break;
        }
    }
}
