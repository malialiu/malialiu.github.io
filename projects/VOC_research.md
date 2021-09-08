---
layout: project
type: project
image: images/VOC.jpg
title: Quantification of the Volatile Organic Compounds (VOCs) in Daily Housework
# All dates must be YYYY-MM-DD format!
date: 2021-09-02
labels:
  - Chemistry
  - Arduino
summary: Research on VOC concentration level from daliy housework
---
## Introduction
Volatile Organic Compounds (VOCs) are a grouping of carbon-based chemicals that contribute to poor air-quality indoors. The short term effects for that could be skin/eye irritation, breathing issues, and headache. The long term effects could be cancer. Industrial and public workplaces are required to monitor TVOC levels, but private homes are not. 
## Objective
The focus of this research is to measure the TVOC level in several types of indoor household activities. The hypothesis is that people can affect the indoor air quality by doing housework with chemicals involved because it can raise the volatile organic compound concentration level. The housework being tested in this research is cooking noodles, cleaning the kitchen floor with bleach, washing dishes, and wiping fan blades.
## Materials and Methods
<img src="/images/setting.png" data-canonical-src="/images/setting.png"  height="400" />
<img src="/images/sensor.png" data-canonical-src="/images/sensor.png"  height="400" />


### Measurement Procedure: 
  1. Assemble hardware components, load Arduino code. 
  2. Power on the sensor. Wait 5 - 10 minutes for calibration. 
  3. Place sensor 1.5 feet from the center of the housework area. 
  4. Record data for duration of 7 minutes.

## Result
<img src="/images/chart.png" data-canonical-src="/images/chart.png"  height="400" />
<img src="/images/table.png" data-canonical-src="/images/table.png" width="800" height="400" />

  Cleaning the kitchen floor: Many cleaning products contain sodium hypochlorite. It can react with soap and produce the volatile organic compound.<br/> 
  Wiping fan blades: Isopropyl alcohol is a volatile organic compound, which is commonly use in the cleaning product.<br/>
  Washing dishes: Methylisothiazolinone is a volatile organic compound, which is commonly use as a preservative in the cleaning products.<br/>
  Cooking noodle: Palmitic acid in palm oil might produce VOC by reacting with the air. 

## Conclusion
All four housework activities involved an increase in the TVOC level in the air. Surprisingly, Washing dishes had the highest TVOC level. Cooking noodles and cleaning the kitchen floor with bleach, have lower TVOC levels. Doing housework with a ventilation system (i.e., a window open) is shown to reduce the TVOC level in all 4 cases tested.

## References
Gonzalez. M., Celis, A., Guevara-Suarez. M., Molina. J., and Carazzone. C. (2019, February 24). Yeast Smell Like What They Eat: Analysis of Volatile Organic Compounds of Malassezia furfur in Growth Media Supplemented with Different Lipids. National Center for Biotechnology Information. https://www.ncbi.nlm.nih.gov/pmc/articles/PMC6384859/ <br/>
Odabasi M. (2008, March 1). Halogenated Volatile Organic Compounds From the Use of Chlorine-Bleach-Containing Household Products. National Center for Biotechnology Information. https://pubmed.ncbi.nlm.nih.gov/18441786/ <br/>
Volatile organic compounds. (n.d.). United States Environmental Protection Agency. https://iaspub.epa.gov/sor_internet/registry/substreg/searchandretrieve/advancedsearch/search.do?details=displayDetails&selectedSubstanceId=83723#


