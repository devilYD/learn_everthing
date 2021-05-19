#include"ADT.h"

int main() {
    int choose;
    vector<char> V, Vf, Vs, Vr;
    HuffmanTree HT;
    HuffmanCode HC;
    TNode N;
    InitList(N);
    while (1) {
        system("cls");
        table();
        cout << "���������Ĳ���:" << endl;
        cin >> choose;
        switch (choose) {
        case 1:
            cout << "-----��Ϊ������ѹ���ļ�����-----" << endl;
            ReadFile(V);/*��ָ���ļ� ��ȡ���� ����vector����*/
            WriteTNode(V, N);/*��vector�е����ݴ洢��NTode�ṹ��*/
            HuffmanCoding(HT, HC, N);/*��TNode�е����ݴ浽���������в����ɹ���������*/
            ZipFile(HC, V, N);/*ѹ���ļ�*/
 
            break;
        case 2:
            cout << "-----��Ϊ�����н�ѹ���ļ�����-----" << endl;
            RZipFile(HC, N);/*���ļ����ݽ��н���*/
            system("pause");
            break;
        case 3:
            cout << "-----��Ϊ����������ļ�����-----" << endl;
            OutPutFile(Vr);/*���ļ����ݽ���vector������ն�*/
            break;
        case 4:
            cout << "-----��Ϊ�����н�Ƚ��ļ�����-----" << endl;
            CompareFile(Vf, Vs);
            system("pause");
            //cout << ">>���������������������Ƚ��ļ�" << endl;
            //OutPutFile(Vf);
            //OutPutFile(Vs);
            /*ֱ�ӽ��������Ƚϵ��ļ���� ���۽��бȽ�*/
            break;
        case 5:
            return 0;
        default:
            cout << "������淶�����";
            system("pause");
            break;
        }
    }
    return 0;
}
