difference=0;
heads=0;
tails=0;
si=1;
gmno=1;
c='';
rnd=5; 
disp('Game No   SI No  Random Numb   Head/Tail  C_Heads   C_Tails   Difference');
while gmno<=5
    rnd=randi([0,9]);
    if rnd<5
        heads=heads+1;
        c='H';
    else
        tails=tails+1;
        c='T';
    end
    difference=abs(heads-tails);
    fprintf('  %d       %d          %d           %c           %d        %d        %d\n',gmno,si,rnd,c,heads,tails,difference);
    if difference==3
        if si<=8
            fprintf('Win BDT %d\n',8-si);
        else 
            fprintf('Lose BDT %d\n',si-8);
        end
        heads=0;
        tails=0;
        difference=0;
        si=0;
        gmno=gmno+1;
    end
    si=si+1;
end

