 #ifndef CONTACT_HPP
 #define CONTACT_HPP


 #include <iostream>
 #include <string>

class Contact {
	private :
		std::string FirstName;
		std::string LastName;
		std::string NickName;
		std::string Number;
		std::string Secret;
	public :
		Contact();	//constructor
		~Contact();	//destructor
		
		//getter
		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getNickName() const;
		std::string getNumber() const;
		std::string getSecret() const;

		//setter
		void setFirstName(std::string str);
		void setLastName(std::string str);
		void setNickName(std::string nickname);
		void setNumber(std::string str);
		void setSecret(std::string str);
} ;

#endif