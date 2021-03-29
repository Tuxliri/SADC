  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 4;
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
      section.nData     = 97;
      section.data(97)  = dumData; %prealloc
      
	  ;% rtP.F_e
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.G
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtP.GK
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtP.I_x
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 20;
	
	  ;% rtP.I_y
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 21;
	
	  ;% rtP.I_z
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 22;
	
	  ;% rtP.RAAN
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 23;
	
	  ;% rtP.R_e
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 24;
	
	  ;% rtP.a
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 25;
	
	  ;% rtP.alfa_earth
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 26;
	
	  ;% rtP.alfa_mag
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 27;
	
	  ;% rtP.alfa_sun
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 28;
	
	  ;% rtP.e
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 29;
	
	  ;% rtP.gm
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 30;
	
	  ;% rtP.gn
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 134;
	
	  ;% rtP.gvali
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 238;
	
	  ;% rtP.hm
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 342;
	
	  ;% rtP.hn
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 446;
	
	  ;% rtP.hvali
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 550;
	
	  ;% rtP.i
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 654;
	
	  ;% rtP.m_earth
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 655;
	
	  ;% rtP.mu_e
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 656;
	
	  ;% rtP.n
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 657;
	
	  ;% rtP.omega
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 658;
	
	  ;% rtP.omega_e
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 659;
	
	  ;% rtP.DetumblingGain_Gain
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 660;
	
	  ;% rtP.Integrator6_IC
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 661;
	
	  ;% rtP.Integrator_IC
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 670;
	
	  ;% rtP.Integrator4_IC
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 674;
	
	  ;% rtP.Integrator5_IC
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 677;
	
	  ;% rtP.Integrator_IC_hsiqnplk4j
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 686;
	
	  ;% rtP.MAXIMUMGIMBALRATE_UpperSat
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 687;
	
	  ;% rtP.MAXIMUMGIMBALRATE_LowerSat
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 688;
	
	  ;% rtP.Integrator_IC_ltduz3t0gp
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 689;
	
	  ;% rtP.ARWNOISE_Mean
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 695;
	
	  ;% rtP.ARWNOISE_StdDev
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 696;
	
	  ;% rtP.ARWNOISE_Seed
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 699;
	
	  ;% rtP.Integrator3_IC
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 700;
	
	  ;% rtP.theta_Mean
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 704;
	
	  ;% rtP.theta_StdDev
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 705;
	
	  ;% rtP.theta_Seed
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 706;
	
	  ;% rtP.psi_Mean
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 707;
	
	  ;% rtP.psi_StdDev
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 708;
	
	  ;% rtP.psi_Seed
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 709;
	
	  ;% rtP.phi_Mean
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 710;
	
	  ;% rtP.phi_StdDev
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 711;
	
	  ;% rtP.phi_Seed
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 712;
	
	  ;% rtP.Gain_Gain
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 713;
	
	  ;% rtP.xi_Mean
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 714;
	
	  ;% rtP.xi_StdDev
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 715;
	
	  ;% rtP.xi_Seed
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 716;
	
	  ;% rtP.psi_Mean_iicgv5oqe1
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 717;
	
	  ;% rtP.psi_StdDev_i2auns3m0i
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 718;
	
	  ;% rtP.psi_Seed_nhbuxltuo0
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 719;
	
	  ;% rtP.phi_Mean_nqrm2dpg35
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 720;
	
	  ;% rtP.phi_StdDev_msvebjj1dn
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 721;
	
	  ;% rtP.phi_Seed_pxcyibbjyy
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 722;
	
	  ;% rtP.theta_Mean_oiiju3ziio
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 723;
	
	  ;% rtP.theta_StdDev_cz5h30rgng
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 724;
	
	  ;% rtP.theta_Seed_jytd3ezmcj
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 725;
	
	  ;% rtP.psi_Mean_dw5aio5m2x
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 726;
	
	  ;% rtP.psi_StdDev_cxrntnbbi4
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 727;
	
	  ;% rtP.psi_Seed_j4mig0d0wa
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 728;
	
	  ;% rtP.phi_Mean_p0kq0rtldo
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 729;
	
	  ;% rtP.phi_StdDev_dkurksjsig
	  section.data(65).logicalSrcIdx = 64;
	  section.data(65).dtTransOffset = 730;
	
	  ;% rtP.phi_Seed_irem2jkqzf
	  section.data(66).logicalSrcIdx = 65;
	  section.data(66).dtTransOffset = 731;
	
	  ;% rtP.Switch_Threshold
	  section.data(67).logicalSrcIdx = 66;
	  section.data(67).dtTransOffset = 732;
	
	  ;% rtP.Gain4_Gain
	  section.data(68).logicalSrcIdx = 67;
	  section.data(68).dtTransOffset = 733;
	
	  ;% rtP.RRWNOISE_Mean
	  section.data(69).logicalSrcIdx = 68;
	  section.data(69).dtTransOffset = 734;
	
	  ;% rtP.RRWNOISE_StdDev
	  section.data(70).logicalSrcIdx = 69;
	  section.data(70).dtTransOffset = 735;
	
	  ;% rtP.RRWNOISE_Seed
	  section.data(71).logicalSrcIdx = 70;
	  section.data(71).dtTransOffset = 738;
	
	  ;% rtP.rho_Value
	  section.data(72).logicalSrcIdx = 71;
	  section.data(72).dtTransOffset = 739;
	
	  ;% rtP._Value
	  section.data(73).logicalSrcIdx = 72;
	  section.data(73).dtTransOffset = 740;
	
	  ;% rtP.InclinationofEarthsRotationaxisdeg_Value
	  section.data(74).logicalSrcIdx = 73;
	  section.data(74).dtTransOffset = 741;
	
	  ;% rtP.Gain1_Gain
	  section.data(75).logicalSrcIdx = 74;
	  section.data(75).dtTransOffset = 742;
	
	  ;% rtP.periodofEarthorbitaroundthesun_Value
	  section.data(76).logicalSrcIdx = 75;
	  section.data(76).dtTransOffset = 743;
	
	  ;% rtP.meanradiusofEarthorbitaroundSunKm_Value
	  section.data(77).logicalSrcIdx = 76;
	  section.data(77).dtTransOffset = 744;
	
	  ;% rtP.Gain1_Gain_gamvzqgrli
	  section.data(78).logicalSrcIdx = 77;
	  section.data(78).dtTransOffset = 745;
	
	  ;% rtP.w_xw_y_Value
	  section.data(79).logicalSrcIdx = 78;
	  section.data(79).dtTransOffset = 746;
	
	  ;% rtP.Gymbalaxistilt1_Value
	  section.data(80).logicalSrcIdx = 79;
	  section.data(80).dtTransOffset = 747;
	
	  ;% rtP.Gain1_Gain_mn5dgmnkn4
	  section.data(81).logicalSrcIdx = 80;
	  section.data(81).dtTransOffset = 748;
	
	  ;% rtP.Gyrospeed_Value
	  section.data(82).logicalSrcIdx = 81;
	  section.data(82).dtTransOffset = 749;
	
	  ;% rtP.Gain_Gain_gegphuevyb
	  section.data(83).logicalSrcIdx = 82;
	  section.data(83).dtTransOffset = 750;
	
	  ;% rtP.Inertiaofwheel_Value
	  section.data(84).logicalSrcIdx = 83;
	  section.data(84).dtTransOffset = 751;
	
	  ;% rtP.Constant4_Value
	  section.data(85).logicalSrcIdx = 84;
	  section.data(85).dtTransOffset = 752;
	
	  ;% rtP.Constant6_Value
	  section.data(86).logicalSrcIdx = 85;
	  section.data(86).dtTransOffset = 755;
	
	  ;% rtP.Constant1_Value
	  section.data(87).logicalSrcIdx = 86;
	  section.data(87).dtTransOffset = 764;
	
	  ;% rtP.Constant2_Value
	  section.data(88).logicalSrcIdx = 87;
	  section.data(88).dtTransOffset = 765;
	
	  ;% rtP.Inertiavector_Value
	  section.data(89).logicalSrcIdx = 88;
	  section.data(89).dtTransOffset = 768;
	
	  ;% rtP.Inertiavector1_Value
	  section.data(90).logicalSrcIdx = 89;
	  section.data(90).dtTransOffset = 771;
	
	  ;% rtP.Tuningparameter_Value
	  section.data(91).logicalSrcIdx = 90;
	  section.data(91).dtTransOffset = 774;
	
	  ;% rtP.omegad_Value
	  section.data(92).logicalSrcIdx = 91;
	  section.data(92).dtTransOffset = 775;
	
	  ;% rtP.Tuningcoeff_Value
	  section.data(93).logicalSrcIdx = 92;
	  section.data(93).dtTransOffset = 778;
	
	  ;% rtP.Constant1_Value_ak2ogm0bur
	  section.data(94).logicalSrcIdx = 93;
	  section.data(94).dtTransOffset = 779;
	
	  ;% rtP.Constant3_Value
	  section.data(95).logicalSrcIdx = 94;
	  section.data(95).dtTransOffset = 782;
	
	  ;% rtP.Omega0vector_Value
	  section.data(96).logicalSrcIdx = 95;
	  section.data(96).dtTransOffset = 783;
	
	  ;% rtP.bt0_Value
	  section.data(97).logicalSrcIdx = 96;
	  section.data(97).dtTransOffset = 786;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtP.ManualSwitch_CurrentSetting
	  section.data(1).logicalSrcIdx = 97;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtP.pfanvlh2dr.Constant_Value
	  section.data(1).logicalSrcIdx = 98;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(3) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtP.geox5czrb34.Constant_Value
	  section.data(1).logicalSrcIdx = 99;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(4) = section;
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
    nTotSects     = 5;
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
      section.nData     = 109;
      section.data(109)  = dumData; %prealloc
      
	  ;% rtB.buaztywrb3
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.jnwqbmkojt
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 4;
	
	  ;% rtB.oqsaecduyj
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 7;
	
	  ;% rtB.nhuthseoki
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 8;
	
	  ;% rtB.kenhd3kcjp
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 17;
	
	  ;% rtB.kmm3rkbbyq
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 18;
	
	  ;% rtB.crc2i5ltsq
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 27;
	
	  ;% rtB.ne22ldnw5w
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 30;
	
	  ;% rtB.p3iscummn3
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 33;
	
	  ;% rtB.dmqnbaxtxv
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 36;
	
	  ;% rtB.kb5c2c4jlf
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 39;
	
	  ;% rtB.onkbusalzg
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 42;
	
	  ;% rtB.b3lvhbnsnu
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 48;
	
	  ;% rtB.o0ipnhiivw
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 51;
	
	  ;% rtB.db2roqckzz
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 54;
	
	  ;% rtB.decs43f2is
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 58;
	
	  ;% rtB.axsuqe43xb
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 62;
	
	  ;% rtB.mkahyb353c
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 65;
	
	  ;% rtB.oonndlkyas
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 71;
	
	  ;% rtB.di2wm3ewqa
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 74;
	
	  ;% rtB.p3njf3b0vq
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 77;
	
	  ;% rtB.aefa10eb0v
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 83;
	
	  ;% rtB.h5ke22sfh5
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 86;
	
	  ;% rtB.ggcir2u5vz
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 89;
	
	  ;% rtB.h5hs4aw2rr
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 92;
	
	  ;% rtB.pmztpun2vh
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 96;
	
	  ;% rtB.m3vn1reta5
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 97;
	
	  ;% rtB.nzytji2b3o
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 100;
	
	  ;% rtB.iotd255tw0
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 103;
	
	  ;% rtB.a1jmuxsaiv
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 104;
	
	  ;% rtB.kkrfakq0mg
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 107;
	
	  ;% rtB.e4wdtksuab
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 110;
	
	  ;% rtB.ioqnm4rp2f
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 111;
	
	  ;% rtB.dsrxzkpxun
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 112;
	
	  ;% rtB.geyyaqa4ya
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 113;
	
	  ;% rtB.hannzdbw4i
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 116;
	
	  ;% rtB.jjadz2nwsm
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 119;
	
	  ;% rtB.hdla5n0zmc
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 122;
	
	  ;% rtB.pagbklhmrp
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 125;
	
	  ;% rtB.k0ppvs40sj
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 128;
	
	  ;% rtB.mpqeirtcdu
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 131;
	
	  ;% rtB.d4qr1kojyz
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 134;
	
	  ;% rtB.knn10a4nnc
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 143;
	
	  ;% rtB.dlyofrzwt5
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 146;
	
	  ;% rtB.l0mxqqvkmc
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 149;
	
	  ;% rtB.kcfbhtallx
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 152;
	
	  ;% rtB.lh2ujhpalo
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 155;
	
	  ;% rtB.j0fcylznkn
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 158;
	
	  ;% rtB.ht5wzolgc1
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 167;
	
	  ;% rtB.a5ucankgx3
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 170;
	
	  ;% rtB.ccgkybaogm
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 173;
	
	  ;% rtB.m32spuuw4o
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 176;
	
	  ;% rtB.feu5kxotcq
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 185;
	
	  ;% rtB.ngcynor04m
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 194;
	
	  ;% rtB.m5nfjzbcxv
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 203;
	
	  ;% rtB.i4btlqy2gt
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 212;
	
	  ;% rtB.pwa11vfmjs
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 215;
	
	  ;% rtB.jofjaqksuy
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 224;
	
	  ;% rtB.fp1tgwmu5f
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 233;
	
	  ;% rtB.kvelh2qyt3
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 236;
	
	  ;% rtB.hrixyxkgnl
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 239;
	
	  ;% rtB.fg3wanddgd
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 240;
	
	  ;% rtB.jagqjl2jmu
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 246;
	
	  ;% rtB.hro3fstxlx
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 249;
	
	  ;% rtB.aglermfqwf
	  section.data(65).logicalSrcIdx = 64;
	  section.data(65).dtTransOffset = 252;
	
	  ;% rtB.jnvj0fqsds
	  section.data(66).logicalSrcIdx = 65;
	  section.data(66).dtTransOffset = 255;
	
	  ;% rtB.ldpez2gepa
	  section.data(67).logicalSrcIdx = 66;
	  section.data(67).dtTransOffset = 258;
	
	  ;% rtB.npupqbagjs
	  section.data(68).logicalSrcIdx = 67;
	  section.data(68).dtTransOffset = 261;
	
	  ;% rtB.ehlapyi5ev
	  section.data(69).logicalSrcIdx = 68;
	  section.data(69).dtTransOffset = 264;
	
	  ;% rtB.eyxzlqyvry
	  section.data(70).logicalSrcIdx = 69;
	  section.data(70).dtTransOffset = 265;
	
	  ;% rtB.kvkrilhl2b
	  section.data(71).logicalSrcIdx = 70;
	  section.data(71).dtTransOffset = 266;
	
	  ;% rtB.fwqwoogzcg
	  section.data(72).logicalSrcIdx = 71;
	  section.data(72).dtTransOffset = 267;
	
	  ;% rtB.aqep4b5uwq
	  section.data(73).logicalSrcIdx = 72;
	  section.data(73).dtTransOffset = 268;
	
	  ;% rtB.g0es3p0gmy
	  section.data(74).logicalSrcIdx = 73;
	  section.data(74).dtTransOffset = 269;
	
	  ;% rtB.jr1yrgpnpl
	  section.data(75).logicalSrcIdx = 74;
	  section.data(75).dtTransOffset = 270;
	
	  ;% rtB.j4jfsufayw
	  section.data(76).logicalSrcIdx = 75;
	  section.data(76).dtTransOffset = 271;
	
	  ;% rtB.aj4jzc1bo5
	  section.data(77).logicalSrcIdx = 76;
	  section.data(77).dtTransOffset = 274;
	
	  ;% rtB.dolbb03las
	  section.data(78).logicalSrcIdx = 77;
	  section.data(78).dtTransOffset = 277;
	
	  ;% rtB.f1yvftaxo2
	  section.data(79).logicalSrcIdx = 78;
	  section.data(79).dtTransOffset = 280;
	
	  ;% rtB.cy1v1zxwf2
	  section.data(80).logicalSrcIdx = 79;
	  section.data(80).dtTransOffset = 286;
	
	  ;% rtB.pgmvvyxdii
	  section.data(81).logicalSrcIdx = 80;
	  section.data(81).dtTransOffset = 289;
	
	  ;% rtB.pvajrq2lxe
	  section.data(82).logicalSrcIdx = 81;
	  section.data(82).dtTransOffset = 292;
	
	  ;% rtB.akz4wjrmo0
	  section.data(83).logicalSrcIdx = 82;
	  section.data(83).dtTransOffset = 295;
	
	  ;% rtB.jdawsowjrv
	  section.data(84).logicalSrcIdx = 83;
	  section.data(84).dtTransOffset = 296;
	
	  ;% rtB.lvaafrmesm
	  section.data(85).logicalSrcIdx = 84;
	  section.data(85).dtTransOffset = 297;
	
	  ;% rtB.pgla1jvh3e
	  section.data(86).logicalSrcIdx = 85;
	  section.data(86).dtTransOffset = 298;
	
	  ;% rtB.mjfbd5uniz
	  section.data(87).logicalSrcIdx = 86;
	  section.data(87).dtTransOffset = 299;
	
	  ;% rtB.flarix3pcb
	  section.data(88).logicalSrcIdx = 87;
	  section.data(88).dtTransOffset = 300;
	
	  ;% rtB.cyqsqy0bbk
	  section.data(89).logicalSrcIdx = 88;
	  section.data(89).dtTransOffset = 303;
	
	  ;% rtB.e0jir2rqfh
	  section.data(90).logicalSrcIdx = 89;
	  section.data(90).dtTransOffset = 304;
	
	  ;% rtB.anr2sc1zx1
	  section.data(91).logicalSrcIdx = 90;
	  section.data(91).dtTransOffset = 305;
	
	  ;% rtB.gvact2smmw
	  section.data(92).logicalSrcIdx = 91;
	  section.data(92).dtTransOffset = 308;
	
	  ;% rtB.jecmnvf0ab
	  section.data(93).logicalSrcIdx = 92;
	  section.data(93).dtTransOffset = 311;
	
	  ;% rtB.brzazytz5j
	  section.data(94).logicalSrcIdx = 93;
	  section.data(94).dtTransOffset = 312;
	
	  ;% rtB.eh54vwsh45
	  section.data(95).logicalSrcIdx = 94;
	  section.data(95).dtTransOffset = 318;
	
	  ;% rtB.b0w4srbueq
	  section.data(96).logicalSrcIdx = 95;
	  section.data(96).dtTransOffset = 321;
	
	  ;% rtB.k33bzvkicz
	  section.data(97).logicalSrcIdx = 96;
	  section.data(97).dtTransOffset = 324;
	
	  ;% rtB.hmhfxu54r4
	  section.data(98).logicalSrcIdx = 97;
	  section.data(98).dtTransOffset = 327;
	
	  ;% rtB.gbopjhs31j
	  section.data(99).logicalSrcIdx = 98;
	  section.data(99).dtTransOffset = 336;
	
	  ;% rtB.i5gni5jpn0
	  section.data(100).logicalSrcIdx = 99;
	  section.data(100).dtTransOffset = 339;
	
	  ;% rtB.k3gozdqg2o
	  section.data(101).logicalSrcIdx = 100;
	  section.data(101).dtTransOffset = 348;
	
	  ;% rtB.ksru50glpy
	  section.data(102).logicalSrcIdx = 101;
	  section.data(102).dtTransOffset = 352;
	
	  ;% rtB.ctszuq254c
	  section.data(103).logicalSrcIdx = 102;
	  section.data(103).dtTransOffset = 355;
	
	  ;% rtB.ip4tnbacut
	  section.data(104).logicalSrcIdx = 103;
	  section.data(104).dtTransOffset = 358;
	
	  ;% rtB.fkj0rfxikb
	  section.data(105).logicalSrcIdx = 104;
	  section.data(105).dtTransOffset = 359;
	
	  ;% rtB.hiw20ytj4e
	  section.data(106).logicalSrcIdx = 105;
	  section.data(106).dtTransOffset = 362;
	
	  ;% rtB.aqboqamxb3
	  section.data(107).logicalSrcIdx = 106;
	  section.data(107).dtTransOffset = 365;
	
	  ;% rtB.cmhel42bh2
	  section.data(108).logicalSrcIdx = 107;
	  section.data(108).dtTransOffset = 374;
	
	  ;% rtB.fqqi05xdci
	  section.data(109).logicalSrcIdx = 108;
	  section.data(109).dtTransOffset = 383;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.inz2gdmoa0.bogehaw2ze
	  section.data(1).logicalSrcIdx = 109;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.hyavuifm1w.bogehaw2ze
	  section.data(1).logicalSrcIdx = 110;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(3) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.my2dz1bzgp.jkie4iyale
	  section.data(1).logicalSrcIdx = 111;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(4) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.na14ipaqql.jkie4iyale
	  section.data(1).logicalSrcIdx = 112;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(5) = section;
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
    nTotSects     = 11;
    sectIdxOffset = 5;
    
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
      section.nData     = 15;
      section.data(15)  = dumData; %prealloc
      
	  ;% rtDW.ibb0msb3ue
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.nhf0go2f0l
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 3;
	
	  ;% rtDW.fa3l1x4zjw
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 4;
	
	  ;% rtDW.ec4iczeuop
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 5;
	
	  ;% rtDW.mxct422gc5
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 6;
	
	  ;% rtDW.hjp0iqtsnv
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 7;
	
	  ;% rtDW.i1kfofikbc
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 8;
	
	  ;% rtDW.jkyamiugmq
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 9;
	
	  ;% rtDW.o4n211i2ui
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 10;
	
	  ;% rtDW.mfs3ug1ss0
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 11;
	
	  ;% rtDW.dslujyjxf5
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 12;
	
	  ;% rtDW.b3ejbi1eqr
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 13;
	
	  ;% rtDW.bvvwmumrhs
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 16;
	
	  ;% rtDW.c4dd1uf5cu
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 17;
	
	  ;% rtDW.mpbkk0mzty
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 20;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 25;
      section.data(25)  = dumData; %prealloc
      
	  ;% rtDW.bf0wx5i3d2.LoggedData
	  section.data(1).logicalSrcIdx = 15;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.lmbiyygj1j.LoggedData
	  section.data(2).logicalSrcIdx = 16;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.odovor5zlm.LoggedData
	  section.data(3).logicalSrcIdx = 17;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.aciexyi41t.LoggedData
	  section.data(4).logicalSrcIdx = 18;
	  section.data(4).dtTransOffset = 4;
	
	  ;% rtDW.fezqwh42l5.LoggedData
	  section.data(5).logicalSrcIdx = 19;
	  section.data(5).dtTransOffset = 5;
	
	  ;% rtDW.bg1zgnoceo.LoggedData
	  section.data(6).logicalSrcIdx = 20;
	  section.data(6).dtTransOffset = 6;
	
	  ;% rtDW.extsqgayhv.LoggedData
	  section.data(7).logicalSrcIdx = 21;
	  section.data(7).dtTransOffset = 7;
	
	  ;% rtDW.cxxenrhbyw.LoggedData
	  section.data(8).logicalSrcIdx = 22;
	  section.data(8).dtTransOffset = 8;
	
	  ;% rtDW.ed4pfucocc.LoggedData
	  section.data(9).logicalSrcIdx = 23;
	  section.data(9).dtTransOffset = 9;
	
	  ;% rtDW.oaunodnfaz.LoggedData
	  section.data(10).logicalSrcIdx = 24;
	  section.data(10).dtTransOffset = 10;
	
	  ;% rtDW.fswxmqi5q4.LoggedData
	  section.data(11).logicalSrcIdx = 25;
	  section.data(11).dtTransOffset = 12;
	
	  ;% rtDW.iyacpvhnn1.LoggedData
	  section.data(12).logicalSrcIdx = 26;
	  section.data(12).dtTransOffset = 13;
	
	  ;% rtDW.afpyxf3dpg.LoggedData
	  section.data(13).logicalSrcIdx = 27;
	  section.data(13).dtTransOffset = 14;
	
	  ;% rtDW.ebogxyqrct.LoggedData
	  section.data(14).logicalSrcIdx = 28;
	  section.data(14).dtTransOffset = 17;
	
	  ;% rtDW.b0orvbplq1.LoggedData
	  section.data(15).logicalSrcIdx = 29;
	  section.data(15).dtTransOffset = 18;
	
	  ;% rtDW.mz5jbmjnbk.LoggedData
	  section.data(16).logicalSrcIdx = 30;
	  section.data(16).dtTransOffset = 19;
	
	  ;% rtDW.ee1yufqlgj.LoggedData
	  section.data(17).logicalSrcIdx = 31;
	  section.data(17).dtTransOffset = 20;
	
	  ;% rtDW.lqoeexexlc.LoggedData
	  section.data(18).logicalSrcIdx = 32;
	  section.data(18).dtTransOffset = 21;
	
	  ;% rtDW.pzl0ps1sgf.LoggedData
	  section.data(19).logicalSrcIdx = 33;
	  section.data(19).dtTransOffset = 22;
	
	  ;% rtDW.fzu0j0csxd.LoggedData
	  section.data(20).logicalSrcIdx = 34;
	  section.data(20).dtTransOffset = 23;
	
	  ;% rtDW.m0ewcdi1la.LoggedData
	  section.data(21).logicalSrcIdx = 35;
	  section.data(21).dtTransOffset = 24;
	
	  ;% rtDW.pyfpqeegkx.LoggedData
	  section.data(22).logicalSrcIdx = 36;
	  section.data(22).dtTransOffset = 25;
	
	  ;% rtDW.ktfoff0c1y.LoggedData
	  section.data(23).logicalSrcIdx = 37;
	  section.data(23).dtTransOffset = 26;
	
	  ;% rtDW.hcmgx2hc5x.LoggedData
	  section.data(24).logicalSrcIdx = 38;
	  section.data(24).dtTransOffset = 27;
	
	  ;% rtDW.m1hkca3izs.LoggedData
	  section.data(25).logicalSrcIdx = 39;
	  section.data(25).dtTransOffset = 28;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 11;
      section.data(11)  = dumData; %prealloc
      
	  ;% rtDW.azi1v4q3r4
	  section.data(1).logicalSrcIdx = 40;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.ajwa5oigiq
	  section.data(2).logicalSrcIdx = 41;
	  section.data(2).dtTransOffset = 3;
	
	  ;% rtDW.k1cyo3ic4z
	  section.data(3).logicalSrcIdx = 42;
	  section.data(3).dtTransOffset = 4;
	
	  ;% rtDW.gzh33iv0mh
	  section.data(4).logicalSrcIdx = 43;
	  section.data(4).dtTransOffset = 5;
	
	  ;% rtDW.gpmzgjuozq
	  section.data(5).logicalSrcIdx = 44;
	  section.data(5).dtTransOffset = 6;
	
	  ;% rtDW.erahgh0zpk
	  section.data(6).logicalSrcIdx = 45;
	  section.data(6).dtTransOffset = 7;
	
	  ;% rtDW.b0fewzdtg1
	  section.data(7).logicalSrcIdx = 46;
	  section.data(7).dtTransOffset = 8;
	
	  ;% rtDW.jzbfaxoaz4
	  section.data(8).logicalSrcIdx = 47;
	  section.data(8).dtTransOffset = 9;
	
	  ;% rtDW.dc0ryh5mbb
	  section.data(9).logicalSrcIdx = 48;
	  section.data(9).dtTransOffset = 10;
	
	  ;% rtDW.a41rrbiaut
	  section.data(10).logicalSrcIdx = 49;
	  section.data(10).dtTransOffset = 11;
	
	  ;% rtDW.mjetb5jzdi
	  section.data(11).logicalSrcIdx = 50;
	  section.data(11).dtTransOffset = 12;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% rtDW.o15the1ksz
	  section.data(1).logicalSrcIdx = 51;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.btxv3caz21
	  section.data(2).logicalSrcIdx = 52;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.ipolmn11w5
	  section.data(3).logicalSrcIdx = 53;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 12;
      section.data(12)  = dumData; %prealloc
      
	  ;% rtDW.jzg2v02ptv
	  section.data(1).logicalSrcIdx = 54;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.b2pp5qcbxs
	  section.data(2).logicalSrcIdx = 55;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.ifnw2qfqxj
	  section.data(3).logicalSrcIdx = 56;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.o03ihhvu3e
	  section.data(4).logicalSrcIdx = 57;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.ic2qykr33o
	  section.data(5).logicalSrcIdx = 58;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.cfspruispf
	  section.data(6).logicalSrcIdx = 59;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.fmsxqmnuh0
	  section.data(7).logicalSrcIdx = 60;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.fo0xzwvgga
	  section.data(8).logicalSrcIdx = 61;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.b2iz5oj0mf
	  section.data(9).logicalSrcIdx = 62;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtDW.l3rcki4h0b
	  section.data(10).logicalSrcIdx = 63;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtDW.dmalgfdtrs
	  section.data(11).logicalSrcIdx = 64;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtDW.mn0b4y0wpz
	  section.data(12).logicalSrcIdx = 65;
	  section.data(12).dtTransOffset = 11;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.atqljxdp0d.iod0jhjcju
	  section.data(1).logicalSrcIdx = 66;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(6) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.pwl3yyzylbp.iod0jhjcju
	  section.data(1).logicalSrcIdx = 67;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(7) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.kzyworijhb.fjromfvqvr
	  section.data(1).logicalSrcIdx = 68;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(8) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.jda3fmwzpyl.fjromfvqvr
	  section.data(1).logicalSrcIdx = 69;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(9) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.pfanvlh2dr.ie02gmwcra
	  section.data(1).logicalSrcIdx = 70;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(10) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.geox5czrb34.ie02gmwcra
	  section.data(1).logicalSrcIdx = 71;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(11) = section;
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


  targMap.checksum0 = 733300408;
  targMap.checksum1 = 1652556171;
  targMap.checksum2 = 1646324833;
  targMap.checksum3 = 2685721454;

