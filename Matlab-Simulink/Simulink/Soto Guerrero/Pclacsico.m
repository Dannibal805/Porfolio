%plot(variable_1(:,1), variable_1(:,2))
%cntrol R cntrol T
plot(Posicion(:,1), Posicion(:,2))
title('Posicion control clasico PD');
label('Poscicion del MSRA')
ylabel('Tiempo');
hold all



plot(Error1(:,1),Error1(:,2))
title('Error de posicion ');
label('Poscicion del MSRA')
ylabel('Tiempo');


plot(Control(:,1),Control(:,2))
title('Control P');
label('Poscicion del MSRA')
ylabel('Tiempo');
 

%2 señales
% plot(ScopeData2(:,1),ScopeData2(:,2),ScopeData1(:,1),ScopeData1(:,2))
% title('Control P');
% ylabel('Poscicion del MSRA');
% xlabel('Tiempo');
% grid on

 

