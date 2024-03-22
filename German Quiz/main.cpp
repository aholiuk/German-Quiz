#include <iostream>
#include <string>

using namespace std;

//this function translates from english to german
int engToGer(string eng, string ger) {
	cout << "How do you say " << "\"" << eng << "\"" << " in German?\n";
	string word;
	cin >> word;

	if (word == ger) {
		cout << "Correct!\n\n";
	}
	else {
		cout << "Wrong!" << ger << endl << endl;
	}
	return 0;
}

//this function repeats learning or exits the program
int repeatLearningPremade(string arrEng[], string arrGer[], int i, int iii) {
	i = 0;
	iii = i + 10;
	for (; ; ) {
		cout << "Would you like to repeat (y) or exit learning(n)?\n";
		char answer;
		cin >> answer;
		cout << "\n\n\n";
		if (answer == 'y') {
			for (i = 0; i < iii; i++) {
				engToGer(arrEng[i], arrGer[i]);
			}
		}
		else if (answer == 'n') {
			break;
		}
	}
	return 0;
}

int main() {
	int difLvl;
	int wrdKind;
	int program;
	string arrOwnEng[10];
	string arrOwnGer[10];
	const int SIZE = 50;
	string arrEngVerb[SIZE]{
		//a1 0-10
		"to be", "to do", "to eat", "to sleep", "to run", "to have", "can", "to see", "to sing", "to become",
		//a2 10-20
		"to order", "to recieve", "to offer", "to be allowed to", "to flow", "to cook", "to fry", "to win", "to advise", "to climb/rise",
		//b1 20-30
		"to grow up", "to knock", "to recommend", "to plan", "to try", "to forbid", "to allow", "to save", "to block", "to transfer",
		//b2 30-40
		"to distroy", "to encounter", "to drive", "to enjoy", "to insert/set", "to envy", "to pick up", "to survive", "to acquire", "to condemn"
		//c1 40-50
		"to include", "to crawl", "to roar", "to inherit", "to miss", "to renovate", "to revise", "to hum", "to measure", "to celebrate"
	};
	string arrGerVerb[SIZE]{ 
		//a1 0-10
		"sein", "machen", "essen", "schlafen", "laufen", "haben", "koennen", "sehen", "singen", "werden",
		//a2 10-20
		 "befehlen", "bekommen", "bieten", "duerfen", "fliessen", "kochen", "braten", "gewinnen", "raten", "steigen",
		//b1 20-30
		 "aufwachsen", "klopfen", "empfehlen", "vorhaben", "versuchen", "verbieten", "erlauben", "sparen", "sperren", "ueberweisen",
		//b2 30-40
		"verderben", "begegnen", "treiben", "genissen", "einlegen", "beneiden", "abheben", "ueberleben", "erwerben", "verdammen",
		//c1 40-50
		"beinhalten", "kraulen", "bruellen", "vererben", "versauemen", "sanieren", "revidiren", "surren", "bemessen", "zelebrieren"
	};
	string arrEngNoun[SIZE]{ 
		//a1 0-10
		"water", "knife", "girl", "light", "wall", "door", "honey", "spring", "health", "university" ,
		//a2 10-20
		"evening", "idea or intuition", "advertisement", "hunger", "pot", "dishes", "bean", "report card", "mistake", "lesson",
		//b1 20-30
		"mushroom", "opponent", "coin", "box", "socket", "behavior", "separation", "doubt", "tax", "death",
		//b2 30-40
		"success", "chain", "vicinity", "loalty", "company", "occasion", "retraining", "position", "comb", "run",
		//c1 40-50
		"addiction", "remnant", "facet", "delay", "sailing trip", "fee", "fame", "wing", "district", "storyline"
	};
	string arrGerNoun[SIZE]{ 
		//a1 0-10
		"sWasser", "sMesser", "sMaedchen", "sLicht", "eWand", "eTuer", "rHoenig", "rFruehling", "eGesundheit", "eUniversitaet" ,
		//a2 10-20
		"rAbend", "eAhnung", "eAnzeige", "rHunger", "rTopf", "sGeschirr", "eBonne", "sZeugnis", "rFehler", "rUnterricht",
		//b1 20-30
		"rPilz", "rGegner", "eMuenze", "rKasten", "eSteckdose", "sVerhalten", "eTrennung", "rZweifel", "eSteuer", "rTod",
		//b2 30-40
		"rErfolg", "eKette", "eUmgebung", "eTreue", "eUnternemung", "rAnlass", "eUmschulung", "eLage", "rKamm", "rLauf",
		//c1 40-50
		"eSucht", "eUeberrest", "eFacette", "eVerzoegerung", "eSegeltoern", "sEntgelt", "rRuhm", "rFluegel", "rBezirk", "rHandlungsstrang"
	};
	int executionAmmount;
	int i = 0;
	int iii = i + 10;

	cout << "Would you like to study pre-made program or write your own?\n" << " 1. Pre-made\n 2. Own\n";
	cin >> program;
	switch (program)
	{
	case 1: //pre-made choice
		cout << "Pick difficulty level:\n 1. A1\n 2. A2\n 3. B1\n 4. B2\n 5. C1\n";
		cin >> difLvl;
		switch (difLvl) {
		case 1: //a1
		{
			cout << "Pick what type of words would you like to study:\n 1. verbs\n 2. nouns\n";
			cin >> wrdKind;
			switch (wrdKind) {

			case 1: //verbs
				for (i = 0; i < iii; i++) {
					engToGer(arrEngVerb[i], arrGerVerb[i]);
				}
				i = 0;
				repeatLearningPremade(arrEngVerb, arrGerVerb, i, iii);
				break;

			case 2: //nouns
				for (i = 0; i < iii; i++) {
					engToGer(arrEngNoun[i], arrGerNoun[i]);
				}
				
				repeatLearningPremade(arrEngNoun, arrGerNoun, i, iii);
				break;

			default:
				cout << "Error! Selected type is not existing!";
				break;
			}
		}
		break;

		case 2: //a2
			cout << "Pick what type of words would you like to study:\n 1. verbs\n 2. nouns\n";
			cin >> wrdKind;
			switch (wrdKind) {

			case 1: //verbs
				for (i = 10; i < iii; i++) {
					engToGer(arrEngVerb[i], arrGerVerb[i]);
				}
				repeatLearningPremade(arrEngVerb, arrGerVerb, i, iii);
				break;

			case 2: //nouns
				for (i = 10; i < iii; i++) {
					engToGer(arrEngNoun[i], arrGerNoun[i]);
				}
				repeatLearningPremade(arrEngNoun, arrGerNoun, i, iii);
				break;

			default:
				cout << "Error! Selected type is not existing!";
				break;
			}
			break;

		case 3: //b1
			cout << "Pick what type of words would you like to study:\n 1. verbs\n 2. nouns\n";
			cin >> wrdKind;
			switch (wrdKind) {

			case 1: //verbs
				for (i = 20; i < iii; i++) {
					engToGer(arrEngVerb[i], arrGerVerb[i]);
				}
				repeatLearningPremade(arrEngVerb, arrGerVerb, i, iii);
				break;

			case 2: //nouns
				for (i = 20; i < iii; i++) {
					engToGer(arrEngNoun[i], arrGerNoun[i]);
				}
				repeatLearningPremade(arrEngNoun, arrGerNoun, i, iii);
				break;

			default:
				cout << "Error! Selected type is not existing!";
				break;
			}
			break;

		case 4: //b2
			cout << "Pick what type of words would you like to study:\n 1. verbs\n 2. nouns\n";
			cin >> wrdKind;
			switch (wrdKind) {

			case 1: //verbs
				for (i = 30; i < iii; i++) {
					engToGer(arrEngVerb[i], arrGerVerb[i]);
				}
				repeatLearningPremade(arrEngVerb, arrGerVerb, i, iii);
				break;

			case 2: //nouns
				for (i = 30; i < iii; i++) {
					engToGer(arrEngNoun[i], arrGerNoun[i]);
				}
				repeatLearningPremade(arrEngNoun, arrGerNoun, i, iii);
				break;

			default:
				cout << "Error! Selected type is not existing!";
				break;
			}
			break;

		case 5: //c1
			cout << "Pick what type of words would you like to study:\n 1. verbs\n 2. nouns\n";
			cin >> wrdKind;
			switch (wrdKind) {

			case 1: //verbs
				for (i = 40; i < iii; i++) {
					engToGer(arrEngVerb[i], arrGerVerb[i]);
				}
				repeatLearningPremade(arrEngNoun, arrGerNoun, i, iii);
				break;

			case 2: //nouns
				for (i = 40; i < iii; i++) {
					engToGer(arrEngNoun[i], arrGerNoun[i]);
				}
				repeatLearningPremade(arrEngNoun, arrGerNoun, i, iii);
				break;

			default:
				cout << "Error! Selected type is not existing!";
				break;
			}
			break;

		default:
			cout << "Error! Selected level is not existing!";
			break;
		}
		break;

	case 2: //own choice
		cout << "How many words would you like to learn?\n";
		cin >> executionAmmount;
		cout << "Enter word in English and then its translation to German:\n";
		for (int i = 0; i < executionAmmount; i++) {
			cin >> arrOwnEng[i] >> arrOwnGer[i];
		}
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		for (int i = 0; i < executionAmmount; i++) {
			engToGer(arrOwnEng[i], arrOwnGer[i]);
		}
		for ( ; ; ) {
			cout << "Would you like to repeat (y), start over with new words(o) or exit learning(n)?\n";
			char answer;
			cin >> answer;
			cout << "\n\n\n";
			if (answer == 'y') {
				for (int i = 0; i < executionAmmount; i++) {
					engToGer(arrOwnEng[i], arrOwnGer[i]);
				}
			}
			else if (answer == 'n') {
				break;
			}
			else if (answer == 'o') {
				cout << "Enter word in English and then its translation to German:\n";
				for (int i = 0; i < executionAmmount; i++) {
					cin >> arrOwnEng[i] >> arrOwnGer[i];
				}
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
				for (int i = 0; i < 10; i++) {
					engToGer(arrOwnEng[i], arrOwnGer[i]);
				}
			}
		}
		break;
	default:
		cout << "Error! Selected type is not existing!";
		break;
	}

	return 0;
}