#include<iostream>
using namespace std;

class Strategy{
    public:
        virtual ~Strategy() = default;
        virtual int meleeattack(int base,int bonus) = 0;
        virtual int rangeattack(int base, int bonus)=0;
};
class Level1Strategy : public Strategy{
    public:
        int meleeattack(int base,int bonus)override{
            return base + bonus;
        }
        int rangeattack(int base,int bonus)override{
            return base + bonus;
        }
};

class Level2Strategy : public Strategy{
    public:
        int meleeattack(int base,int bonus)override{
            return base + bonus + 2;
        }
        int rangeattack(int base,int bonus)override{
            return base + bonus + 2;
        }
};
class Level3Strategy : public Strategy{
    public:
        int meleeattack(int base,int bonus)override{
            return base + bonus + 4;
        }
        int rangeattack(int base,int bonus)override{
            return base + bonus + 4;
        }
};

class Player{
    public:
        Player(Strategy* strat){
            level_strat = strat;
        }
        void setStrat(Strategy* strat){
            level_strat = strat;
        }
        int meleeAttack(int base_dmg,int stat_bonus){
            return level_strat->meleeattack(base_dmg,stat_bonus);
        }
        int rangeAttack(int base_dmg,int stat_bonus){
            return level_strat->rangeattack(base_dmg,stat_bonus);
        }
    private:
        Strategy* level_strat;
};

int main(){
    Level1Strategy l1;
    Level2Strategy l2;
    Level3Strategy l3;

    Player player1(&l1);

    cout<<"Level 1 Melee Attack Damage: "<<player1.meleeAttack(1,1)<<"\n";
    cout<<"Level 1 Ranged Attack Damage: "<<player1.rangeAttack(1,1)<<"\n";

    cout<<"Level up !"<<"\n";
    player1.setStrat(&l2);

    cout<<"Level 2 Melee Attack Damage: "<<player1.meleeAttack(1,1)<<"\n";
    cout<<"Level 2 Ranged Attack Damage: "<<player1.rangeAttack(1,1)<<"\n";

    cout<<"Level up !"<<"\n";
    player1.setStrat(&l3);

    cout<<"Level 3 Melee Attack Damage: "<<player1.meleeAttack(1,1)<<"\n";
    cout<<"Level 3 Ranged Attack Damage: "<<player1.rangeAttack(1,1)<<"\n";
}