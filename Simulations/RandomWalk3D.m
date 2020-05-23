step=1;
x=0;
y=0;
z=0;
c='';
fprintf('Step    Random Number     Direction    --x--  --y--  --z--\n');
while step<=20
    r=randi([1,100]);
    if 1<=r&&20>=r
        c='L';
        x=x-1;
    end
    if 21<=r&&50>=r
        c='R';
        x=x+1;
    end
    if 51<=r&&65>=r
        c='U';
        z=z+1;
    end
    if 66<=r&&80>=r
        c='D';
        z=z-1;
    end
    if 81<=r&&90>=r
        c='B';
        y=y-1;
    end
    if 91<=r&&100>=r
        c='F';
        y=y+1;
    end
    fprintf('%d           %d               %c           %d       %d      %d\n',step,r,c,x,y,z);
    step=step+1;
end