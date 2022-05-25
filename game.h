#ifndef GAME
#define GAME

#include <iostream>
#include <vector>


class Strategy {
	protected:
		bool won = false;
  
	public:
    Strategy() = default;
  	virtual void execute(){}
};


class even: public Strategy {
  private:
    std::vector<int> numbers = std::vector<int>(5);
  public:
    even() = default;
  	
  	void execute() override{
      //Create execute
    } 
};

class odd: public Strategy {
  private:
    std::vector<int> numbers = std::vector<int>(5);

  public:
    odd() = default;
  	//Create constructor
  	//Strategy(type _attribute): attribute(_attribute) {};
  	
  	void execute() override{
      //Create execute
    } 
};

class prime: public Strategy {
  private:
    int number;

  public:
    prime() = default;
  	//Create constructor
  	//Strategy(type _attribute): attribute(_attribute) {};
  	
  	void execute() override{
      //Create execute
    } 
};


class tens: public Strategy {
  private:
    std::vector<int> numbers = std::vector<int>(3);

  public:
    tens() = default;
  	//Create constructor
  	//Strategy(type _attribute): attribute(_attribute) {};
  	
  	void execute() override{
      //Create execute
    } 
};

class twenyfives: public Strategy {
  private:
    std::vector<int> numbers = std::vector<int>(2);

  public:
    twenyfives() = default;
  	//Create constructor
  	//Strategy(type _attribute): attribute(_attribute) {};
  	
  	void execute() override{
      //Create execute
    } 
};

class Game{
  private:
    //Attributes
    static Game* instance;
    std::vector<Strategy*>* strategies = new std::vector<Strategy*>(5);
      
    Game() = default;
    

    void addPlayers(){
      strategies->push_back(new even());
      strategies->push_back(new odd());
      strategies->push_back(new prime());
      strategies->push_back(new tens());
      strategies->push_back(new twenyfives());
    }

    int generateRandomNumber(){
      return 1;
    }

  public:

    static Game* getInstance(){
      if (instance == nullptr)
        instance = new Game();
      
      std::cout << "Instance returned succesfully";
      return instance;
    }



    void start(){
      addPlayers();
      generateRandomNumber();
    }

};

#endif