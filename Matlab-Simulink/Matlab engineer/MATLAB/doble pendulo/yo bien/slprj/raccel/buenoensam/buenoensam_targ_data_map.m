  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 25;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtP)
    ;%
      section.nData     = 114;
      section.data(114)  = dumData; %prealloc
      
	  ;% rtP.Out1_Y0
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.One_Value
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtP.Out1_Y0_ghntmymz3b
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtP._Value
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtP.Out1_Y0_klcfklngrc
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtP._Value_acmvxliyx2
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtP.Out1_Y0_a4imrrdivk
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtP._Value_e0ta0qwj3k
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtP.Out1_Y0_duv5qtswya
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtP._Value_mluc0hlrly
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtP.Out1_Y0_a5ath2rlz5
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtP._Value_dmvuom0gyb
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtP.Out1_Y0_d5f5sow4gl
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtP._Value_ecygccsndv
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtP.Out1_Y0_ljvvz0chsl
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 14;
	
	  ;% rtP._Value_o4nofsmsae
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 15;
	
	  ;% rtP.Out1_Y0_h2nv0qyril
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 16;
	
	  ;% rtP._Value_f4phzob0hx
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 17;
	
	  ;% rtP.Out1_Y0_k200jqvn1p
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 18;
	
	  ;% rtP._Value_g3dd0kyk25
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 19;
	
	  ;% rtP.Out1_Y0_mrsppdcucd
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 20;
	
	  ;% rtP._Value_f2uilwbuwv
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 21;
	
	  ;% rtP.Out1_Y0_fgr5pxk21n
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 22;
	
	  ;% rtP._Value_an3yzh3jzp
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 23;
	
	  ;% rtP.Out1_Y0_jefgo2fz2o
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 24;
	
	  ;% rtP._Value_o0k2wufkum
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 25;
	
	  ;% rtP.Out1_Y0_bdd4oeemq2
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 26;
	
	  ;% rtP.One_Value_k5ha0jbbd1
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 27;
	
	  ;% rtP.Out1_Y0_jldgpfv1ap
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 28;
	
	  ;% rtP._Value_g1pyp0jpln
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 29;
	
	  ;% rtP.Out1_Y0_id1yrgdmur
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 30;
	
	  ;% rtP._Value_j1q01z15ty
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 31;
	
	  ;% rtP.Out1_Y0_h1hfpmobwd
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 32;
	
	  ;% rtP._Value_aoa3qlkd0e
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 33;
	
	  ;% rtP.Out1_Y0_ehx1uu0cw2
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 34;
	
	  ;% rtP._Value_pqclabbqjz
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 35;
	
	  ;% rtP.Out1_Y0_fdrjxiqubo
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 36;
	
	  ;% rtP._Value_kavpdvabg3
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 37;
	
	  ;% rtP.Out1_Y0_gzv4zlulfe
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 38;
	
	  ;% rtP._Value_jepqci1sls
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 39;
	
	  ;% rtP.Out1_Y0_or2evzufnc
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 40;
	
	  ;% rtP._Value_emsy2kf03z
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 41;
	
	  ;% rtP.Out1_Y0_gzg4wgfgez
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 42;
	
	  ;% rtP._Value_gxprfvv351
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 43;
	
	  ;% rtP.Out1_Y0_aubpo3nrac
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 44;
	
	  ;% rtP._Value_fokxwq4moa
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 45;
	
	  ;% rtP.Out1_Y0_j5rsktxloz
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 46;
	
	  ;% rtP._Value_j0ve2kusbf
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 47;
	
	  ;% rtP.Out1_Y0_gunzu1r2dc
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 48;
	
	  ;% rtP._Value_dnf5gfu1rh
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 49;
	
	  ;% rtP.Out1_Y0_e0vzmgqmeo
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 50;
	
	  ;% rtP._Value_asdy2eagkh
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 51;
	
	  ;% rtP.Integrator1_IC
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 52;
	
	  ;% rtP.Constant3_Value
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 53;
	
	  ;% rtP.Constant5_Value
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 54;
	
	  ;% rtP.Integrator3_IC
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 55;
	
	  ;% rtP.Integrator2_IC
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 56;
	
	  ;% rtP.theta2_Value
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 57;
	
	  ;% rtP.theta3_Gain
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 58;
	
	  ;% rtP.Constant2_Value
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 59;
	
	  ;% rtP.theta3u_Gain
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 60;
	
	  ;% rtP.theta3u2_Gain
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 61;
	
	  ;% rtP.Integrator_IC
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 62;
	
	  ;% rtP.theta3u1_Gain
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 63;
	
	  ;% rtP.theta4_Gain
	  section.data(65).logicalSrcIdx = 64;
	  section.data(65).dtTransOffset = 64;
	
	  ;% rtP.gravedad_Value
	  section.data(66).logicalSrcIdx = 65;
	  section.data(66).dtTransOffset = 65;
	
	  ;% rtP.theta5_Gain
	  section.data(67).logicalSrcIdx = 66;
	  section.data(67).dtTransOffset = 66;
	
	  ;% rtP.Constant4_Value
	  section.data(68).logicalSrcIdx = 67;
	  section.data(68).dtTransOffset = 67;
	
	  ;% rtP.theta3u3_Gain
	  section.data(69).logicalSrcIdx = 68;
	  section.data(69).dtTransOffset = 68;
	
	  ;% rtP.xdata_Value
	  section.data(70).logicalSrcIdx = 69;
	  section.data(70).dtTransOffset = 69;
	
	  ;% rtP.Weight_Value
	  section.data(71).logicalSrcIdx = 70;
	  section.data(71).dtTransOffset = 170;
	
	  ;% rtP.ref_Value
	  section.data(72).logicalSrcIdx = 71;
	  section.data(72).dtTransOffset = 171;
	
	  ;% rtP.MN_Value
	  section.data(73).logicalSrcIdx = 72;
	  section.data(73).dtTransOffset = 172;
	
	  ;% rtP.Weight_Value_pududzysjn
	  section.data(74).logicalSrcIdx = 73;
	  section.data(74).dtTransOffset = 273;
	
	  ;% rtP.N_Value
	  section.data(75).logicalSrcIdx = 74;
	  section.data(75).dtTransOffset = 274;
	
	  ;% rtP.Weight_Value_hubpek2poe
	  section.data(76).logicalSrcIdx = 75;
	  section.data(76).dtTransOffset = 375;
	
	  ;% rtP.Weight_Value_ehsm5daqtd
	  section.data(77).logicalSrcIdx = 76;
	  section.data(77).dtTransOffset = 376;
	
	  ;% rtP.Weight_Value_pvh3y03vxm
	  section.data(78).logicalSrcIdx = 77;
	  section.data(78).dtTransOffset = 377;
	
	  ;% rtP.Z_Value
	  section.data(79).logicalSrcIdx = 78;
	  section.data(79).dtTransOffset = 378;
	
	  ;% rtP.Weight_Value_jj4cd2xy0d
	  section.data(80).logicalSrcIdx = 79;
	  section.data(80).dtTransOffset = 479;
	
	  ;% rtP.P_Value
	  section.data(81).logicalSrcIdx = 80;
	  section.data(81).dtTransOffset = 480;
	
	  ;% rtP.Weight_Value_alvw05kdd5
	  section.data(82).logicalSrcIdx = 81;
	  section.data(82).dtTransOffset = 581;
	
	  ;% rtP.Weight_Value_htlrwjjtxf
	  section.data(83).logicalSrcIdx = 82;
	  section.data(83).dtTransOffset = 582;
	
	  ;% rtP.Weight_Value_juw44cgvfu
	  section.data(84).logicalSrcIdx = 83;
	  section.data(84).dtTransOffset = 583;
	
	  ;% rtP.MP_Value
	  section.data(85).logicalSrcIdx = 84;
	  section.data(85).dtTransOffset = 584;
	
	  ;% rtP.Zero_Value
	  section.data(86).logicalSrcIdx = 85;
	  section.data(86).dtTransOffset = 685;
	
	  ;% rtP.MidRange_Value
	  section.data(87).logicalSrcIdx = 86;
	  section.data(87).dtTransOffset = 686;
	
	  ;% rtP.Switch_Threshold
	  section.data(88).logicalSrcIdx = 87;
	  section.data(88).dtTransOffset = 687;
	
	  ;% rtP.Constant_Value
	  section.data(89).logicalSrcIdx = 88;
	  section.data(89).dtTransOffset = 688;
	
	  ;% rtP.Constant1_Value
	  section.data(90).logicalSrcIdx = 89;
	  section.data(90).dtTransOffset = 689;
	
	  ;% rtP.theta1_Gain
	  section.data(91).logicalSrcIdx = 90;
	  section.data(91).dtTransOffset = 690;
	
	  ;% rtP.Gain1_Gain
	  section.data(92).logicalSrcIdx = 91;
	  section.data(92).dtTransOffset = 691;
	
	  ;% rtP.Gain2_Gain
	  section.data(93).logicalSrcIdx = 92;
	  section.data(93).dtTransOffset = 692;
	
	  ;% rtP.Gain3_Gain
	  section.data(94).logicalSrcIdx = 93;
	  section.data(94).dtTransOffset = 693;
	
	  ;% rtP.J2_Value
	  section.data(95).logicalSrcIdx = 94;
	  section.data(95).dtTransOffset = 694;
	
	  ;% rtP.Block1_SimMechanicsRuntimeParameters
	  section.data(96).logicalSrcIdx = 95;
	  section.data(96).dtTransOffset = 695;
	
	  ;% rtP.gain_1_Gain
	  section.data(97).logicalSrcIdx = 96;
	  section.data(97).dtTransOffset = 930;
	
	  ;% rtP.gain_1_Gain_khydmkfqx5
	  section.data(98).logicalSrcIdx = 97;
	  section.data(98).dtTransOffset = 931;
	
	  ;% rtP.Weight_Value_ojfvrh4hxa
	  section.data(99).logicalSrcIdx = 98;
	  section.data(99).dtTransOffset = 932;
	
	  ;% rtP.MN_Value_nhu3p3vkgq
	  section.data(100).logicalSrcIdx = 99;
	  section.data(100).dtTransOffset = 933;
	
	  ;% rtP.Weight_Value_h25spuf2zv
	  section.data(101).logicalSrcIdx = 100;
	  section.data(101).dtTransOffset = 1034;
	
	  ;% rtP.N_Value_pemlksllfn
	  section.data(102).logicalSrcIdx = 101;
	  section.data(102).dtTransOffset = 1035;
	
	  ;% rtP.Weight_Value_pj0j10o3vs
	  section.data(103).logicalSrcIdx = 102;
	  section.data(103).dtTransOffset = 1136;
	
	  ;% rtP.Weight_Value_ccv0ftayod
	  section.data(104).logicalSrcIdx = 103;
	  section.data(104).dtTransOffset = 1137;
	
	  ;% rtP.Weight_Value_chgtvqhek5
	  section.data(105).logicalSrcIdx = 104;
	  section.data(105).dtTransOffset = 1138;
	
	  ;% rtP.Z_Value_oxr23hquuw
	  section.data(106).logicalSrcIdx = 105;
	  section.data(106).dtTransOffset = 1139;
	
	  ;% rtP.Weight_Value_lv4t0hq1dn
	  section.data(107).logicalSrcIdx = 106;
	  section.data(107).dtTransOffset = 1240;
	
	  ;% rtP.P_Value_knsfabkpzq
	  section.data(108).logicalSrcIdx = 107;
	  section.data(108).dtTransOffset = 1241;
	
	  ;% rtP.Weight_Value_ew3gbnyblt
	  section.data(109).logicalSrcIdx = 108;
	  section.data(109).dtTransOffset = 1342;
	
	  ;% rtP.Weight_Value_dz3lblkjya
	  section.data(110).logicalSrcIdx = 109;
	  section.data(110).dtTransOffset = 1343;
	
	  ;% rtP.Weight_Value_fe223spjh1
	  section.data(111).logicalSrcIdx = 110;
	  section.data(111).dtTransOffset = 1344;
	
	  ;% rtP.MP_Value_dmhqm2iaki
	  section.data(112).logicalSrcIdx = 111;
	  section.data(112).dtTransOffset = 1345;
	
	  ;% rtP.SOURCE_BLOCK_Value
	  section.data(113).logicalSrcIdx = 112;
	  section.data(113).dtTransOffset = 1446;
	
	  ;% rtP._gravity_conversion_Gain
	  section.data(114).logicalSrcIdx = 113;
	  section.data(114).dtTransOffset = 1449;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtP.g4fc3ldju0.b_Value
	  section.data(1).logicalSrcIdx = 114;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.g4fc3ldju0.c_Value
	  section.data(2).logicalSrcIdx = 115;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtP.ekfwu0hpre.a_Value
	  section.data(1).logicalSrcIdx = 116;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.ekfwu0hpre.b_Value
	  section.data(2).logicalSrcIdx = 117;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(3) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtP.igiuzo43id.b_Value
	  section.data(1).logicalSrcIdx = 118;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.igiuzo43id.c_Value
	  section.data(2).logicalSrcIdx = 119;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(4) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtP.m2cbqdkmyt.a_Value
	  section.data(1).logicalSrcIdx = 120;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.m2cbqdkmyt.b_Value
	  section.data(2).logicalSrcIdx = 121;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(5) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtP.cd0klnxe5e.b_Value
	  section.data(1).logicalSrcIdx = 122;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.cd0klnxe5e.c_Value
	  section.data(2).logicalSrcIdx = 123;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(6) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtP.j233qqg3cw.a_Value
	  section.data(1).logicalSrcIdx = 124;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.j233qqg3cw.b_Value
	  section.data(2).logicalSrcIdx = 125;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(7) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtP.afilxdebiw.b_Value
	  section.data(1).logicalSrcIdx = 126;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.afilxdebiw.c_Value
	  section.data(2).logicalSrcIdx = 127;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(8) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtP.mq452nktsz.a_Value
	  section.data(1).logicalSrcIdx = 128;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.mq452nktsz.b_Value
	  section.data(2).logicalSrcIdx = 129;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(9) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtP.lrta3tnmvf.b_Value
	  section.data(1).logicalSrcIdx = 130;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.lrta3tnmvf.c_Value
	  section.data(2).logicalSrcIdx = 131;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(10) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtP.kuwsbsczxm.a_Value
	  section.data(1).logicalSrcIdx = 132;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.kuwsbsczxm.b_Value
	  section.data(2).logicalSrcIdx = 133;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(11) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtP.o4c5zxua1u.b_Value
	  section.data(1).logicalSrcIdx = 134;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.o4c5zxua1u.c_Value
	  section.data(2).logicalSrcIdx = 135;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(12) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtP.o0irhh05y2.a_Value
	  section.data(1).logicalSrcIdx = 136;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.o0irhh05y2.b_Value
	  section.data(2).logicalSrcIdx = 137;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(13) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtP.hhlzsnyecs.b_Value
	  section.data(1).logicalSrcIdx = 138;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.hhlzsnyecs.c_Value
	  section.data(2).logicalSrcIdx = 139;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(14) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtP.p2ylzee5yp.a_Value
	  section.data(1).logicalSrcIdx = 140;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.p2ylzee5yp.b_Value
	  section.data(2).logicalSrcIdx = 141;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(15) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtP.jklr3qa21n.b_Value
	  section.data(1).logicalSrcIdx = 142;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.jklr3qa21n.c_Value
	  section.data(2).logicalSrcIdx = 143;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(16) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtP.lot1uzsgk1.a_Value
	  section.data(1).logicalSrcIdx = 144;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.lot1uzsgk1.b_Value
	  section.data(2).logicalSrcIdx = 145;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(17) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtP.porftqf14e.b_Value
	  section.data(1).logicalSrcIdx = 146;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.porftqf14e.c_Value
	  section.data(2).logicalSrcIdx = 147;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(18) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtP.kpwofrtpwl.a_Value
	  section.data(1).logicalSrcIdx = 148;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.kpwofrtpwl.b_Value
	  section.data(2).logicalSrcIdx = 149;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(19) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtP.d4wvgok5de.b_Value
	  section.data(1).logicalSrcIdx = 150;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.d4wvgok5de.c_Value
	  section.data(2).logicalSrcIdx = 151;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(20) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtP.pdgbwqy0nw.a_Value
	  section.data(1).logicalSrcIdx = 152;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.pdgbwqy0nw.b_Value
	  section.data(2).logicalSrcIdx = 153;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(21) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtP.f2fhxhgtii.b_Value
	  section.data(1).logicalSrcIdx = 154;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.f2fhxhgtii.c_Value
	  section.data(2).logicalSrcIdx = 155;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(22) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtP.kqfynxybrx.a_Value
	  section.data(1).logicalSrcIdx = 156;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.kqfynxybrx.b_Value
	  section.data(2).logicalSrcIdx = 157;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(23) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtP.b0bats30sii.b_Value
	  section.data(1).logicalSrcIdx = 158;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.b0bats30sii.c_Value
	  section.data(2).logicalSrcIdx = 159;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(24) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtP.e4wvvzd2u2n.a_Value
	  section.data(1).logicalSrcIdx = 160;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.e4wvvzd2u2n.b_Value
	  section.data(2).logicalSrcIdx = 161;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(25) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 25;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtB)
    ;%
      section.nData     = 73;
      section.data(73)  = dumData; %prealloc
      
	  ;% rtB.lrsiimdwuz
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.in3vnjrmou
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtB.lakvejgmre
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtB.ai4vn5ih2g
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtB.ng0a2e1yng
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtB.h3x5cbphsk
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtB.i2x0eav0a2
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtB.ktsxfzhptv
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtB.hvttzlxplb
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtB.nv1ufn15gf
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtB.hlzpsykoix
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtB.hwpe1yivt2
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtB.c21c4cb1o4
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 112;
	
	  ;% rtB.dzzc3ahox1
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 113;
	
	  ;% rtB.m2vqykig3y
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 114;
	
	  ;% rtB.abrkfxp401
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 115;
	
	  ;% rtB.hsiq40rwu3
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 116;
	
	  ;% rtB.bwg3usfbgy
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 117;
	
	  ;% rtB.dhhgdpkvdu
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 118;
	
	  ;% rtB.jr53p3i4my
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 219;
	
	  ;% rtB.cex440yds5
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 220;
	
	  ;% rtB.a50u3lzemj
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 221;
	
	  ;% rtB.a1onxijdrh
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 322;
	
	  ;% rtB.eejsjdecxg
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 323;
	
	  ;% rtB.imex4itn1i
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 324;
	
	  ;% rtB.ed20i3amwg
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 325;
	
	  ;% rtB.hvjxqclndc
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 326;
	
	  ;% rtB.axtmv531q4
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 327;
	
	  ;% rtB.dwylcdpnyk
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 428;
	
	  ;% rtB.c3ibibl4lk
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 429;
	
	  ;% rtB.ntodjdosbg
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 530;
	
	  ;% rtB.gsdxo2jqgj
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 531;
	
	  ;% rtB.gzxmnt5sdr
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 532;
	
	  ;% rtB.isoexj1uqh
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 533;
	
	  ;% rtB.jkw21cnll0
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 534;
	
	  ;% rtB.j4mok0agzb
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 635;
	
	  ;% rtB.ngiibkkits
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 636;
	
	  ;% rtB.bs0clguma1
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 637;
	
	  ;% rtB.oqopjgihqz
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 638;
	
	  ;% rtB.jc2lh2qlp4
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 639;
	
	  ;% rtB.jbm1enz3u4
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 640;
	
	  ;% rtB.cywrkgalxo
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 641;
	
	  ;% rtB.idmrwwa4ki
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 642;
	
	  ;% rtB.ahu4xff5qw
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 643;
	
	  ;% rtB.nra4evn51s
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 644;
	
	  ;% rtB.jyul5ur2c5
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 646;
	
	  ;% rtB.ik2frnvm5w
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 647;
	
	  ;% rtB.kwjyrnjxqb
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 648;
	
	  ;% rtB.ppbjzs0b03
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 649;
	
	  ;% rtB.dvsmlgdk14
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 650;
	
	  ;% rtB.d5ho3vthrf
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 651;
	
	  ;% rtB.frpt3ck0j2
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 652;
	
	  ;% rtB.ddquox35rj
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 753;
	
	  ;% rtB.ewitxnhpa2
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 754;
	
	  ;% rtB.jmjakizbhs
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 755;
	
	  ;% rtB.funome3nhf
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 856;
	
	  ;% rtB.pqe2ppzuzr
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 857;
	
	  ;% rtB.gcejyyqjta
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 858;
	
	  ;% rtB.as3hgogwhl
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 859;
	
	  ;% rtB.hubeb3hlxs
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 860;
	
	  ;% rtB.bdirawnthu
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 861;
	
	  ;% rtB.ilyylqgmo3
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 962;
	
	  ;% rtB.nw2usxayk0
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 963;
	
	  ;% rtB.d3zogzcgfl
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 1064;
	
	  ;% rtB.pbhu4pw5kn
	  section.data(65).logicalSrcIdx = 64;
	  section.data(65).dtTransOffset = 1065;
	
	  ;% rtB.dd5vo2rizu
	  section.data(66).logicalSrcIdx = 65;
	  section.data(66).dtTransOffset = 1066;
	
	  ;% rtB.jjdm2vml31
	  section.data(67).logicalSrcIdx = 66;
	  section.data(67).dtTransOffset = 1067;
	
	  ;% rtB.i2tfdsilg5
	  section.data(68).logicalSrcIdx = 67;
	  section.data(68).dtTransOffset = 1068;
	
	  ;% rtB.oivyrt5pk4
	  section.data(69).logicalSrcIdx = 68;
	  section.data(69).dtTransOffset = 1169;
	
	  ;% rtB.e1vvngvyqy
	  section.data(70).logicalSrcIdx = 69;
	  section.data(70).dtTransOffset = 1170;
	
	  ;% rtB.flfzqd3hiw
	  section.data(71).logicalSrcIdx = 70;
	  section.data(71).dtTransOffset = 1172;
	
	  ;% rtB.kyjo5qqeg5
	  section.data(72).logicalSrcIdx = 71;
	  section.data(72).dtTransOffset = 1175;
	
	  ;% rtB.dg5tubki31
	  section.data(73).logicalSrcIdx = 72;
	  section.data(73).dtTransOffset = 1176;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtB.g4fc3ldju0.kjewybanlw
	  section.data(1).logicalSrcIdx = 73;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.g4fc3ldju0.ff1wr2qaom
	  section.data(2).logicalSrcIdx = 74;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtB.ekfwu0hpre.l2lba3wkrx
	  section.data(1).logicalSrcIdx = 75;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.ekfwu0hpre.hcdutev3pm
	  section.data(2).logicalSrcIdx = 76;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(3) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtB.igiuzo43id.kjewybanlw
	  section.data(1).logicalSrcIdx = 77;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.igiuzo43id.ff1wr2qaom
	  section.data(2).logicalSrcIdx = 78;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(4) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtB.m2cbqdkmyt.l2lba3wkrx
	  section.data(1).logicalSrcIdx = 79;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.m2cbqdkmyt.hcdutev3pm
	  section.data(2).logicalSrcIdx = 80;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(5) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtB.cd0klnxe5e.kjewybanlw
	  section.data(1).logicalSrcIdx = 81;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.cd0klnxe5e.ff1wr2qaom
	  section.data(2).logicalSrcIdx = 82;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(6) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtB.j233qqg3cw.l2lba3wkrx
	  section.data(1).logicalSrcIdx = 83;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.j233qqg3cw.hcdutev3pm
	  section.data(2).logicalSrcIdx = 84;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(7) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtB.afilxdebiw.kjewybanlw
	  section.data(1).logicalSrcIdx = 85;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.afilxdebiw.ff1wr2qaom
	  section.data(2).logicalSrcIdx = 86;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(8) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtB.mq452nktsz.l2lba3wkrx
	  section.data(1).logicalSrcIdx = 87;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.mq452nktsz.hcdutev3pm
	  section.data(2).logicalSrcIdx = 88;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(9) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtB.lrta3tnmvf.kjewybanlw
	  section.data(1).logicalSrcIdx = 89;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.lrta3tnmvf.ff1wr2qaom
	  section.data(2).logicalSrcIdx = 90;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(10) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtB.kuwsbsczxm.l2lba3wkrx
	  section.data(1).logicalSrcIdx = 91;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.kuwsbsczxm.hcdutev3pm
	  section.data(2).logicalSrcIdx = 92;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(11) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtB.o4c5zxua1u.kjewybanlw
	  section.data(1).logicalSrcIdx = 93;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.o4c5zxua1u.ff1wr2qaom
	  section.data(2).logicalSrcIdx = 94;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(12) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtB.o0irhh05y2.l2lba3wkrx
	  section.data(1).logicalSrcIdx = 95;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.o0irhh05y2.hcdutev3pm
	  section.data(2).logicalSrcIdx = 96;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(13) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtB.hhlzsnyecs.kjewybanlw
	  section.data(1).logicalSrcIdx = 97;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.hhlzsnyecs.ff1wr2qaom
	  section.data(2).logicalSrcIdx = 98;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(14) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtB.p2ylzee5yp.l2lba3wkrx
	  section.data(1).logicalSrcIdx = 99;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.p2ylzee5yp.hcdutev3pm
	  section.data(2).logicalSrcIdx = 100;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(15) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtB.jklr3qa21n.kjewybanlw
	  section.data(1).logicalSrcIdx = 101;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.jklr3qa21n.ff1wr2qaom
	  section.data(2).logicalSrcIdx = 102;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(16) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtB.lot1uzsgk1.l2lba3wkrx
	  section.data(1).logicalSrcIdx = 103;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.lot1uzsgk1.hcdutev3pm
	  section.data(2).logicalSrcIdx = 104;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(17) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtB.porftqf14e.kjewybanlw
	  section.data(1).logicalSrcIdx = 105;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.porftqf14e.ff1wr2qaom
	  section.data(2).logicalSrcIdx = 106;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(18) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtB.kpwofrtpwl.l2lba3wkrx
	  section.data(1).logicalSrcIdx = 107;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.kpwofrtpwl.hcdutev3pm
	  section.data(2).logicalSrcIdx = 108;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(19) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtB.d4wvgok5de.kjewybanlw
	  section.data(1).logicalSrcIdx = 109;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.d4wvgok5de.ff1wr2qaom
	  section.data(2).logicalSrcIdx = 110;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(20) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtB.pdgbwqy0nw.l2lba3wkrx
	  section.data(1).logicalSrcIdx = 111;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.pdgbwqy0nw.hcdutev3pm
	  section.data(2).logicalSrcIdx = 112;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(21) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtB.f2fhxhgtii.kjewybanlw
	  section.data(1).logicalSrcIdx = 113;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.f2fhxhgtii.ff1wr2qaom
	  section.data(2).logicalSrcIdx = 114;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(22) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtB.kqfynxybrx.l2lba3wkrx
	  section.data(1).logicalSrcIdx = 115;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.kqfynxybrx.hcdutev3pm
	  section.data(2).logicalSrcIdx = 116;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(23) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtB.b0bats30sii.kjewybanlw
	  section.data(1).logicalSrcIdx = 117;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.b0bats30sii.ff1wr2qaom
	  section.data(2).logicalSrcIdx = 118;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(24) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtB.e4wvvzd2u2n.l2lba3wkrx
	  section.data(1).logicalSrcIdx = 119;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.e4wvvzd2u2n.hcdutev3pm
	  section.data(2).logicalSrcIdx = 120;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(25) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 29;
    sectIdxOffset = 25;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtDW)
    ;%
      section.nData     = 13;
      section.data(13)  = dumData; %prealloc
      
	  ;% rtDW.hmdjjprvrz.LoggedData
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.p0cmptq3de.LoggedData
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.ig2xlu1vdn
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.hdbtgoc0rv.LoggedData
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.dqiqnr3u5t.LoggedData
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.jkz4tvnagk.LoggedData
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.kts4tx3svb.LoggedData
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.ixhn3qmkpm.LoggedData
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.igoqvyicvp.LoggedData
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtDW.kp1e3m1psw.LoggedData
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtDW.jjgbdimb4o.LoggedData
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtDW.hzme050h5f
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtDW.hjbtpii524
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 12;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtDW.agcklju4vu
	  section.data(1).logicalSrcIdx = 13;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.a5tv2nid2l
	  section.data(2).logicalSrcIdx = 14;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 40;
      section.data(40)  = dumData; %prealloc
      
	  ;% rtDW.olkz0w2oj1
	  section.data(1).logicalSrcIdx = 15;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.e0a0xlv13l
	  section.data(2).logicalSrcIdx = 16;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.aj2qxsauvk
	  section.data(3).logicalSrcIdx = 17;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.hfkmqnarce
	  section.data(4).logicalSrcIdx = 18;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.cv0qnl1xft
	  section.data(5).logicalSrcIdx = 19;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.dkpueb3zhj
	  section.data(6).logicalSrcIdx = 20;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.bxjgf2jfkv
	  section.data(7).logicalSrcIdx = 21;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.lgv4lqla4l
	  section.data(8).logicalSrcIdx = 22;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.iqwqf2khwe
	  section.data(9).logicalSrcIdx = 23;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtDW.k41oinigc3
	  section.data(10).logicalSrcIdx = 24;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtDW.o3opldaslu
	  section.data(11).logicalSrcIdx = 25;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtDW.her14hkg52
	  section.data(12).logicalSrcIdx = 26;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtDW.jp4sdbizjg
	  section.data(13).logicalSrcIdx = 27;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtDW.mma4eoaoc0
	  section.data(14).logicalSrcIdx = 28;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtDW.doystkbg4h
	  section.data(15).logicalSrcIdx = 29;
	  section.data(15).dtTransOffset = 14;
	
	  ;% rtDW.epvnnkbcth
	  section.data(16).logicalSrcIdx = 30;
	  section.data(16).dtTransOffset = 15;
	
	  ;% rtDW.e53d4g1wrw
	  section.data(17).logicalSrcIdx = 31;
	  section.data(17).dtTransOffset = 16;
	
	  ;% rtDW.jbxjsr3m4e
	  section.data(18).logicalSrcIdx = 32;
	  section.data(18).dtTransOffset = 17;
	
	  ;% rtDW.jklht22nmy
	  section.data(19).logicalSrcIdx = 33;
	  section.data(19).dtTransOffset = 18;
	
	  ;% rtDW.nrshen3eze
	  section.data(20).logicalSrcIdx = 34;
	  section.data(20).dtTransOffset = 19;
	
	  ;% rtDW.j55kvcmmiy
	  section.data(21).logicalSrcIdx = 35;
	  section.data(21).dtTransOffset = 20;
	
	  ;% rtDW.o0juxdlvty
	  section.data(22).logicalSrcIdx = 36;
	  section.data(22).dtTransOffset = 21;
	
	  ;% rtDW.is3j0uc4ay
	  section.data(23).logicalSrcIdx = 37;
	  section.data(23).dtTransOffset = 22;
	
	  ;% rtDW.aontfhjr3j
	  section.data(24).logicalSrcIdx = 38;
	  section.data(24).dtTransOffset = 23;
	
	  ;% rtDW.lqo2jhgo34
	  section.data(25).logicalSrcIdx = 39;
	  section.data(25).dtTransOffset = 24;
	
	  ;% rtDW.dk4twuy3fp
	  section.data(26).logicalSrcIdx = 40;
	  section.data(26).dtTransOffset = 25;
	
	  ;% rtDW.azwovx0eih
	  section.data(27).logicalSrcIdx = 41;
	  section.data(27).dtTransOffset = 26;
	
	  ;% rtDW.fcuakfqgdd
	  section.data(28).logicalSrcIdx = 42;
	  section.data(28).dtTransOffset = 27;
	
	  ;% rtDW.pgqmgklkek
	  section.data(29).logicalSrcIdx = 43;
	  section.data(29).dtTransOffset = 28;
	
	  ;% rtDW.kzjzai1eeb
	  section.data(30).logicalSrcIdx = 44;
	  section.data(30).dtTransOffset = 29;
	
	  ;% rtDW.dw2hy20yxx
	  section.data(31).logicalSrcIdx = 45;
	  section.data(31).dtTransOffset = 30;
	
	  ;% rtDW.cwoakyh0ls
	  section.data(32).logicalSrcIdx = 46;
	  section.data(32).dtTransOffset = 31;
	
	  ;% rtDW.bm4gq0scet
	  section.data(33).logicalSrcIdx = 47;
	  section.data(33).dtTransOffset = 32;
	
	  ;% rtDW.lxgzralgav
	  section.data(34).logicalSrcIdx = 48;
	  section.data(34).dtTransOffset = 33;
	
	  ;% rtDW.gocglljzlw
	  section.data(35).logicalSrcIdx = 49;
	  section.data(35).dtTransOffset = 34;
	
	  ;% rtDW.evlfylf1bm
	  section.data(36).logicalSrcIdx = 50;
	  section.data(36).dtTransOffset = 35;
	
	  ;% rtDW.dvhjdp3hhc
	  section.data(37).logicalSrcIdx = 51;
	  section.data(37).dtTransOffset = 36;
	
	  ;% rtDW.ch4qxup2zi
	  section.data(38).logicalSrcIdx = 52;
	  section.data(38).dtTransOffset = 37;
	
	  ;% rtDW.cordk3v1ma
	  section.data(39).logicalSrcIdx = 53;
	  section.data(39).dtTransOffset = 38;
	
	  ;% rtDW.nhc0g1mx4g
	  section.data(40).logicalSrcIdx = 54;
	  section.data(40).dtTransOffset = 39;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.g4fc3ldju0.npagjswe0j
	  section.data(1).logicalSrcIdx = 55;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.ekfwu0hpre.kynpfylin5
	  section.data(1).logicalSrcIdx = 56;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.igiuzo43id.npagjswe0j
	  section.data(1).logicalSrcIdx = 57;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(6) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.m2cbqdkmyt.kynpfylin5
	  section.data(1).logicalSrcIdx = 58;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(7) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.cd0klnxe5e.npagjswe0j
	  section.data(1).logicalSrcIdx = 59;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(8) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.j233qqg3cw.kynpfylin5
	  section.data(1).logicalSrcIdx = 60;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(9) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.afilxdebiw.npagjswe0j
	  section.data(1).logicalSrcIdx = 61;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(10) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.mq452nktsz.kynpfylin5
	  section.data(1).logicalSrcIdx = 62;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(11) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.lrta3tnmvf.npagjswe0j
	  section.data(1).logicalSrcIdx = 63;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(12) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.kuwsbsczxm.kynpfylin5
	  section.data(1).logicalSrcIdx = 64;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(13) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.o4c5zxua1u.npagjswe0j
	  section.data(1).logicalSrcIdx = 65;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(14) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.o0irhh05y2.kynpfylin5
	  section.data(1).logicalSrcIdx = 66;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(15) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.lpukzpm1qj.c0gvpsr1oc
	  section.data(1).logicalSrcIdx = 67;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(16) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.hhlzsnyecs.npagjswe0j
	  section.data(1).logicalSrcIdx = 68;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(17) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.p2ylzee5yp.kynpfylin5
	  section.data(1).logicalSrcIdx = 69;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(18) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.jklr3qa21n.npagjswe0j
	  section.data(1).logicalSrcIdx = 70;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(19) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.lot1uzsgk1.kynpfylin5
	  section.data(1).logicalSrcIdx = 71;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(20) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.porftqf14e.npagjswe0j
	  section.data(1).logicalSrcIdx = 72;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(21) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.kpwofrtpwl.kynpfylin5
	  section.data(1).logicalSrcIdx = 73;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(22) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.d4wvgok5de.npagjswe0j
	  section.data(1).logicalSrcIdx = 74;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(23) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.pdgbwqy0nw.kynpfylin5
	  section.data(1).logicalSrcIdx = 75;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(24) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.f2fhxhgtii.npagjswe0j
	  section.data(1).logicalSrcIdx = 76;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(25) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.kqfynxybrx.kynpfylin5
	  section.data(1).logicalSrcIdx = 77;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(26) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.b0bats30sii.npagjswe0j
	  section.data(1).logicalSrcIdx = 78;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(27) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.e4wvvzd2u2n.kynpfylin5
	  section.data(1).logicalSrcIdx = 79;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(28) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.e1t1z4hp05u.c0gvpsr1oc
	  section.data(1).logicalSrcIdx = 80;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(29) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 3553450872;
  targMap.checksum1 = 1079080335;
  targMap.checksum2 = 3578129002;
  targMap.checksum3 = 499905216;

