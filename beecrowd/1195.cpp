#include <bits/stdc++.h>
using namespace std;

struct no{
    int val;
    no* left;
    no* right;

    no(int v) : val(v), left(nullptr), right(nullptr) {}
};

struct binary_tree{
    no* raiz;
    int tamanho;
    vector<no*> folhas;

    binary_tree() : raiz(nullptr), tamanho(0) {}
};

void add_folha(no* raiz, no* folha){
    if (folha->val < raiz->val){
        if (raiz->left == nullptr){
            raiz->left = folha;
        } else {
            add_folha(raiz->left, folha);
        }
    } else {
        if (raiz->right == nullptr){
            raiz->right = folha;
        } else {
            add_folha(raiz->right, folha);
        }
    }
}

void print_pre(no* raiz){
    if (raiz != nullptr){
        cout << " " << raiz->val;
        print_pre(raiz->left);
        print_pre(raiz->right);
    }
}

void print_in(no* raiz){
    if (raiz != nullptr){
        print_in(raiz->left);
        cout << " " << raiz->val;
        print_in(raiz->right);
    }
}

void print_post(no* raiz){
    if (raiz != nullptr){
        print_post(raiz->left);
        print_post(raiz->right);
        cout << " " << raiz->val;
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    
    int t, qtd_fo, fo, count = 0;
    cin >> t;
    while (t--){
        cin >> qtd_fo;
        binary_tree minha_arvore;
        minha_arvore.tamanho = qtd_fo;
        count++;
        
        bool first_num = true;

        while (qtd_fo--){
            cin >> fo;
        
            no* minha_folha = new no(fo);

            minha_arvore.folhas.push_back(minha_folha);

            if (first_num){
                minha_arvore.raiz = minha_folha;
                first_num = false;
            }  else {
                add_folha(minha_arvore.raiz, minha_folha);
            }

        }
        
        cout << "Case " << count << ":\n";
        cout << "Pre.:"; print_pre(minha_arvore.raiz); cout << "\n";
        cout << "In..:"; print_in(minha_arvore.raiz); cout << "\n";
        cout << "Post:"; print_post(minha_arvore.raiz); cout << "\n";
        cout << "\n";
    
    }

    return 0;
}