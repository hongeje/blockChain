int main()
{
        int c,s;
        double f,p,w;
        scanf("%f,%f,%d",&p,&w,&s);
        c=s/250;
        switch(c)
        {
                case 0:d=0;break;
                case 1:d=0.02;break;
                case 2:
                case 3:d=0.05;break;
                case 4:
                case 5:
                case 6:
                case 7:d=0.08;break;
                default:d=0.15;
        }
        f=p*w*s*(1-d);
        printf("s=%d,d=%1.2f,f=%e\n",s,d,f);
        return 0;
}
