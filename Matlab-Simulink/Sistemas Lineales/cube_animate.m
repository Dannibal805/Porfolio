worl=vrworld('Cube_Virtual');
open(world);
%Draw the virtual world
fig=view(world,'-internal');
%part uno 

set(world,'Recordinterval',[0 tf]);
%defina e l nombre del video 
set(fig,'Record2DFileName','Cube_Movie.avi');
%habilita el 2D
set(fig,'Record2D','on');
%compresion
set(fig,'Record2SCompressQuality',100);
%Define recording mode to be scheduled
set(world,'RecordMode','scheduled');
index=0;

for t=t0:(tf-t0)/N:tf
    index=index+1;
    world.Cube1.translation=[0 0 z(index,1)];
    set(world,'Time',t);
    vrdrawnow;
end
close(world);
delete(world);