#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <fstream>
#include <Windows.h>
 
using namespace std;
 
/*-----��Ҫ�������������------*/
typedef struct/*������������Ľṹ*/
{
    unsigned int weight;/*Ȩֵ*/
    unsigned int parent, lchild, rchild;/*���ڵ� ��ڵ� �ҽڵ�*/
}HTNode, * HuffmanTree;/*��̬��������洢�շ�����*/
 
typedef char** HuffmanCode;/*��̬��������洢�շ��������*/
 
typedef struct {/*�洢����ɨ��ͳ�ƽ��*/
    char* data;/*��ʾ�ļ��е��ַ����൱�ڹ��������Ľ�㣩*/
    int* cou;/*ͬһ���ַ����ļ��г��ֵĴ���*/
    int length;/*�ļ����ַ��ܳ���*/
}TNode;
 
void table() {
    cout << "1��ѹ���ļ�" << endl;
    cout << "2����ѹ�ļ�" << endl;
    cout << "3������ļ�" << endl;
    cout << "4���Ƚ��ļ�" << endl;
    cout << "5��  �˳�  " << endl;
}
 
void ReadFile(vector<char>& f) {/*��ȡ�ļ�*/
    char path[500];/*�ļ�·��*/
    char ch;
    cout << "���������ļ���·����" << endl;
    cin >> path;/*�Ӽ�������·��*/
 
    /*����һ���������ļ�path������copy��,
    ��ios::in��ʽ ��,in��ʽ��ʾҪ��ȡ�ļ�,
    �ļ������ڵĻ�,�������ļ�,���ǵõ�һ���յ�ifstream����*/
    ifstream infile(path, ios::in);
    if (!infile) {/*�ļ�������*/
        cout << "wrong open!!" << endl;
        exit(1);/*�˳���ǰ���еĳ��򣬲�������1���ظ���������*/
    }
    while (infile.peek() != EOF) {/*��������������һ���ַ����ǲ���ȡ��*/
        infile.get(ch);/*��ȡ�ַ���ֵ��ch*/
        f.push_back(ch);/*���ַ�ch����vector*/
    }
    infile.close();/*�ر��ļ�*/
    cout << "���read" << endl;
    system("pause");
}
 
void InitList(TNode& N) {/*��ʼ��TNode����Ľ��*/
    N.data = new char[256];
    N.cou = new int[256];
    if (!N.data || !N.cou) exit(1);
    N.length = 0;
}
 
int Find(TNode N, char ch) {/*�鿴TNode���Ƿ���ch���У�����true���ޣ�����false*/
    for (int i = 0; i < N.length; i++)
        if (ch == N.data[i]) return true;/*ch��TNode����*/
    return false;/*ch��TNode�в�����*/
}
 
/*���ģ���vector�е����ݴ���TNode�ṹ����*/
void WriteTNode(vector<char> v, TNode& N) {
    char ch;/*�洢��ʱ�ַ�*/
    int len = v.size(), j = 0;
    for (int i = 0; i < len; i++) {/*����vector���� Ѱ����ͬ���ַ�*/
        ch = v[i];/*��ͬ���ַ���ʱ����v���������*/
        if (!Find(N, ch)) {
            /*�����vector�в�����û�ж���v����ͬ���ַ�
            ��ô�ͽ�v�е�ǰ�ַ�ch�����ݴ���TNode N��*/
            N.data[j] = ch;/*��ǰ�ַ�*/
            N.cou[j] = count(v.begin(), v.end(), ch);/*���ַ������˶��ٴ�*/
            j++;
            N.length++;
        }
    }
    cout << "���write" << endl;
    system("pause");
}
 
/*����HT��δ��ʹ�õ�Ȩֵ��С����������±�*/
void Select(HuffmanTree& HT, int n, int& min1, int& min2) {
    /*min1, min2��Сֵ�ʹ�Сֵ��Ӧ���±�*/
    min1 = min2 = 0;/*��ʼ��*/
    for (int i = 1; i < n; i++) {
        if (HT[i].parent != 0) continue;/*�Թ��Ѿ�����Ľ��*/
        if (min1 == 0) min1 = min2 = i;/*����ֵ*/
        else if (HT[i].weight <= HT[min1].weight) {/*min1����Сֵ*/
            min2 = min1; min1 = i;
        }
        else if (HT[i].weight < HT[min2].weight) {/*min2�Ǵ�Сֵ*/
            min2 = i;
        }
        else if (HT[i].weight > HT[min2].weight) {/*��ֹ����ֵ���*/
            if (min1 == min2) min2 = i;
        }
    }
}
 
/*�����������������ÿһ���ַ���Ӧ�ı���*/
void HuffmanCoding(HuffmanTree& HT, HuffmanCode& HC, TNode N) {
    int m, start, n = N.length;
    char* cd;
    unsigned int c, f;
    if (n <= 1) return;
    m = 2 * n - 1;/*ʵ����Ҫ�Ĵ洢�ռ�Ϊm*/
    HT = (HuffmanTree)malloc((m + 1) * sizeof(HTNode));/*0�ŵ�Ԫδ�� ��1��ʼ*/
    for (int i = 1; i <= n; i++) {/*����TNode��Ҷ�ڵ��ʼ��*/
        HT[i].parent = 0;
        HT[i].lchild = HT[i].rchild = 0;
        HT[i].weight = N.cou[i - 1];/*TNode��0��ʼ�洢 HT��1��ʼ�洢*/
    }
    for (int i = n + 1; i <= m; i++) {/*��ʼ����Ҷ�ڵ�*/
        HT[i].parent = HT[i].weight = 0;
        HT[i].lchild = HT[i].rchild = 0;
    }
    for (int i = n + 1; i <= m; i++) {/*�����շ�����*/
        int min1, min2;/*ѡ����С���������ϲ�*/
        Select(HT, i, min1, min2);
        HT[i].weight = HT[min1].weight + HT[min2].weight;
        HT[i].lchild = min1;
        HT[i].rchild = min2;
        HT[min1].parent = HT[min2].parent = i;
    }
    /*��Ҷ�ӵ���������ÿ���ַ��ĺշ�������*/
    HC = (HuffmanCode)malloc((n + 1) * sizeof(char*));/*����n���ַ������ͷָ������*/
    cd = (char*)malloc(n * sizeof(char));/*���������Ĺ����ռ�*/
    cd[n - 1] = '\0';/*���������*/
    for (int i = 1; i <= n; i++) {/*����ַ���շ�������*/
        start = n - 1;/*���������λ��*/
        for (c = i, f = HT[i].parent; f != 0; c = f, f = HT[f].parent) {/*��Ҷ�ӵ������������*/
            if (HT[f].lchild == c)
                cd[--start] = '0';
            else
                cd[--start] = '1';
        }
        HC[i] = (char*)malloc((n - start) * sizeof(char));/*Ϊ��i���ַ��������ռ�*/
        strcpy(HC[i], &cd[start]);/*��cd���Ʊ��루������HC*/
    }
    free(cd);/*�ͷŹ����ռ�*/
    cout << "���Huffman" << endl;
    system("pause");
}
 
void ZipFile(HuffmanCode HC, vector<char> v, TNode N) {/*ѹ���ļ�*/
    int i = 0, j = 0, k = 0;
    ofstream outfile("E:\\Amusement\\ZipFile.txt", ios::out);/*�ļ����������ʽ��*/
    if (!outfile) {/*�ļ�Ϊ��*/
        cerr << "wrong open!!" << endl;
        exit(1);/*���ִ��󣬷���ֵ1*/
    }
    for (i = 0; i < v.size(); i++) {/*����vector����*/
        for (j = 0; j < N.length; j++)
            if (N.data[j] == v[i]) break;
        for (k = 0; HC[j + 1][k] != '\0'; k++)/*�������������뽫����ѹ��*/
            outfile << HC[j + 1][k];
    }
    outfile.close();/*�ر��ļ�*/
    cout << "Zipping..."; Sleep(200); cout << "..."; Sleep(200); cout << "...";/*���û��ȵ�һЩʱ��*/
    cout << "Finished! You can find your new file at E:\\Amusement\\ZipFile.txt" << endl;/*��ʾ���ѹ��*/
    system("pause");
}
 
void RZipFile(HuffmanCode HC, TNode N) {/*��ѹ�ļ�*/
    int flag, flag2 = 0, m = 0, i, j;
    char ch;
    char ch2[55];
    ofstream outfile("E:\\Amusement\\RZipFile.txt", ios::out);/*�ļ�����ٳ���ʽ��;���û���ļ�����ô���ɿ��ļ�*/
    ifstream infile("E:\\Amusement\\ZipFile.txt", ios::in);/*���û���ļ�����ʧ��;����д�ļ�*/
    if (!outfile) {/*�ļ���ʧ��*/
        cerr << "wrong open!!" << endl;
        exit(1);/*���д��󣬷���ֵ1*/
    }
    if (!infile) {
        cerr << "wrong open!!" << endl;
        exit(1);/*���д��󣬷���ֵ1*/
    }
    while (infile.peek() != EOF) {
        flag = 0;
        char* cd = new char[N.length];
        for (i = 0;; i++) {
            infile >> ch;
            cd[i] = ch;
            cd[i + 1] = '\0';
            for (int j = 1; j <= N.length; j++) {
                if (strcmp(HC[j], cd) == 0) {
                    if (flag2 == 1) {
                        ch2[m] = N.data[j - 1];
                        flag = 1;
                        m++;
                        delete cd;
                        break;
                    }
                    if (flag2 == 0) {
                        outfile << N.data[j - 1];
                        flag = 1;
                        delete cd;
                        break;
                    }
                }
            }
            if (flag == 1)
                break;
        }
    }
    cout << "RZipping..."; Sleep(200); cout << "..."; Sleep(200); cout << "...";/*���û��ȵ�һЩʱ��*/
    cout << "Finished! You can find your new file at E:\\Amusement\\RZipFile.txt" << endl;/*��ʾ��ɽ�ѹ��*/
}
 
void OutPutFile(vector<char>& f) {
    char path[200];/*�ļ�·��*/
    char ch;
    cout << "����������Ҫ��ѯ���ļ�·��" << endl;
    cin >> path;/*�Ӽ�������·��*/
 
    ifstream infile(path, ios::in);
    if (!infile) {/*�ļ�������*/
        cout << "wrong open!!" << endl;
        exit(1);/*�˳���ǰ���еĳ��򣬲�������1���ظ���������*/
    }
    while (infile.peek() != EOF) {/*��������������һ���ַ����ǲ���ȡ��*/
        infile.get(ch);/*��ȡ�ַ���ֵ��ch*/
        f.push_back(ch);/*���ַ�ch����vector*/
    }
    infile.close();/*�ر��ļ�*/
    cout << "·����" << path << "���ļ�����" << endl;
    for (int i = 0; i < f.size(); i++)
        cout << f.at(i);
    cout << endl;
    f.clear();
    system("pause");
}
 
void CompareFile(vector<char>& f, vector<char>& v) {
    cout << ">>���������������������Ƚ��ļ�" << endl;
    ReadFile(f);
    ReadFile(v);
    //if (f.size() != v.size()) {
    //    cout << "�����Ƚϵ������ļ�����ͬ" << endl;
    //    return;
    //}
    /*һֱ���������һ�Ƚ�vector��������ݣ��������˲��Ͳ�֪������ֱ�ӱȽ�*/
    if (f == v)
        cout << "�����Ƚϵ������ļ����" << endl;
    else
        cout << "�����Ƚϵ������ļ������" << endl;
    return;
}
