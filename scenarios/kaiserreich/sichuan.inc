 
 ############################## 
 # Country definition for U64 # 
 ############################## 
  
 country = 
 {  tag                    = U64
	intrinsic_gov_type     = paternal_autocrat 
	extra_tc               = 4 
	# Resource Reserves 
	free = { ic = 12 oil = 3 energy = 2 metal = 2 rare_materials = 2 money = 2 manpower = 0 }
	energy                 = 300
	metal                  = 150
	rare_materials         = 75
	oil                    = 100 
	supplies               = 5000
	money                  = 50 
	capital                = 1297 # Chengdu 
	manpower               = 0 
	dissent                = 40 
	flag_ext = _qing
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 3 
     political_left    = 4 
     freedom           = 3 
     free_market       = 3 
     professional_army = 2 
     defense_lobby     = 2 
     interventionism   = 1 
    } 
   nationalprovinces      = {  1297 1293 1292 1261 1296 1298 1302 1299 1291 } 
   ownedprovinces         = {  1297 1293 1292 1261 1296 1298 1302 1299 1291 } 
   controlledprovinces    = {  1297 1293 1292 1261 1296 1298 1302 1299 1291 } 
	#Yunnan
   techapps = { 
	
#Armour & Artillery
2860 #AC
2290 #Light Field Artillery 

#Infantry
1010  1020 1030 1040 1050 1060 #1918 lgt. Infantry Division 
1910 1920 1930 1940 1950 1960 #Interbellum 1930 Supply 
13060 13070 13080 1310 1320 1330 1340 #1916 Cavalry Division  

#Industrial
5700 #Early Agriculture
5600 #Medicine

# Land Doctrines WWI - Entente line
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470

	} 
	
   diplomacy = 
   {  relation = {  tag = CHI value = 200  } 
     relation = {  tag = CSX value = 200  } 
     relation = {  tag = CXB value = 200  } 
     relation = {  tag = CGX value = 200  } 
     relation = {  tag = U67 value = 200  } 
     relation = {  tag = JAP value = -75  } 
     relation = {  tag = MAN value = -75  } 
     relation = {  tag = CHC value = -200  } 
    } 
   SpyInfo                = {  country = "U64" NumberOfSpies = 2  } 
   headofstate            = {  type = 9 id = 995100 } 
   headofgovernment       = {  type = 9 id = 995101  } 
   foreignminister        = {  type = 9 id = 995103  } 
   armamentminister       = {  type = 9 id = 995102  } 
   ministerofsecurity     = {  type = 9 id = 995104  } 
   ministerofintelligence = {  type = 9 id = 995105  } 
   chiefofstaff           = {  type = 9 id = 995106  } 
   chiefofarmy            = {  type = 9 id = 995107 } 
   chiefofnavy            = {  type = 9 id = 995108  } 
   chiefofair             = {  type = 9 id = 995134  } 

# Deng Xihou ( Baoding Department )
	landunit = 
   {  location = 1292 # Ya'an
     name     = "24th Corps" 
     # leader =  
     id       = {  type = 22501 id = 1  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22501 id = 2  } 
       name       = "136th Division" 
       type     = militia 
       strength   = 33
       model      = 3
	   extra1 = police
	   brigade_model1 = 1
      }
      Division = 
     {  experience = 30 
       id         = {  type = 22501 id = 3  } 
       name       = "137th Division" 
       type     = militia
       strength   = 33
       model      = 3
	   extra1 = police
	   brigade_model1 = 1
      } 
     Division = 
     {  experience = 30 
       id         = {  type = 22501 id = 4  } 
       name       = "138th Division" 
       type       = militia
       strength   = 33
       model      = 3
	   extra1 = police
	   brigade_model1 = 1
      }
    }
	# Liu Wenhui ( Baoding Department )
	landunit = 
   {  location = 1297  # Chengdu
   id       = {  type = 22501 id = 30  } 
     name     = "24th Army" 
     # leader =  
     id       = {  type = 22501 id = 5  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22501 id = 6  } 
       name       = "1st Independent Brigade" 
       type     = infantry
       strength   = 40
       model      = 6
      }
      Division = 
     {  experience = 30 
       id         = {  type = 22501 id = 7  } 
       name       = "2nd Independent Brigade" 
       type     = infantry
       strength   = 40
       model      = 6
      } 
     Division = 
     {  experience = 30 
       id         = {  type = 22501 id = 8  } 
       name       = "3rd Independent Brigade" 
       type       = infantry
       strength   = 40
       model      = 6
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22501 id = 9  } 
       name       = "5th Independent Brigade" 
       type       = infantry
       strength   = 40
       model      = 6
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22501 id = 10  } 
       name       = "7th Independent Brigade" 
       type       = infantry
       strength   = 40
       model      = 6
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22501 id = 11  } 
       name       = "9th Independent Brigade" 
       type       = infantry
       strength   = 40
       model      = 6
      }
	   Division = 
     {  experience = 30 
       id         = {  type = 22501 id = 12 } 
       name       = "24th Army HQ" 
       type       = hq
       strength   = 40
       model      = 2
      }
    }
# Liu Xiang ( Industrial Corps )
		landunit = {     
		
     location = 1301  # Fuling
     name     = "21st Army" 
	 id       = {  type = 22501 id = 29  } 
     # leader =  
     Division = 
     {  experience = 30 
       id         = {  type = 22501 id = 13  } 
       name       = "21st Independent Brigade" 
       type       = infantry
       strength   = 40
       model      = 6
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22501 id = 14  } 
       name       = "22nd Independent Brigade" 
       type       = infantry
       strength   = 40
       model      = 6
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22501 id = 15  } 
       name       = "23rd Independent Brigade" 
       type       = infantry
       strength   = 40
       model      = 6
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22501 id = 16  } 
       name       = "24th Independent Brigade" 
       type       = infantry
       strength   = 40
       model      = 6
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22501 id = 17  } 
       name       = "30th Independent Brigade" 
       type       = infantry
       strength   = 40
       model      = 6
      }
	   Division = 
     {  experience = 30 
       id         = {  type = 22501 id = 18 } 
       name       = "21st Army HQ" 
       type       = hq
       strength   = 40
       model      = 2
      }
	 }
# Yang Sen ( Baoding Department )
	landunit = {     
     location = 1299  # Chongqing
     name     = "20th Army" 
     # leader =  
	 id       = {  type = 22501 id = 28  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22501 id = 19  } 
       name       = "21st Independent Brigade" 
       type       = infantry
       strength   = 40
       model      = 6
      }
	 }
	 
# Tian Songyao ( Baoding Department )
	landunit = 
   {  location = 1299  # Chongqing
     name     = "29th Army" 
     # leader =  
     id       = {  type = 22501 id = 27  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22501 id = 20  } 
       name       = "1st Independent Brigade" 
       type     = infantry
       strength   = 40
       model      = 6
      }
      Division = 
     {  experience = 30 
       id         = {  type = 22501 id = 21  } 
       name       = "2nd Independent Brigade" 
       type     = infantry
       strength   = 40
       model      = 6
      } 
     Division = 
     {  experience = 30 
       id         = {  type = 22501 id = 22 } 
       name       = "3rd Independent Brigade" 
       type       = infantry
       strength   = 40
       model      = 6
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22501 id = 23  } 
       name       = "5th Independent Brigade" 
       type       = infantry
       strength   = 40
       model      = 6
      }
	}

# Deng Xihou ( Baoding Department )
	landunit = 
   {  location = 1302  # Daxian
     name     = "28th Army" 
     # leader =  
     id       = {  type = 22501 id = 24  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22501 id = 25 } 
       name       = "1st Independent Brigade" 
       type     = infantry
       strength   = 40
       model      = 6
      }
      Division = 
     {  experience = 30 
       id         = {  type = 22501 id = 26  } 
       name       = "2nd Independent Brigade" 
       type     = infantry
       strength   = 40
       model      = 6
      } 
	}
}	