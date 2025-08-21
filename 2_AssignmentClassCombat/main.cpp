#include <iostream>
#include "Player.h"
#include "Archer.h"
#include "Thief.h"
#include "Magician.h"
#include "Warrior.h"
#include "Monster.h"
using namespace std;

int main(){
    string jobs[] = { "����", "������", "����", "�ü�" };
    int job_choice = 0;
    string nickname;

    Player* player = nullptr;

    cout << "* �г����� �Է����ּ���: ";
    cin >> nickname;
    cout << "<���� �ý���>" << endl;
    cout << nickname << "��, ȯ���մϴ�!" << endl;
    cout << "* ���Ͻô� ������ �������ּ���." << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << (i + 1) << ". " << jobs[i] << endl;
    }

    cout << "����: ";
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
        cout << "�߸��� �Է��Դϴ�." << endl;
    }

    player->Attack();
    player->printPlayerStatus();
    cout << player->getNickname();

    cout << endl << endl << endl;
    
    //��Ʋ �ý���
    Monster* monster = new Monster("����");

    int input = 0;
    while (input != 5)
    {
        cout << "1. �÷��̾ ����" << endl << "2. ���Ͱ� ����" << endl << "5. ������" << endl;
        cin >> input;

        if (std::cin.good())
        {
            //std::cout << "�Էµ� ����: " << num << std::end
            // l;
            // ��ȿ�� �Է��̹Ƿ� ���� ���
        }
        else
        {
            std::cout << "�߸��� �Է��Դϴ�. �ٽ� �õ��ϼ���." << std::endl;
            std::cin.clear(); // ��Ʈ�� ���� �ʱ�ȭ
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ���� ����
        }

        switch (input)
        {
        case 1:
            player->Attack(monster);
            if (monster->setHP(monster->getHP()) == false)
            {
                cout << "������ �������� ������ ����." << endl;
                input = 5;
            }
            break;
        case 2:
            monster->Attack(player);
            if (player->setHP(player->getHP()) == false)
            {
                cout << "�÷��̾��� �������� ������ ����." << endl;
                input = 5;
            }
            break;
        case 5:
            cout << "������" << endl;
            break;
        default:
            break;
        }
    }
    return 0;
}