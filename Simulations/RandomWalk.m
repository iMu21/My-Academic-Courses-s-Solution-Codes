step=1;
x=0;
y=0;
c='';
x_axis=[];y_axis=[];
fprintf('Step    Random Number    Direction      x      y\n');
while step<=20
    r=randi([0,9]);
    if r<=4
        c='F';
        y=y+1;
    else
        if r<=7
            c='L';
            x=x-1;
        else
            c='R';
            x=x+1;
        end
        
    end
    x_axis=[x_axis,x];y_axis=[y_axis,y];
    fprintf('%d           %d               %c           %d       %d\n',step,r,c,x,y);
    step=step+1;
end
plot(x_axis,y_axis);