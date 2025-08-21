#include <iostream>
#include "Player.h"
#include "Archer.h"
#include "Thief.h"
#include "Magician.h"
#include "Warrior.h"
#include "Monster.h"
using namespace std;

int main(){
    string jobs[] = { "전사", "마법사", "도적", "궁수" };
    int job_choice = 0;
    string nickname;

    Player* player = nullptr;

    cout << "* 닉네임을 입력해주세요: ";
    cin >> nickname;
    cout << "<전직 시스템>" << endl;
    cout << nickname << "님, 환영합니다!" << endl;
    cout << "* 원하시는 직업을 선택해주세요." << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << (i + 1) << ". " << jobs[i] << endl;
    }

    cout << "선택: ";
    cin >> job_choice;

    switch (job_choice)
    {
    case 1:
        player = new Warrior(nickname);
        break;
    case 2:
        player = new Magician(nickname);
        break;
    case 3:
        player = new Thief(nickname);
        break;
    case 4:
        player = new Archer(nickname);
        break;
    default:
        cout << "잘못된 입력입니다." << endl;
    }

    player->Attack();
    player->printPlayerStatus();
    cout << player->getNickname();

    cout << endl << endl << endl;
    
    //배틀 시스템
    Monster* monster = new Monster("구울");

    int input = 0;
    while (input != 5)
    {
        cout << "1. 플레이어가 공격" << endl << "2. 몬스터가 공격" << endl << "5. 나가기" << endl;
        cin >> input;

        if (std::cin.good())
        {
            //std::cout << "입력된 정수: " << num << std::end
            // l;
            // 유효한 입력이므로 루프 통과
        }
        else
        {
            std::cout << "잘못된 입력입니다. 다시 시도하세요." << std::endl;
            std::cin.clear(); // 스트림 상태 초기화
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // 버퍼 비우기
        }

        switch (input)
        {
        case 1:
            player->Attack(monster);
            if (monster->setHP(monster->getHP()) == false)
            {
                cout << "몬스터의 죽음으로 게임이 끝남." << endl;
                input = 5;
            }
            break;
        case 2:
            monster->Attack(player);
            if (player->setHP(player->getHP()) == false)
            {
                cout << "플레이어의 죽음으로 게임이 끝남." << endl;
                input = 5;
            }
            break;
        case 5:
            cout << "나가기" << endl;
            break;
        default:
            break;
        }
    }
    return 0;
}