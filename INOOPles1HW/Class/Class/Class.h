#pragma once

#include <string>

class Class : public Class{

public:

	// Variable die belangrijk zijn voor een losse les uit de module
	// Ik heb voor veel gevallen gekozen om een sting te gebruiken. Dit omdat er over het algemeen geen logica op uitgeoefend hoef te worden. 

	std::string teacherLastName;		//van Oudenkerk Moria
	std::string teacherFirstName;		//Edwin
	std::string classRoom;				//IB168
	std::string date;					//2017-09-13
	std::string time;					//16:40
	std::string studentGroups;			//GAR2A, GAR2B, GDS2, GDV2, IAD2, ON
	int minimumNumberOfStudents;		//8 (?)
	int maximumNumberOfStudents;		//25
	bool requireLaptops;				//True
	bool requireWallPower;				//True
	bool requireTables;					//True
	bool requireBeamer;					//True
	bool requireMicrophone;				//False


	// Variable die belangrijk zijn voor de gehele module. 
	// Een andere optie is om hier een aparte class van te maken en een losse class voor de enkele les. 
	// Normaal zou dat ook mijn oplossing zijn, maar nu was de opdracht om een enkele class te maken. 

	std::string cursusCode;				//G&I-2-KINOOP-17
	std::string lessonModuleName;		//Intro Object Oriented Programming
	std::string cursusType;				//Module
	std::string contactPerson;			//R. Schravenhoff
	std::string contactPersonEmail;		//robbertjan.schravenhoff@hku.nl
	std::string teacher;				//Edwin can Oudenkerk Moria
	std::string cursusLanguage;			//Dutch and C++
	std::string period;					//Semester 1 / Blok 1
	std::string competency;				//Communicatie, Leren en reflecterend vermogen, Ontwerpen en prototypen, Technische kennis en analyse, Testen en implementeren
	std::string deliverable;			//Een werkende set opdrachten, voorzien van commentaar
	std::string assessmentCriteria;		//- (TECH) De code voldoet aan de eisen die gesteld zijn door de docent op gebied van leesbaarheid.
										//- (TECH) De student kan een object - georienteerd programma schrijven in C++
										//- (TECH) De student kan classes in C++ correct en compleet implementeren
										//- (TECH) De student kan memory - leak vrije code schrijven
										//- (TECH) De student kan een C++ programma schrijven dat gebruik maakt van de standard IO faciliteiten van C++
	int collageYearModule;				//Jaar 2
	int contactHours;					//16
	int selfTuitionHours;				//41
	bool attendanceRequired;			//True
	int ects;							//2
		
	//Volgende variable gaan over de opleiding zelf, zou normaal ook in een aparte class staan. 

	std::string accademicSector;		//Techniek
	std::string accademicDomain;		//Creative Media and Game Technoligies
	std::string nameUniversity;			//HKU
	std::string department;				//Games and Interaction
	std::string	study;					//Game Development, Game Design and/or Interaction Design
};
	