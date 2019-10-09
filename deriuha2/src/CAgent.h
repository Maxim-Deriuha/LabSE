/*
 * CAgent.h
 *
 *  Created on: 3 זמגע. 2019 נ.
 *      Author: Acer
 */

#ifndef CAGENT_H_
#define CAGENT_H_

#pragma once
#include <string>

using std::string;

class CAgent {
private:
	string nickname;
	int type_specialty;
public:
	int unique_identifier;
		int nickname_length;
		int get_type_speciality()const { return type_specialty; };
		string get_nickname()const { return nickname; };
		float CheckSum(string get_nickname());
		CAgent() :unique_identifier(0), nickname_length(0), nickname(), type_specialty(0) {};
	    CAgent( int unique_identifier, int nickname_lengh, string nickname, int type_specialty);
	    
	    CAgent::CAgent( int unique_identifier, int nickname_lengh, string nickname, int type_specialty){
			this->unique_identifier = unique_identifier;
			this->nickname_length = nickname_length;
			this->nickname = nickname;
			this->type_specialty = type_specialty;
	    }
	    float CAgent::CheckSum() const {


	    		    	return get_nickname().length() ;
	    		    }
	   
	virtual ~CAgent();
};

#endif /* CAGENT_H_ */
