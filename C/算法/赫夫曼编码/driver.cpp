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
        cout << "请输入您的操作:" << endl;
        cin >> choose;
        switch (choose) {
        case 1:
            cout << "-----将为您进行压缩文件操作-----" << endl;
            ReadFile(V);/*打开指定文件 读取数据 存入vector容器*/
            WriteTNode(V, N);/*将vector中的数据存储到NTode结构中*/
            HuffmanCoding(HT, HC, N);/*将TNode中的数据存到哈夫曼树中并生成哈夫曼编码*/
            ZipFile(HC, V, N);/*压缩文件*/
 
            break;
        case 2:
            cout << "-----将为您进行解压缩文件操作-----" << endl;
            RZipFile(HC, N);/*对文件内容进行解码*/
            system("pause");
            break;
        case 3:
            cout << "-----将为您进行输出文件操作-----" << endl;
            OutPutFile(Vr);/*将文件内容借助vector输出到终端*/
            break;
        case 4:
            cout << "-----将为您进行解比较文件操作-----" << endl;
            CompareFile(Vf, Vs);
            system("pause");
            //cout << ">>请依次输入您的两个待比较文件" << endl;
            //OutPutFile(Vf);
            //OutPutFile(Vs);
            /*直接将两个待比较的文件输出 肉眼进行比较*/
            break;
        case 5:
            return 0;
        default:
            cout << "请输入规范的序号";
            system("pause");
            break;
        }
    }
    return 0;
}
