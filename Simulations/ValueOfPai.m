n=40;
in=0;
out=0;
fprintf(' R1      R2     sqrt(1-R1^2)    In/Out\n');
while n
    a=(randi([0.0,100.0]))./100.0;
    r1=a;
    a=(randi([0.0,100.0]))./100.0;
    r2=a;
    a=sqrt(1-(r1.*r1));
    rt=a;
    c='';
    if r2>rt
        c='Out';
        out=out+1;
    else
        c='In';
        in=in+1;
    end
    fprintf('%.2f    %.2f      %.4f         %s\n',r1,r2,rt,c);
    n=n-1;
end
fprintf('Pai= %.4f',4.*(in./(in+out)));