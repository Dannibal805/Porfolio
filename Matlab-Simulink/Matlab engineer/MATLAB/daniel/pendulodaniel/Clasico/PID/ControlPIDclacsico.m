%plot(variable_1(:,1), variable_1(:,2))
%cntrol R cntrol T
plot(Posicion(:,1), Posicion(:,2))
title('Posicion control clasico PD');
xlabel('Poscicion del MSRA')
ylabel('Tiempo');
hold all



plot(Error(:,1),Error(:,2))
title('Error de posicion ');
ylabel('Poscicion del pendulo')
xlabel('Tiempo');


plot(Control(:,1),Control(:,2))
title('Control PD');
ylabel('Poscicion del pendulo')
xlabel('Tiempo');


%2 señales
% plot(ScopeData2(:,1),ScopeData2(:,2),ScopeData1(:,1),ScopeData1(:,2))
% title('Control P');
% ylabel('Poscicion del MSRA');
% xlabel('Tiempo');
% grid on


plot(Posi(:,1),Posi(:,2),Ref(:,1),Ref(:,2))
title('posicionVSref');
ylabel('Poscicion del pendulo');
xlabel('Tiempo');



