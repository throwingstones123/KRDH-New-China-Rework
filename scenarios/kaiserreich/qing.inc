


country = {
    tag = CSX  

ai = "kaiserreich\Qing.ai"
	policy = {
		date = { year = 0 month = january day = 0 }
		democratic = 4
		political_left = 3
		freedom = 3
		free_market = 3
		professional_army = 1
		defense_lobby = 7
		interventionism = 1
	}


#### cabinet

        headofstate = { type = 9 id = 503001 } #Puyi
	headofgovernment = { type = 9 id = 503002 } #Cao Kun 
	ministerofsecurity = { type = 9 id = 978304 } #Xiong Bingqi
	ministerofintelligence = { type = 9 id = 978306 } #Zhang Qihuang
	chiefofarmy = { type = 9 id = 503008 } #Wu Peifu
	chiefofstaff = { type = 9 id = 978268 } #Jiang Baili 
    chiefofnavy = { type = 9 id = 978124 } #Sa Zhenbing
#### Resource Reserves

        SpyInfo  = {  country = "CSX" NumberOfSpies = 4  } 

	# Resource Reserves
	energy = 200
	metal = 200
	rare_materials 	= 100
	oil 		= 100
	supplies 	= 100
	money		= 50

	capital = 1247 # Beijing
	manpower = 200

        free = { ic = 5 }

    ownedprovinces =      {
		1247 1246 1245 1236 1235 1216 1250 1249 1248 1243 1242 1244 1323 1327 1321 1258 1257 1322 1324 1325 1320 1319 1341 1314 1315 1316 1317 1326
		1267 1313 1318 
	 }
    controlledprovinces = {
		1247 1246 1245 1236 1235 1216 1250 1249 1248 1243 1242 1244 1323 1327 1321 1258 1257 1322 1324 1325 1320 1319 1341 1314 1315 1316 1317 1326
		1267 1313 1318
	  }
    nationalprovinces =   {
		1321 1323 1247 1345 1343 1337 1246 1242 1248 1249 1250 1327 1243 1244    
                1341 1319 1324 1322 1320 1325 1316 1326 1317  1314 1315 1316 1317 1326
				1267 1313 1318
	}
    claimedprovinces = {
        	1321 1323 1247 1345 1343 1337 1246 1242 1248 1249 1250 1327  1243 1244    
                 1341 1319 1324 1322 1320 1325 1316 1326 1317  1314 1315 1316 1317 1326
				1267 1313 1318
             }
diplomacy = {
relation = { tag = EAF value = 60 guaranteed = { day = 29 month = december year = 1935   }  	   } 
relation = { tag = JAP value = -100   	   } 
relation = { tag = MAN value = -20   	   } 
relation = { tag = CHC value = -20   	   }
relation = { tag = CGX value = 10   	   } 
relation = { tag = GER value = 70   	   }
relation = { tag = RUS value = 20   	   }
relation = { tag = MON value = -10   	   }
relation = { tag = CYN value = -20   	   }
relation = { tag = CXB value = -20   	   }
}


	
	techapps = {


#Infantry
1010  1020 1030 1040 1050 1060 1070 #Great War Infantry Division  
1160 1170 1180 1190 1200 1210 #1918 Mountain Division
13060 13070 13080 1310 1320 1330 #Great War Cavalry Division 
1910 1920 1930 1940 1950 1960 #Interbellum Supply 
1830 1840 #Engineers

#Armour & Artillery
2860 2870 2880 #Basic Armoured Car 
2290 2300 2310 2900 #Improved Weltkrieg Heavy Field Artillery
7600 7610 2620 2010 2630#Post-War Tank I 

#Naval
3110 3120 3130 #Light Cruiser
3210 3220 #Heavy Cruiser
3410 #Turret BB
3010 3020 3030 #Chang Feng Class DD
3810 #Troopships
3720 3730 #Torpedoes

#Aircrafts 
4500 4510 4520 4530 4540 #Interwar Fighter 
4600 4610 4620 4630 4120 #Interwar Bomber 
4300 4310 4320 #Multirole fighter
4800 4810 #ww1 strategic bomber
4700 #ww1 navalbomber
7290 7300 #CAS

#Industrial
5800 5080 #Improved Construction Engineering 
5980 #Spec Equipment Rough terrain
5600 #Medicine
5810 #Scientific Management
5310 #Census tabulating

#Naval Doctrines
8010 8050

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9010 9030 9020 27560 27460 27470 

# Great War Land Doctrines (entente)
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910
6570 6300 #Manpower Focus
14000 #Improved Great War Hospital System

}

#########  OOB (...)

	landunit = {
		location = 1258 # Xi'an
		name = "5. Jun"
		### leader = # Yan Xishan
		id = { type = 22300 id = 1 }
		
			division = {
	        	id = { type = 22300 id = 2 }
			name = "4. Bubing Shi"
			type = infantry
			strength = 100
			model = 6
			}

			division = {
	        	id = { type = 22300 id = 7 }
			name = "1. Qibing Shi"
			type = cavalry
			strength = 100
			model = 6
			extra = light_armor_brigade
			brigade_model = 0
			}
			}
	
		landunit = {
		location = 1254 # Changzhi
		name = "4. Jun"
		### leader = # Yang Aiyuan
		id = { type = 22300 id = 9 }
		
			division = {
	        	id = { type = 22300 id = 10 }
			name = "1. Bubing Shi"
			type = infantry
			strength = 100
			model = 6
			}

			division = {
	        	id = { type = 22300 id = 12 }
			name = "2. Bubing Shi"
			type = infantry
			strength = 100
			model = 6
			}
			}

		landunit = {
		location = 1245 # Hohhot
		name = "3. Jun"
		### leader = # Fu Zuoyi
		id = { type = 22300 id = 13 }
			division = {
	        	id = { type = 22300 id = 14 }
			name = "3. Bubing Shi"
			type = infantry
			strength = 100
			model = 6
			}
			}

		landunit = {
		location = 1245 # Hohhot
		name = "2. Jun"
		id = { type = 22300 id = 16 }
			
			division = {
	        	id = { type = 22300 id = 17 }
			name = "5. Bubing Shi"
			type = infantry
			strength = 100
			model = 6
			}
			}

		landunit = {
		location = 1247 # Beiping
		name = "National Army"
		leader = 503022 # Wu Peifu
		id = { type = 22300 id = 18 }
		
			division = {
	        	id = { type = 22300 id = 19 }
			name = "6. Bubing Shi"
			type = infantry
			strength = 100
			model = 7
			extra = artillery brigade_model = 3
			}

			division = {
	        	id = { type = 22300 id = 20 }
			name = "7. Bubing Shi"
			type = infantry
			strength = 100
			model = 7
			extra = artillery brigade_model = 3
			}
			
			division = {
	        	id = { type = 22300 id = 21 }
			name = "8. Bubing Shi"
			type = infantry
			strength = 100
			model = 7
			extra = artillery brigade_model = 3
			}

			division = {
	        	id = { type = 22300 id = 22 }
			name = "9. Bubing Shi"
			type = infantry
			strength = 100
			model = 7
			extra = artillery brigade_model = 3
			}
		
			division = {
	        	id = { type = 22300 id = 23 }
			name = "2. Qibing Shi"
			type = cavalry
			strength = 100
			model = 6
			extra = armored_car brigade_model = 2
			}
		
			division = {
	        	id = { type = 22300 id = 24 }
			name = "10. Bubing Shi"
			type = infantry
			strength = 100
			model = 7
			extra = light_armor_brigade brigade_model = 1
			}
			}

		landunit = {
		location = 1243 # Baoding
		name = "6. Jun"
		id = { type = 22300 id = 26 }
			division = {
	        	id = { type = 22300 id = 27 }
			name = "11. Bubing Shi"
			type = infantry
			strength = 100
			model = 6
			}
			}

		landunit = {
		location = 1246 # Kalgan
		name = "7. Jun"
		id = { type = 22300 id = 28 }
		division = {
	        	id = { type = 22300 id = 29 }
			name = "12. Bubing Shi"
			type = infantry
			strength = 100
			model = 6
			}
			}

		landunit = {
		location = 1236 # Chengde
		name = "8. Jun"
		### leader = # Han Fuqu
		id = { type = 22300 id = 30 }
		division = {
	        	id = { type = 22300 id = 31 }
			name = "13. Bubing Shi"
			type = infantry
			strength = 100
			model = 6
			}

			division = {
	        	id = { type = 22300 id = 32 }
			name = "14. Bubing Shi"
			type = infantry
			strength = 100
			model = 6
			}
			}

		landunit = {
		location = 1319 # Jinan
		name = "12. Jun"
		### leader = # Sun Tongxuan
		id = { type = 22300 id = 35 }
		
			division = {
	        	id = { type = 22300 id = 36 }
			name = "15. Bubing Shi"
			type = infantry
			strength = 100
			model = 6
			}

			division = {
	        	id = { type = 22300 id = 37 }
			name = "16. Bubing Shi"
			type = infantry
			strength = 100
			model = 6
			}	
			}

		landunit = {
		location = 1322 # Jinan
		name = "9. Jun"
		id = { type = 22300 id = 38 }
		
			division = {
	        	id = { type = 22300 id = 39 }
			name = "17. Bubing Shi"
			type = infantry
			strength = 100
			model = 6
			}
			}
	landunit = {
		location = 1325 # Hohhot
		name = "10. Jun"
		### leader = 50278 # Tang Enbo
		id = { type = 22000 id = 27 }
		division = {
	        	id = { type = 22000 id = 28 }
			name = "18. Bubing Shi"
			type = infantry
			model = 6
		}
	}
	landunit = {
		location = 1317 # Wuhan
		name = "11. Jun"
		### leader = # Li Shengda
		id = { type = 22000 id = 43 }
		division = {
	        	id = { type = 22000 id = 44 }
			name = "19. Bubing Shi"
			type = infantry
			model = 6
		}
	}
	landunit = {
		location = 1247 # Handan
		name = "13. Jun"
		### leader = 50253 # Shang Zhen
		id = { type = 22000 id = 79 }
		division = {
	        	id = { type = 22000 id = 80 }
			name = "20. Bubing Shi"
			type = infantry
			model = 6
		}
	}
	landunit = {
		location = 1247 # Datong
		name = "14. Jun"
		### leader = 50296 # Xu Yongchang
		id = { type = 22000 id = 83 }
		division = {
	        	id = { type = 22000 id = 84 }
			name = "21. Bubing Shi"
			type = infantry
			model = 6
		}
	}
	landunit = {
		location = 1247 # Changzhi
		name = "15. Jun"
		### leader = # ???
		id = { type = 22000 id = 103 }
		division = {
	        	id = { type = 22000 id = 104 }
			name = "22. Bubing Shi"
			type = infantry
			model = 6
		}
	}
	landunit = {
		location = 1243 # Baoding
		name = "16. Jun"
		### leader = 50305 # Wan Fulin
		id = { type = 22000 id = 128 }
		division = {
	        	id = { type = 22000 id = 129 }
			name = "23. Bubing Shi"
			type = infantry
			model = 6
		}
	}
	landunit = {
		location = 1247 # Yuling
		name = "17. Jun"
		### leader = # Feng Zhanhai
		id = { type = 22000 id = 136 }
		division = {
	        	id = { type = 22000 id = 137 }
			name = "24. Bubing Shi"
			type = infantry
			model = 6
		}
	}
	landunit = {
		location = 1247 # Yuling
		name = "18. Jun"
		### leader = 50091 # He Zhuguo
		id = { type = 22000 id = 145 }
		division = {
	        	id = { type = 22000 id = 146 }
			name = "3. Qibing Shi"
			type = cavalry
			model = 6
		}
	}
	landunit = {
		location = 1247 # Yuling
		name = "19. Jun"
		### leader = #
		id = { type = 22000 id = 205 }
		division = {
	        	id = { type = 22000 id = 206 }
			name = "25. Bubing Shi"
			type = infantry
			model = 6
		}
	}
	landunit = {
		location = 1247 # Taiyuan
		name = "20. Jun"
		### leader = #
		id = { type = 22000 id = 266 }
		division = {
	        	id = { type = 22000 id = 267 }
			name = "26. Bubing Shi"
			type = militia
			model = 4
		}
	}

######################
### Air Force
######################

airunit = {
location = 1247
base = 1247
        id = { type = 22000 id = 400 }
  name = "Di'1 Kongjun"

  division = {
        id = { type = 22000 id = 401 }
  name = "1. Zhandouji Dadui"
  type = interceptor
  model = 6
  strength = 100
  }
  
  division =  {
        id = { type = 22000 id = 402 }
  name = "2. Zhandouji Dadui"
  type = interceptor
  model = 6
  strength = 100
  }
  }

airunit = {
location = 1247
base = 1247
        id = { type = 22000 id = 403 }
name = "Di'2 Kongjun"

  division = {
        id = { type = 22000 id = 404 }
  name = "1. TAC Hongzhaji Dadui"
  type = tactical_bomber
  model = 4
  strength = 100
  }
  }

######################
### Navy
######################

navalunit = {
name = "Imperial Fleet of China"
id = { type = 22000 id = 300 }
location = 1245
base = 1245 
division = { id = { type = 22000 id = 323 } name =  "Long Wei" type = battleship  model = 2  } # sold by German Empire formerly SMS Markgraf
division = { id = { type = 22000 id = 324 } name =  "Wu Wei" type = battleship  model = 2  } # sold by German Empire formerly SMS Kronprinz
division = { id = { type = 22000 id = 301 } name =  "Nan'Shin" type = battleship  model = 1  } #Pre Dreadnought bought from Germany
division = { id = { type = 22000 id = 302 } name =  "Ping'hai" type = heavy_cruiser  model = 1 }
division = { id = { type = 22000 id = 303 } name =  "Ning'hai" type = heavy_cruiser  model = 1 }
division = { id = { type = 22000 id = 304 } name =  "Hai-Chen" type = light_cruiser model = 2  }
division = { id = { type = 22000 id = 305 } name =  "Chao-Hao" type = light_cruiser model = 2  }
division = { id = { type = 22000 id = 306 } name =  "1. Quzujian Dadui" type = destroyer  model = 2  } 
division = { id = { type = 22000 id = 307 } name =  "2. Quzujian Dadui" type = destroyer  model = 2  } 
division = { id = { type = 22000 id = 308 } name =  "3. Quzujian Dadui" type = destroyer  model = 2  } 
division = { id = { type = 22000 id = 309 } name =  "4. Quzujian Dadui" type = destroyer  model = 2  } 
}

navalunit = {
name = "Imperial Submarine Fleet"
id = { type = 22000  id = 320 }
location = 1245
base = 1245

division = { id = { type = 22000 id = 321 } name =  "1. Qianting Budui" type = submarine  model = 1 }
division = { id = { type = 22000 id = 322 } name =  "2. Qianting Budui" type = submarine  model = 1 }
}

}  